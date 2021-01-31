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
  #define rep(i, x, y)   for (__typeof(x) i = x; i <= y; i ++)
  #define repi(i, x, y)  for (__typeof(x) i = x; i >= y; i --)

const int INF = (1LL << 30) - 1;
bool custom(pair<int, int> &a,pair<int, int> &b)
{
  if(a.first == b.first)return a.second < b.second;
  return a.first < b.first;

}
int32_t main()
{


    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    IOS




    int n,m;
    cin >> n >> m;

    vector<int> dp(n+1,-INF);
    vector<int> p(n+1);

  rep(i,1,n)
  {
    cin >> p[i];
  }

    vector<pair<int, int>> v;

    rep(i,1,m)
    {
      int x,y;
      cin >> x >> y;
      v.push_back({x,y});

    }

    sort(all(v),custom);
    for(auto &i : v)
    {
      dp[i.second] = max(dp[i.second], max(dp[i.first],0LL) + p[i.second]-p[i.first]);
    }




    cout << *max_element(all(dp));


   


    return 0;
}
