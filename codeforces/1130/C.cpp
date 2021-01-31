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

  
  int n,r1,c1,r2,c2;
    bool vis[55][55];
    vector<int> adj[55];
    char arr[55][55];

    set<pair<int,int>> s1,s2;

   void dfs1(int x,int y)
   {
    if(x<0||y<0||x>n-1||y>n-1)
    {
      return;
    }

    if(vis[x][y])
    {
      return;
    }

    if(arr[x][y]=='1')
    {
      return;
    }
    vis[x][y]=true;
    pair<int,int> p(x,y);
    s1.insert(p);
    dfs1(x,y+1);
    dfs1(x-1,y);
    dfs1(x+1,y);
    dfs1(x,y-1);
   }

   void dfs2(int x,int y)
   {
    if(x<0||y<0||x>n-1||y>n-1)
    {
      return;
    }

    if(vis[x][y])
    {
      return;
    }
    if(arr[x][y]=='1')
    {
      return;
    }


    vis[x][y]=true;
    pair<int,int> p(x,y);
    s2.insert(p);
    dfs2(x,y+1);
    dfs2(x-1,y);
    dfs2(x+1,y);
    dfs2(x,y-1);
   }
  int32_t main()
  {
    
    

    #ifndef ONLINE_JUDGE
      // for getting input from input.txt
      freopen("input.txt", "r", stdin);
      // for writing output to output.txt
      freopen("output.txt", "w", stdout);
      #endif


        cin>>n>>r1>>c1>>r2>>c2;

    
        for(int i=0;i<n;i++)
        {
          for(int j=0;j<n;j++)
          {
            cin>>arr[i][j];
          }
        }

        for(int i=0;i<55;i++)
        {
          for(int j=0;j<55;j++)
          {
            vis[i][j]=false;
          }
        }


        dfs1(r1-1,c1-1);

        pair<int,int>p(r2-1,c2-1);

        if(s1.count(p)==1)
        {
          cout<<0;
          return 0;
        } 

        for(int i=0;i<55;i++)
        {
          for(int j=0;j<55;j++)
          {
            vis[i][j]=false;
          }
        }

        
        dfs2(r2-1,c2-1);
        //cout<<s1.size()<<endl;
        int ans=1e9;


        for(auto i:s1)
        {
          for(auto j:s2)
          {
            //trace4(i.f,i.s,j.f,j.s);
            int ans1=(i.f-j.f)*(i.f-j.f) + (i.s-j.s)*(i.s-j.s);
            ans=min(ans,ans1);
          }
        }

        cout<<ans;

      return 0;
        
      
      
    
  }     