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
  #define MOD 998244353
  #define N 405
  #define INF 1e16
  const double PI = acos(-1);



int32_t main()
{
       


    int n;
    cin >> n;

    int dp[n+1][n+1];

    //dp[i][j] denotes the minimum cost to combine slimes from i to j

    for(int i = 0; i <= n; i++)
      {
        for(int j = 0; j <= n; j++)dp[i][j] = INF;
      }

    vector<int> arr(n+1),pre(n+1,0);

    for(int i = 1; i <=n; i++)
    {
      cin >> arr[i];
      pre[i] = pre[i-1] + arr[i];
      dp[i][i] = 0;
    }



    for(int i = 2; i <= n; i++)
    {
      //  here outer loop i represents the length of the interval being considered 
      for(int j = 1; j + i - 1<=n; j++)
      {
        int l = j;
        int r = j + i - 1;
        
           for(int k = l; k < r; k++)
          {
              int leftcost = pre[k]-pre[l-1];
              int rightcost = pre[r] - pre[k];

              dp[l][r] = min(dp[l][r],dp[l][k] + dp[k+1][r] + leftcost + rightcost);
          }
      }
    }

 
    cout << dp[1][n];



  return 0;
} 