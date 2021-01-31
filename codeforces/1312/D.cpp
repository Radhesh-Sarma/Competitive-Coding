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
  const int mod2 = 998244353;
  const int N = 200005;
  const int INF = 1e16;
  const double PI = acos(-1);


int mod_exp(int a, int m,int mod)
{
  int r = 1;
  while(m > 0)
  {
    if(m&1)
      r = (r*a)%mod;
    a = (a*a)%mod;
    m >>= 1;
  }
  return r;
}

int inv(int x,int mod)
{
  return mod_exp(x,mod - 2,mod);
}

int choose(int n, int r,int mod)
{
    r = min(r, n-r)%mod;
    int ans = 1;
    for(int i = 1; i <= r; ++i)
    {
        ans *= (n - r + i)%mod;
        ans%=mod;

        ans *= inv(i,mod)%mod;
        ans %= mod;
    }
    return ans%mod;
}

int32_t main()
{
       

    IOS
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n, m;
    cin >> n >> m;

    if(n <= 2)
    {
      cout << 0;
      return 0;
    }

    int ans = mod_exp(2,n-3,mod2)%mod2;

    ans *= (n-2)%mod2;
    ans %= mod2;

    ans *= (choose(m,n-1,mod2)%mod2);

    ans%= mod2;

    cout << ans;


  return 0;
} 