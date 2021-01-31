#include <bits/stdc++.h>
using namespace std;
  #define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  #define int long long
  #define endl "\n"
  const int N = 200005;
  #define all(v) v.begin(),v.end()
  #define double long double
  #define trace1(x)                cerr<<#x<<": "<<x<<endl
  #define trace2(x, y)             cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
  #define trace3(x, y, z)          cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
  #define trace4(a, b, c, d)       cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl
  #define trace5(a, b, c, d, e)    cerr<<#a<<": "<<a<<" | "<<#b<< ": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl
  #define trace6(a, b, c, d, e, f) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<endl
  #define cases int testcases;cin>>testcases; while(testcases--)
const int MOD = 1000000007;
const int INF = (1LL << 62) - 1;

#define MAXN 200005

vector<int> segmnt(4*MAXN);
int compute(int x,int y)
{
  return max(x,y);
}
void build(vector<int> &v,int curr,int ss,int se)
{
  if(ss == se)
  {
    segmnt[curr] = v[ss];
  }
  else
  {
    int left = 2*curr;
    int right = 2&curr+1;
    int mid = ss + (se-ss)/2;

    build(v,left,ss,mid);
    build(v,right,mid+1,se);
    segmnt[curr] = compute(segmnt[left],segmnt[right]);  

  }
}

int query(int curr,int ss,int se,int l,int r)
{
  if(l > r or l > se or r < ss)return -INF;
  if(ss >=l and se <= r)return segmnt[curr];

  int left = 2*curr;
  int right = 2*curr+1;
  int mid = ss + (se-ss)/2;

  int leftanswer = query(left,ss,mid,l,min(r,mid));
  int rightanswer = query(right,mid+1,se,max(l,mid+1),r);
  return compute(leftanswer,rightanswer);
}

void update(int curr,int ss,int se,int pos,int new_value)
{
  if(ss == se)
  {
    segmnt[curr] = new_value;
  }
  else
  {
    int left = 2*curr;
    int right = 2*curr+1;
    int mid = ss +(se-ss)/2;

    if(pos <= mid)update(left,ss,mid,pos,new_value);
    else update(right,mid+1,se,pos,new_value);

    segmnt[curr] = compute(segmnt[left],segmnt[right]);
  }
}

int32_t main()
{



    IOS



    int n;
    cin >> n;

    vector<int> v(n+1,0),dp(n+1,0),h(n+1),a(n+1);

    for(int i = 1; i <= n; i++)
    {
      cin >> h[i];
      
    }

    for(int i = 1; i <= n; i++)
    {
      cin >> a[i];
    }




    build(dp,1,1,n);

    for(int i = 1; i <= n; i++)
    {
      dp[h[i]] = a[i];
      int ans;
      if(h[i]-1 < 1)ans =0;
      else ans = query(1,1,n,1,h[i]-1);
      dp[h[i]] = max(dp[h[i]],ans + a[i]);
      update(1,1,n,h[i],dp[h[i]]);
    }


    int ans = 0;

    for(int i = 0; i <= n; i++)
    {
      ans = max(dp[i],ans);
      //cout << dp[i] << " ";
    }

    cout << ans;




    
    return 0;
}

