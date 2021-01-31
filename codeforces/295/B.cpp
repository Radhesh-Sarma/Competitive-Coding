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
  const int N = 505;


int adj[N][N];
int dp[N][N]; // denotes the shortest distance between vertex i and j 

	vector<int> v1;
vector<bool> vis(N,false);

int32_t main()
{


    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    IOS

    int n;
    cin >> n;

    for(int i = 1; i<= n; i++)
    {
    	for(int j = 1; j <= n; j++)
    	{
    		cin >> adj[i][j];
    		dp[i][j] = adj[i][j];
    	}
    }






        vector<int> v(n);

    for(int i = 0; i < n; i++)cin >> v[i];


    reverse(all(v));




	int ans = 0;



	int x = 1;


	for(int k = 0; k < n; k++)
	{
		int ans = 0;
		vis[v[k]] = true;
		for(int i = 1; i <= n; i++)
		{
			for(int j = 1; j <= n; j++)
			{
				dp[i][j] = min(dp[i][j],dp[i][v[k]]+dp[v[k]][j]);
				if(vis[i] and vis[j])ans += dp[i][j];
			}
		}

		v1.push_back(ans);
	}


	reverse(all(v1));

	for(auto i : v1)
	{
		cout << i << " "; 
	}









    return 0;
}

