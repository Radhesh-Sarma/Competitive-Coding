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

  int n,m;
  int a[100005];
  int ans1[100005];
  int ans[100005];
  vector<int> adj[100005];
  bool vis[100005]={0};
  void dfs(int s,int h,int k,bool ok)
  { 

      ans1[s]=h;

      vis[s]=true;

      if(ok==true && (a[s]==1))
      {
        k++;
      }    
      else if(a[s]==1)
      {
        k++;
        ok=true;
      }
      if(a[s]==0)
      {
        ok=false;
        k=0;
      }

      if(k>m)
      {
        return;
      }

        ans[s]=h;
      for(auto i:adj[s])
      {
        if(!vis[i])
          dfs(i,h+1,k,ok);
      }
  }
  int32_t main()
  {
    

      IOS

    #ifndef ONLINE_JUDGE
      // for- getting input from input.txt
      freopen("input.txt", "r", stdin);
      // for writing output to output.txt
      freopen("output.txt", "w", stdout);
      #endif 

      cin>>n>>m;
      for(int i=1;i<=n;i++)
        cin>>a[i];

      for(int i=1;i<=n-1;i++)
      {
        int x,y;
        cin>>x>>y;
        adj[x].PB(y);
        adj[y].PB(x);
      }
      if(a[1]==1)
        dfs(1,0,0,true);
      else
        dfs(1,0,0,false);

     
      int answer=0;


        // for(int i=1;i<=n;i++)
        // {
        //   cout<<ans[i]<<" ";
        // }

        // cout<<endl;
      for(int i=2;i<=n;i++)
      {
        //trace2(i,ans[i]);
        if(adj[i].size()==1 && (ans1[i]==ans[i])&&(ans[i]!=0))
        {
          answer++;
        }
      }

      cout<<answer;


      return 0;
        
      
      
    
  }     