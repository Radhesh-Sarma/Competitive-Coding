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
  vector<int> adj[100005];
  bool vis[100005];
  int color[100005]={0};
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
      for(auto j:adj[s])
      {
        color[j]=2;
      }

      for(auto j:adj[s])
      {
        if(!vis[j])
            {
             dfs(j);
           }
      }
      return;
    }

    if(color[s]==1)
    {
      for(auto &j:adj[s])
      {
        if(color[j]==color[s])
        {
          ok=false;
          return;
        }
        else
        {
          color[j]=2;
        }
      }

      for(auto &j:adj[s])
      {
        if(!vis[j])
        {
          dfs(j);
        }
      }

      return;
    }

    if(color[s]==2)
    {
      for(auto &j:adj[s])
      {
        if(color[s]==color[j])
        {
          ok=false;
          return;
        }
        else
        {
          color[j]=1;
        }
      }

      for(auto &j:adj[s])
      {
        if(!vis[j])
        {
          dfs(j);
        }
      }
      return;
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



     
        int n;
        cin>>n;

          int x,y;
        for(int i=1;i<=n-1;i++)
        { 
          cin>>x>>y;
          adj[x].PB(y);
          adj[y].PB(x);
        } 

        for(int i=1;i<=n;i++)
        {
          if(!vis[i])
          {
            dfs(i);
          }
        }

   
        int ans1=0,ans2=0;

        for(int i=1;i<=n;i++)
        {

          if(color[i]==1)
          {
            ans1++;
          }
          else if(color[i]==2)
          {
            ans2++;
          }
        }

        cout<<(ans1)*(ans2)-(n-1);

         




      return 0;
      
      
      
    
  }     