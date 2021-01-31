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

const int INF = (1LL << 30) - 1;

 const int N = 1e5 + 5;

 vector<int> adj[N];
 vector<bool> vis(N,false);

 vector<int> depth(N,INF);


void bfs(int s)
{
	queue<int> q;
	q.push(s);
	depth[s] = 0;
	vis[s] = true;

	while(!q.empty())
	{
		int k = q.front();
		q.pop();

		for(auto i : adj[k])
		{
			if(!vis[i])
			{
				vis[i] = true;
				q.push(i);
				depth[i] = min(depth[i],depth[k]+1);
			}
		}
	}
}

int32_t main()
{


    IOS

   	int n;
   	cin >> n;

   	for(int i = 1; i <= n; i++)
   	{
   		int x;
   		cin >> x;

   		adj[i].push_back(x);
   	//	trace2(i,x);

   	}

   	bfs(1);

   	if(!vis[2])
   	{
   		cout << -1;
   		return 0;
   	}


   	cout << depth[2];














    return 0;
}


