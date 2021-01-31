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
  int n;

    vector<int> adj[100005];
    
    int pathlen[100005];
    db probability[100005];
    bool vis[100005]={0};
      void dfs(int s,int h,db prob)
      {
        
          if(vis[s])
          {
            return;
          }
          vis[s]=true;

   
        pathlen[s]=h;
        probability[s]=prob;
          

        int x=adj[s].size()-1;
        if(x==0 and s!=1)
        {
          return;
        }

        if(s==1)
        {
          x++;
        } 



        
           db one=1LL;

          db thisprob=(db)((db)(one)/((db)(x)));
              
        for(auto i:adj[s])
        { 
            if(!vis[i])
              dfs(i,h+1,thisprob*prob);
          
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

      cin>>n;
      for(int i=1;i<=n-1;i++)
      {
        int x,y;
        cin>>x>>y;
        adj[x].PB(y);
        adj[y].PB(x);
      }


      dfs(1,0,1LL);


      db answer=0;

      for(int i=2;i<=n;i++)
      {
        if(adj[i].size()==1)
        {

          answer+=(db)(((db)pathlen[i])*(probability[i]));
        }
      }

      cout<<setprecision(30)<<fixed<<answer;
      

      return 0;
        
      
      
    
  }     