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
    
      bool vis[55][55];
      char arr[55][55];

      int ans=0;
      int ans1=0;

    bool inbounds(int x,int y)
    {
      if(x<1||y<1||x>n||y>m)
      {
        return false;;
      }
      return true;
    }
    void dfs(int x,int y)
    {
      if(vis[x][y])
      {
        return;
      }

      if(x<1||y<1||x>n||y>m)
      {
        return;
      }
      
      ans++;
      vis[x][y]=1;

      if(inbounds(x+1,y) && (arr[x][y]==arr[x+1][y]))
      {
        ans1++;
      }

      if(inbounds(x-1,y) && (arr[x][y]==arr[x-1][y]))
      {
        ans1++;
      }

      if(inbounds(x,y+1) && (arr[x][y]==arr[x][y+1]))
      {
        ans1++;
      }
      if(inbounds(x,y-1) && (arr[x][y]==arr[x][y-1]))
      {
        ans1++;
      }
      
      

      if(arr[x+1][y]==arr[x][y])
      { 
       
        dfs(x+1,y);
      }
      if(arr[x-1][y]==arr[x][y])
      {
    
        dfs(x-1,y);
      }
        
      if(arr[x][y+1]==arr[x][y])
      {
        
        dfs(x,y+1);
      }
      
      if(arr[x][y-1]==arr[x][y])
      { 
        dfs(x,y-1);
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
      {
        for(int j=1;j<=m;j++)
        {
          cin>>arr[i][j];
        }
      }

      vector<pair<int,int> >v;


      for(int i=1;i<=n;i++)
      {
        for(int j=1;j<=m;j++)
        {
          if(!vis[i][j])
          {
           
            dfs(i,j);
            v.PB(MP(ans,ans1/2));
            ans=0;
            ans1=0;


          }
        }
      }     



      for(auto i:v)
      {
      
        if((i.f-1)!=(i.s))
        {
          cout<<"Yes";
          return 0;
        }
      } 
    
      cout<<"No";

      return 0;
        
      
      
    
  }     