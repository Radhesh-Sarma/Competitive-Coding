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
  const int N = 100005;
const int INF = (1LL << 62) - 1;

vector<pair<int,int>> adj[N];
    int n,m;

vector<int> dijkstra(vector<pair<int, int>> g[], int source, int destination)
{
    vector<int> arrival(N, INF), departure(N, INF);
    vector<int> vis(N), parent(N), ans;
    arrival[source] = 0;
    set<pair<int, int>> s;
    s.insert({0, source});
    while(!s.empty())
    {
        auto [ignore, u] = *s.begin();
        s.erase(s.begin());
        vis[u] = 1;
        departure[u] = arrival[u];
        for(auto [v, w]: g[u])
        {
            if(arrival[v] > departure[u] + w)
            {
                s.erase({arrival[v], v});
                arrival[v] = departure[u] + w;
                s.insert({arrival[v], v});
                parent[v] = u;
            }
        }
    }
    if(!vis[destination])
        return ans;

    ans.push_back(destination);
    int v = destination;
    while(parent[v])
        ans.push_back(v = parent[v]);
    reverse(ans.begin(), ans.end());
    return ans;
}




int32_t main()
{


    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif




    cin >> n >> m;


    for(int i = 1; i <= m; i++)
    {
    	int x,y,z;
    	cin >> x >> y >> z;
    	adj[x].push_back(make_pair(y,z));
    	adj[y].push_back(make_pair(x,z));
    }


    vector<int> v = dijkstra(adj,1,n);

    if(v.empty())
    {
    	cout << -1;
    	return 0;
    }

    for(auto i : v)
    {
    	cout << i << " ";
    }





    return 0;
}

