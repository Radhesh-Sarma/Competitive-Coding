  //Keep Working Hard
  // I__Like__Food
  #include<bits/stdc++.h>
  #include <ext/pb_ds/assoc_container.hpp> 
  #include <ext/pb_ds/tree_policy.hpp>
  #pragma comment(linker, "/stack:200000000")
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
  #define MOD 998244353
  #define N 305
  #define INF 1e16
  const double PI = acos(-1);

int dp[N][N];
int32_t main()
{




    int h,w;
    cin  >> h >> w;
    
    char arr[h+1][w+1];



    for(int i = 1; i <= h; i++)
    {
      for(int j = 1; j <= w; j++)
      {
        cin >> arr[i][j];
      }
    }

    for(int i = 0; i <= h; i++)
    {
      for(int j =0; j <= w; j++)
      {
        dp[i][j] = INF;
      }
    }
    dp[0][1] = dp[1][0] = 0;


    for(int i =1; i <= h; i++)
    {
      for(int j =1; j <= w; j++)
      {
        int ans = min(dp[i-1][j],dp[i][j-1]) + 1;

        if(arr[i][j] == '.')dp[i][j] = min(dp[i-1][j],dp[i][j-1]);
        else
        {
        if(arr[i-1][j] == '#')ans = min(ans,dp[i-1][j]);
        if(arr[i][j-1] == '#')ans = min(ans,dp[i][j-1]);
        dp[i][j] = ans;
      } 
      
   
      }
    }








    cout << dp[h][w];
    

  return 0;
} 