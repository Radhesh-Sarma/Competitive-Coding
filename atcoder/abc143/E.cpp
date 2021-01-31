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
  #define tracel5(a, b, c, d, e)    cerr<<#a<<": "<<a<<" | "<<#b<< ": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl
  #define trace6(a, b, c, d, e, f) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<endl
  #define cases int testcases;cin>>testcases; while(testcases--)
  const int N = 500;

const int INF = (1LL << 30) - 1;
  int dp[N][N];
  int dp2[N][N];


int32_t main()
{



    IOS

    for(int i = 0; i < N;i++)
    {
    	for(int j = 0; j < N;j++)
    	{
    		dp[i][j] = INF;
    		dp2[i][j] = INF;
    	}
    }


    int n,m,l;
    cin >> n >> m >> l;



    for(int i = 1; i<= m; i++)
    {
    	int a,b,c;
    	cin >> a >> b >> c;
    	dp[a][b] = min(dp[a][b],c);
    	dp[b][a] = min(dp[a][b],dp[b][a]);
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


    for(int i = 1; i <= n; i++)
    {
    	for(int j = 1; j <= n; j++)
    	{
    		//trace3(i,j,dp[i][j]);
    		if(dp[i][j] <=l)
    		{
    			dp2[i][j] = 1;
    			dp2[j][i] = 1;
    		}
    	}
    }




    for(int k = 1;  k <= n; k++)
    {
    	for(int i = 1; i <= n; i++)
    	{
    		for(int j = 1; j <= n; j++)
    		{
    			dp2[i][j] = min(dp2[i][j],dp2[i][k] + dp2[k][j]);
    		}
    	}
    }


    int q;
    cin >> q;

    while(q--)
    {
    	int x,y;
    	cin >> x >> y;
    	//trace2(x,y);
    	if(dp2[x][y] == INF )dp2[x][y] = 0;
    	cout << dp2[x][y] - 1<< endl;
    }










    return 0;
}


