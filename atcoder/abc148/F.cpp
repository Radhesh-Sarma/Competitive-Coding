 #include<bits/stdc++.h>
  #include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp>
#pragma comment(linker, "/stack:200000000")
#pragma GCC optimize("O3")
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
  using namespace std;
using namespace __gnu_pbds;
  #define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
  #define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  #define endl "\n"
  #define int long long
  #define double long double
  #define all(v) v.begin(),v.end()
  #define rep(i,a,b) for(int i = a; i <=b; i++)
  #define rep2(i,a,b) for(int i = a; i>=b; i--)
  #define f first
  #define s second
  #define PB push_back
  #define MP make_pair
  #define db long double
  #define trace1(x)                cerr<<#x<<": "<<x<<endl
  #define trace2(x, y)             cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
  #define trace3(x, y, z)          cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
  #define trace4(a, b, c, d)       cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl
  #define trace5(a, b, c, d, e)    cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl
  #define trace6(a, b, c, d, e, f) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<endl
  #define cases int testcases;cin>>testcases; while(testcases--)
  const double PI = acos(-1);
  const int N = 200005;
  int mod = 1e9 + 7;
     

    vector<int> adj[N];
    bool vis1[N];
    bool vis2[N];
    int dist1[N];
    int dist2[N];

    void bfs1(int s)
    {
        queue<int> q;
        q.push(s);
        dist1[s] = 0;
        while(!q.empty())
        {
          int k = q.front();
          q.pop();

          for(auto i:adj[k])
          {
            if(!vis1[i])
            {
              vis1[i] = true;
              dist1[i] = dist1[k] + 1;
              q.push(i);
            }
          }
        }
    }
    void bfs2(int s)
    {
        queue<int> q;
        q.push(s);
        dist2[s] = 0;
        while(!q.empty())
        {
          int k = q.front();
          q.pop();

          for(auto i:adj[k])
          {
            if(!vis2[i])
            {
              vis2[i] = true;
              dist2[i] = dist2[k] + 1;
              q.push(i);
            }
          }
        }
    }

int32_t main()
{
       
    int n,u,v;
    cin >> n >> u >> v;

    rep(i,1,n-1)
    {
      int x,y;
      cin >> x >> y;
      adj[x].PB(y);
      adj[y].PB(x);

    }

    

    bfs1(u);
    bfs2(v);
    dist1[u] = 0;
    dist2[v] = 0;


    int ans = 0;

    rep(i,1,n)
    {

      if(dist1[i]<dist2[i])
      {
        ans = max(dist2[i]-1,ans);
      }
    }



    cout << ans ;

   return 0;
}       