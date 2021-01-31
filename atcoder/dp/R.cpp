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


int n,k;



vector<vector<int>> multiply(vector<vector<int>> a,vector<vector<int>> b)
{
 vector<vector<int>> ans(n,vector<int>(n,0));

  for(int i = 0; i < n; i++)
  {
    for(int j = 0; j < n; j++)
    {
      for(int k = 0;k < n; k++)
      {
        ans[i][j] += (a[i][k]%mod * b[k][j]%mod);
        ans[i][j] %= mod;
      }
    }
  }
  return ans;
}

int32_t main()
{



    IOS

    
    cin >> n >> k;


    vector<vector<int>> adj(n,vector<int>(n));

    for(int i = 0; i < n; i++)
    {
      for(int j = 0;j < n; j++)
      {
        cin >> adj[i][j];
      }
    }

vector<vector<int>> dp(n,vector<int>(n,0));

for(int i = 0; i < n;i++)
{
  dp[i][i] = 1;
}


    while(k)
    {
      if(k%2)dp = multiply(dp,adj);
      adj = multiply(adj,adj);
      k/=2;
    }


    int ans = 0;




    for(auto i : dp)
    {
      for(auto j : i)
      {
        ans += j%mod;
        ans %= mod;
        
      }
    }
    cout << ans;





    return 0;
}

