  //Keep Working Hard
  // I__Like__Food  

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp>

#pragma GCC optimize("O3")
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")

using namespace std;
using namespace __gnu_pbds;

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

const int N = 305;

int dp[N][N];

int n,k;

int32_t main()
{



    IOS

    cin >> n;

    for(int i = 1; i <= n; i++)
    {
      for(int j = 1; j <= n; j++)
      {
        cin >> dp[i][j];
      }
    }


    

    for(int k = 1; k <= n; k++)
    {
      for(int i = 1; i <= n; i++)
      {
        for(int j = 1; j <= n; j++)
        {
          dp[i][j] = min(dp[i][j],dp[i][k] + dp[k][j]);
        }
      }
    }


    cin >> k;


    for(int i = 1; i <= k; i++)
    {
        int x, y, z;
        cin >> x >> y >> z;
         dp[x][y] =  min(dp[x][y],z);
        dp[y][x] = min(dp[y][x],z);

        int ans =0;

         for(int i = 1; i <= n; i++)
         {
            for(int j = 1; j <= n; j++)
            {
              dp[i][j] = min(dp[i][j],dp[i][x] + dp[x][y] + dp[y][j]);
              dp[i][j] = min(dp[i][j],dp[i][y] + dp[y][x] + dp[x][j]);
              ans += dp[i][j];
            }
         }
         cout << ans/2 << " " ;
    }


    return 0;
}

