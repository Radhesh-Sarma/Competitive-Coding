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
  #define mod 1000000007
  #define N 405
  #define INF 1e16
  const double PI = acos(-1);



int32_t main()
{
       

    IOS

    int n,k;
    cin >> n >> k;

    vector<int> arr(n+1);

    for(int i = 1; i <= n; i++)
    {
      cin >> arr[i];
    }

    int dp[n+1][k+1];

    //  dp[i][j] denotes the number of ways to give j candies to first i students

    for(int i = 0; i <= n; i++)for(int j = 0; j <= k; j++)dp[i][j] = 0;

      for(int j = 0; j <= n; j++)dp[j][0] = 1;



        vector<int> pre(k+1);

    for(int i = 1; i <= n; i++)
    {

      pre[0] = dp[i-1][0]%mod;

      for(int s = 1; s <= k; s++)
      {
        pre[s] = (pre[s-1]%mod + dp[i-1][s]%mod + mod)%mod;
        pre[s] %= mod;
      }

      for(int j = 0; j <= k; j++)
      {
        if(j - arr[i] - 1 < 0)
          {
            dp[i][j] = pre[j]%mod;
          }
        else 
          {
            dp[i][j] = (pre[j]%mod - pre[j-arr[i]-1]+ mod)%mod;
          }
        dp[i][j]%= mod;
      }
    }



    cout << dp[n][k];






  

  return 0;
} 