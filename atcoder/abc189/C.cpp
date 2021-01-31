#include <bits/stdc++.h>
using namespace std;
  #define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  #define int long long
  #define endl "\n"
  #define all(v) v.begin(),v.end()
  #define double long double
  #define trace1(x)                cerr<<#x<<": "<<x<<endl
  #define trace2(x, y)             cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
  #define trace3(x, y, z)          cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
  #define trace4(a, b, c, d)       cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl
  #define trace5(a, b, c, d, e)    cerr<<#a<<": "<<a<<" | "<<#b<< ": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl
  #define trace6(a, b, c, d, e, f) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<endl
  #define cases int testcases;cin>>testcases; while(testcases--)
  const int N = 200005;


const int MAXN = 100005;
int st[MAXN][25];
vector<int> log_table(MAXN,0);
int combine(int x,int y)
{
  // Change Accordingly
  return min(x,y);
}
void build(vector<int> &v)
{
  for(int i = 2; i < MAXN; i++)log_table[i] = log_table[i/2] + 1;
  for(int i = 0; i < v.size(); i++)st[i][0] = v[i];

  for(int j = 1; j < 25; j++)
    for(int i = 0; i + (1 << (j))<=v.size(); i++)
      st[i][j] = combine(st[i][j-1],st[i + (1 << (j-1))][j-1]);
}
int query(int l,int r)
{
  int k = log_table[r-l];
  return combine(st[l][k],st[r-(1<<k)+1][k]);
}

vector<int> v;
    int n;


int bs1(int l)
{
	int ans ;
	int low = l;

	int high = n;


	while(low <= high)
	{
		int mid = low + (high-low)/2;

		if(query(l,mid) == v[l])low = mid + 1;
		else high = mid -1;

	}


	return low - 1;
}

int bs2(int l)
{
	int ans ;
	int low = 1;

	int high = l;


	while(low <= high)
	{
		int mid = low + (high-low)/2;
		
		if(query(mid,l) == v[l])high = mid - 1;
		else low = mid + 1;

	}


	return low ;
}
int32_t main()
{


    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    IOS




    cin >> n;

    v.resize(n+1,0);

    for(int i = 1; i <= n; i++)
    {
    	cin >> v[i];
    }

    build(v);




    int ans = 0;

    for(int i = 1; i <= n; i++)
    {
    	ans = max(ans,v[i]*(bs1(i)-bs2(i)+1));
    }

    cout << ans;

    return 0;
}
