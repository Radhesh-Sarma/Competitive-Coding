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

vector<int> r;

vector<int> fun(vector<int> &v)
{
  vector<int> ans;

  for(int i = 0; i < v.size(); i+=2)
  {
    if(r[v[i]] > r[v[i+1]])ans.push_back(v[i]);
    else ans.push_back(v[i+1]);
  }
  return ans;

}
int32_t main()
{


    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    IOS


    int n;
    cin >> n;

    n = (1LL << n);

    r.resize(n+1);

    rep(i,1,n)cin >> r[i];

    vector<int> v;

    rep(i,1,n)v.push_back(i);



    while(v.size() != 2)v = fun(v);



    cout << ((r[v[0]] < r[v[1]]) ? v[0] : v[1]);





    return 0;
}
