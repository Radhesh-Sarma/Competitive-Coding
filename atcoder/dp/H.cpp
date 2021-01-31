#include <bits/stdc++.h>
using namespace std;

  #define trace1(x)                cerr<<#x<<": "<<x<<endl
  #define trace2(x, y)             cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
  #define trace3(x, y, z)          cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
  #define trace4(a, b, c, d)       cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl
  #define trace5(a, b, c, d, e)    cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl
  #define trace6(a, b, c, d, e, f) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<endl
  #define cases int testcases;cin>>testcases; while(testcases--)
  #define mod 1000000007
  #define N 1005

int dp[N][N];

int main()
{




  int m,n;
  cin >> m >> n;

  char arr[m+1][n+1];
  for(int i = 1; i <= m; i++)
  {
    for(int j = 1; j <= n; j++)
    {
      cin >> arr[i][j];
    }
  }


  dp[1][1] = 1;

  bool ok = true;
  for(int i = 1; i <= n; i++)
  {
    if(arr[1][i] == '#')
    {
      ok = false;
    }  
    dp[1][i] = ok;
  }

  ok = true;

    for(int i = 1; i <= m; i++)
  {
    if(arr[i][1] == '#')
    {
      ok = false;
    }  
    dp[i][1] = ok;
  }



  for(int i = 1; i <= m; i++)
  {
    for(int j = 1; j <= n; j++)
    {
      if(arr[i][j] == '.')
      {
        dp[i][j] = max((dp[i-1][j]%mod + dp[i][j-1]%mod)%mod,dp[i][j]%mod)%mod;
      }
    }
  }


    cout << dp[m][n] << endl;



    return 0;
}
