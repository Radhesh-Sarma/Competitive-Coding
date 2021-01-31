  #include<bits/stdc++.h>
  using namespace std;
  #define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  #define endl "\n"
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
  #define MOD 998244353
  #define N 200005
  #define INF 1000000000000
  #define eps 1e-6


int ans[10];

int32_t main()
{



    int n,m;
    cin >> n >> m;

    unordered_map<int,int> mp;


    for(int i = 1 ; i <= m; i++)
    {
      int x,y;
      cin >> x >> y;
      if(x == 1 and y == 0 and n != 1)
      {
        cout << -1;
        return 0;
      }
      if(mp.find(x) != mp.end())
      {
        if(mp[x] != y)
        {
          cout << "-1";
          return 0;
        }
      }
      mp[x] = y;
    }

    for(auto &i : mp)
    {
      ans[i.f] = i.s;
    }

    if(n != 1)
    {

      if(mp.find(1) == mp.end())
      {
        ans[1] = 1;
      }
    }

    for(int i = 1; i <= n; i++)
    {
      cout << ans[i];

    }

    return 0;
}