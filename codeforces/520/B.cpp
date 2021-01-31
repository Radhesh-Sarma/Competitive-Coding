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
  #define MOD 1000000007
  

  set<int> adj[20005];
  bool vis[20005];
  bool visi[20005]={0};
  int dist[20005]={0};

  void dfs(int s)
  {
    if(!vis[s])
    {
      vis[s]=1;
      for(int i:adj[s])
      {
        if(!vis[i])
        {
            dfs(i);
        }
      }
    }

  }

  void bfs(int s)
  {
    queue<int> q;
    q.push(s);
    vis[s]=1;
    dist[s]=0;
    while(!q.empty())
    {
      int k=q.front();
      q.pop();

      for(auto i:adj[k])
      {
        if(!vis[i])
        {
          
          q.push(i);
          vis[i]=1;
          dist[i]=dist[k]+1;
          //trace4(i,dist[i],k,dist[k]);
        }
      }
    }

  }
  int limit;

    int n,m;

    

    void construct(int x)
    {
      if(x<=0||x>limit)
      {
        return;
      }
      if(visi[x])
      {
        return;
      }
     
      if(x>=2)
      {
        adj[x].insert(x-1);
      }
      if((2*x)<=limit)
      {
        adj[x].insert(2*x);
      }
       visi[x]=1;
      construct(x-1);
      construct(2*x);
    }

  int32_t main()
  {         
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    IOS
  
    cin>>n>>m;

    if(n>=m)
    {
      cout<<n-m;
      return 0;
    }

    limit=2*m;

    construct(n);

    bfs(n);



    cout<<dist[m]<<endl;
    return 0; 
}