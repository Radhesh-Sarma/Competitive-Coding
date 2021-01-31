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
  bool vis[100005]={0};
  int cost[100005];
  int ans=1e12;


  int dfs(int s)
  { 

        ans=min(ans,cost[s]);
    
   
    vis[s]=true;
    for(auto i:adj[s])
    {
        if(!vis[i])
        {
          dfs(i);
        }
    }

    return ans;

  }

  int32_t main()
  {
    

    

    #ifndef ONLINE_JUDGE
      // for getting input from input.txt
      freopen("input.txt", "r", stdin);
      // for writing output to output.txt
      freopen("output.txt", "w", stdout);
      #endif



      int n,m;
      cin>>n>>m;

  
      for(int i=1;i<=n;i++)
      {
        cin>>cost[i];

      }

      for(int i=0;i<m;i++)
      {
        int x,y;
        cin>>x>>y;
        adj[x].PB(y);
        adj[y].PB(x);
      }
        int ans1=0;

      for(int i=1;i<=n;i++)
      {
        if(!vis[i])
        {
          ans1+=dfs(i);
          ans=1e12;
        }
      }

    cout<<ans1;

      return 0;
        
      
      
    
  }     