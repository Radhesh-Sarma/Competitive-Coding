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

  void bfs(int s,int dist[],bool vis[])
  {
    queue<int> q;
    q.push(s);
    vis[s] = true;
    dist[s] = 0;
    while(!q.empty())
    {
      int k = q.front();
      q.pop();

      for(auto i:adj[k])
      {
        if(!vis[i])
        {
          dist[i] = dist[k] + 1; 
          vis[i] = true;
          q.push(i);
        }
      }
    }
  }
int32_t main()
{
       

   #ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("output.txt", "w", stdout);
    #endif


    
    int n,x;
    cin >> n >> x;

    rep(i,1,n-1)
    {
      int a,b;
      cin >> a >> b;
      adj[a].PB(b);
      adj[b].PB(a);
    }

    bfs(1,dist1,vis1);
    bfs(x,dist2,vis2);
    dist1[1] = 0;
    dist2[x] = 0;

    int ans = 0;


    rep(i,1,n)
    {
          //trace3(i,dist1[i],dist2[i]);
      if(dist2[i] < dist1[i])
      {
        ans = max(ans, 2*(dist1[i]));
      }
    }


    cout << ans ;




   return 0;
}       