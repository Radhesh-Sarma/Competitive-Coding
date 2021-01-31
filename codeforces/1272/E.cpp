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
  #define INF 2000000000
  const double PI = acos(-1);
  const int N = 200005;
  int mod = 1e9 + 7;
      
  vector<int> adj[N];
  bool vis[N];
  bool vis2[N];
  int dist2[N];
  int dist[N];
  int arr[N];
  int ans[N];
  int n;
  void bfs()
  { 
    queue<int> q;

    rep(i,1,n)
    {
      if(arr[i]%2)                
      {
        q.push(i);
        dist[i] = 0;
        vis[i] = true;
      }
    }

    while(!q.empty())
    {
      int k = q.front();
      q.pop();


      for(auto i :adj[k])
      {
        if(!vis[i])
        {
          trace1(i);
          vis[i] = true;
          dist[i] =dist[k] + 1;
          q.push(i);
        }
      }

    }

      rep(i,1,n)
      {

        if(arr[i]%2 == 0)
        {
          ans[i] = dist[i];
       }


      } 



      queue<int> qq;

      rep(i,1,n)
      {
        if(arr[i]%2 == 0)
        {
          qq.push(i);
          vis2[i] = true;
          dist2[i] = 0;
        }
      }

      while(!qq.empty())
      {
        int k = qq.front();
        qq.pop();

        for(auto i:adj[k])
        {
          if(!vis2[i])
          {
            dist2[i] = dist2[k] + 1;
            vis2[i] = true;
            qq.push(i);

          }
        }
      }


      rep(i,1,n)
      {
        if(arr[i]%2)
        {
          ans[i] = dist2[i];
        }
      }


}

int32_t main()
{
       

   #ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("output.txt", "w", stdout);
    #endif


      cin >> n;

      
      rep(i,1,n)
      {
        cin >> arr[i];
      }

      rep(i,1,n)
      {
        if(i + arr[i] <=n)
        {
          adj[i+arr[i]].PB(i);
        }
        if(i - arr[i] >= 1)
        {
          adj[i-arr[i]].PB(i);
        }
        
      }

      bfs();
      rep(i,1,n)
      {
        if(ans[i] == 0)
        {
          ans[i] = -1;
        }

        cout << ans[i] << " ";
      }


   return 0;
}       