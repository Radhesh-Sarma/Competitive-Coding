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

int n,a,b,c,d;
const int INF = (1LL << 62) - 1;
unordered_map<int,int> dp;

int rec(int curr)
{   
    if(curr == 0)return 0;
    if(curr == 1)return d;
    if(dp.find(curr) != dp.end())return dp[curr];

    int ans = INF;

    if(curr < ans/d)ans = curr*d;

    if(curr%5 == 0)ans = min(ans,c+ rec(curr/5));
    else 
    {   
        int rem = curr%5;
        int rem2 = 5 - curr%5;
        ans = min({ans,rem*d + c + rec((curr-rem)/5),rem2*d + c + rec((curr + rem2)/5)});
    }

    if(curr%3 == 0)ans = min(ans,b+ rec(curr/3));
    else
    {
        int rem = curr%3;
        int rem2 = 3 - curr%3;
        ans = min({ans,rem*d + b + rec((curr-rem)/3),rem2*d + b + rec((curr + rem2)/3)});
    }

    if(curr%2 == 0)ans = min(ans,a + rec(curr/2));
    else
    {
        ans = min({ans,d + a + rec((curr-1)/2),d + a + rec((curr + 1)/2)});
    }

 

    return dp[curr] =  ans;
}
int32_t main()
{


    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    IOS

    cases 
    {
    cin >> n >> a >> b >> c >> d;

    cout <<  rec(n) << endl;

    // for(auto i : dp)
    // {
    //     cout << i.first << " " << i.second << endl;
    // }
    dp.clear();
    }






    return 0;
}
