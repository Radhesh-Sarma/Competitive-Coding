  #include<bits/stdc++.h>
  using namespace std;
  #define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  #define endl "\n"
  #define int long long
  #define all(v) v.begin(),v.end()
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




  vector<int> adj[1000005];
  bool vis[1000005];
  int color[1000005];
  bool ok=true;

  void dfs(int s)
  {
    if(vis[s])
    {
      return;
    }
    vis[s]=true; 


    if(color[s]==0)
    {
      color[s]=1;
      for(auto i:adj[s])
      {
        if(color[i]==color[s])
        {
          ok=false;
          return ;
        }
        color[i]=2;
      }
      for(auto i:adj[s])
      {
        if(!vis[i])
          dfs(i);
      }
    }
    else if(color[s]==1)
    {
      for(auto i:adj[s])
      {
        if(color[i]==1)
        {
          ok=false;
          return;
        }
      }

      for(auto i:adj[s])
      {
        if(!vis[i])
        {
          dfs(i);
        }
      }
    }
    else if(color[s]==2)
    {
      for(auto i:adj[s])
        {
          if(color[i]==color[s])
          {
            ok=false;
            return;
          }
        }

        for(auto i:adj[s])
        {
          if(!vis[i])
          {
            dfs(i);
          }
        }

    }

  }
  int32_t main()
  {         
    

      IOS

    #ifndef ONLINE_JUDGE
      // for getting input from input.txt
      freopen("input.txt", "r", stdin);
      // for writing output to output.txt
      freopen("output.txt", "w", stdout);
      #endif 



      int n,m;
      cin>>n>>m;

      for(int i=1;i<=m;i++)
      {
        int u,v;
        cin>>u>>v;
        adj[u].PB(v);
        adj[v].PB(u);
      }

      for(int i=1;i<=n;i++)
      {
        if(!vis[i] and ok)
        {
          dfs(i);
        }
        else if(!ok)
        {
          cout<<-1;
          return 0;
        }
      }

      vector<int> ans1;
      vector<int> ans2;
      
      for(int i=1;i<=n;i++)
      {
        if(color[i]==1 and adj[i].size()!=0)
        {
          ans1.PB(i);
        }

      }


      for(int i=1;i<=n;i++)
      {
        if(color[i]==2 and adj[i].size()!=0)
        {
          ans2.PB(i);
        }

      }


      cout<<ans1.size()<<endl;
      for(auto i:ans1)
      {
        cout<<i<<" ";
      }


      cout<<endl<<ans2.size()<<endl;

      for(auto i:ans2)
      {
        cout<<i<<" "; 
      }


      return 0;
      
      
      
    
  }     