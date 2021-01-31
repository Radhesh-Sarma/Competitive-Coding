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



int arr[3005][3005];
int dp[3005][3005][4];

int32_t main()
{


    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    IOS

    int r,c,k;
    cin >> r >> c >> k;

    
    

    // dp[r][c][0] did'nt pick this item
    // dp[r][c][1] picked this item , and first to pick
    // dp[r][c][2] picked this item , and second consecutive
    // dp[r][c][3] picked this item , and third consecutive

    for(int i = 1; i <= k; i++)
    {
      int x,y,val;
      cin >> x >> y >> val;
      arr[x][y] = val;
    } 




    

    for(int i = 1; i <= r; i++)
    {
      for(int j = 1; j <= c; j++)
      {
        for(int l = 0; l <= 3; l++)
        {
          dp[i][j][0] = max({dp[i][j][0],dp[i-1][j][l]});
        }

        for(int l = 1; l <= 3; l++)
        {
          dp[i][j][l] = max({dp[i][j][l],dp[i][j-1][l-1] + arr[i][j],dp[i][j-1][l]});
        }

        for(int l = 1; l <= 3; l++)
        {
            for(int p = 1; p <= 3; p++)
            {
               dp[i][j][l] = max(dp[i][j][l],dp[i-1][j][p] + arr[i][j]);
            }
          
        }
      }
    }

  
    cout << max({dp[r][c][0],dp[r][c][1],dp[r][c][2],dp[r][c][3]});




    return 0;
}
