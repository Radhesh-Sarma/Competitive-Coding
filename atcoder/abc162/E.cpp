  //Keep Working Hard
  // I__Like__Food  
  #include<bits/stdc++.h>
  #include <ext/pb_ds/assoc_container.hpp> 
  #include <ext/pb_ds/tree_policy.hpp>
  #define rep(i,a,b) for(int i = a; i <=b; i++)
  #define rep2(i,a,b) for(int i = a; i>=b; i--)
  #pragma GCC optimize("O3")
  #pragma GCC optimize("Ofast") 
  #pragma GCC optimize("unroll-loops")
  using namespace std;
  using namespace __gnu_pbds;
  #define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  #define endl "\n"
  #define int long long
  #define all(v) v.begin(),v.end()
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
  const int mod = 1e9 + 7;
  const int N = 100005;
  const int INF = 1e16;
  const double PI = acos(-1);

int dp[N];

int modexp(int x, int y)
{
    int res = 1;
    x = (x % mod + mod) % mod;
    while(y)
    {
        if(y & 1)
            res = (res*x) % mod;
        y >>= 1;
        x = (x*x) % mod;
    }
    return res%mod; 
}

int32_t main()
{

    int n,k;
    cin >> n >> k;

    dp[k] = 1;

    for(int i = k - 1; i >= 1; i--)
    {
      dp[i] = modexp((k/i),n)%mod;

      for(int j = 2*i; j <= k; j += i)
      {
        dp[i] -= dp[j];
        dp[i] += mod;
        dp[i] %= mod;
      }
    }

    int ans = 0;

    for(int i = 1; i <= k ;i++)
    {
      ans += ((dp[i]%mod)*(i%mod))%mod;
      ans %= mod;
    }

    cout << ans%mod ;
    return 0;
}