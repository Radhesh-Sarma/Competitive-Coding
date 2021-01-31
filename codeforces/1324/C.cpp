   #include<bits/stdc++.h>
  using namespace std;
  #define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  #define endl "\n"
  #define int long long
  #define all(v) v.begin(),v.end()
  #define f first
  #define s second
  #define PB push_back
  #define MP make_pair
  #define double long double
  #define trace1(x)                cerr<<#x<<": "<<x<<endl
  #define trace2(x, y)             cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
  #define trace3(x, y, z)          cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
  #define trace4(a, b, c, d)       cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl
  #define trace5(a, b, c, d, e)    cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl
  #define trace6(a, b, c, d, e, f) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<endl
  #define cases int testcases;cin>>testcases; while(testcases--)
  #define MOD 1000000007
  #define N 100005



bool check(string s,int d)
{
  vector<int> v;
  for(int i = 0; i < s.length(); i++)
  {
    if(s[i] == 'R')
    {
      v.push_back(i+1);
    }
  }

  int currentpos = 0;

  for(int i = 0; i < v.size(); i++)
  {
    //trace2(v[i],currentpos);
    if(v[i] - currentpos > d)return false;
    else currentpos = v[i];
  }

  //trace1(s.length());
  if(s.length() + 1 - currentpos > d)return false;
  return true;
}

int binarysearch(int low,int high,string s)
{
  int mid = low + (high-low)/2;
  while(low <= high)
  {
    mid = low + (high-low)/2;
    //trace1(mid);
    if(check(s,mid))
    {
      high = mid - 1;
    }
    else
    {
      low = mid + 1;
    }
  }
  return mid;
}
int32_t main()
{

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif


    

    cases
    {

      string s;
      cin >> s;
      int ans =  binarysearch(1,s.length()+1,s);
      if(!check(s,ans))
      {
        ans++;
      }
      cout << ans << endl;
    }
  return 0;
}