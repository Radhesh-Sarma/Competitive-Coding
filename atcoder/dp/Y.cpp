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




const int mod = 1000000007;
const int INF = (1LL << 62) - 1;

#define MAXN 300005

#define N 300005
int fac[N],invfac[N];


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

int modinv(int x)
{
  return modexp(x,mod-2)%mod;
}



void precompute()
{
  fac[0] = 1;
  for(int i = 1; i < N; i++)
  {
    fac[i] = (fac[i-1]%mod)*(i%mod);
    fac[i] %= mod;
  }

  for(int i = 0; i < N; i++)
  {
    invfac[i] = modinv(fac[i])%mod;
  }


}


int ways(int a,int b)
{
  int ans = fac[a+b]%mod;
  ans *= invfac[a]%mod;
  ans %=mod;
  ans *= invfac[b]%mod;
  ans %= mod;
  return ans;
}


bool customsort(const pair<int,int> &a,const pair<int,int> &b)
{
  return a.first + a.second < b.first + b.second;
}



int32_t main()
{


    IOS


    precompute();

    int h,w,n;
    cin >> h >> w >> n;

    vector<pair<int,int>> v;

    for(int i = 0; i < n; i++)
    {
      int x,y;
      cin >> x >> y;
      v.push_back(make_pair(x,y));
    }


    sort(all(v),customsort);
    v.push_back(make_pair(h,w));

    vector<int> dp(n+1);
    dp[0] = ways(v[0].first-1,v[0].second-1);

    int x = dp[0];

    for(int i = 1; i <= n; i++)
    {
      int ans = ways(v[i].first-1,v[i].second-1);

      for(int j = 0; j < i; j++)
      {
        if(v[j].first <= v[i].first and v[j].second <= v[i].second)
        {
        ans -= (dp[j]*ways(v[i].first-v[j].first,v[i].second-v[j].second))%mod;
        ans += mod;
        ans %=mod;
        }
      }

      dp[i] = ans%mod;

    }


    cout << dp[n];





    
    return 0;
}

