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

  
  // bool vis[30005];
  // vector<int>adj[30005];
char arr[1000][1000];
int n;
int x,y;


  // void dfs(int s)
  // {
  //   vis[s]=true;
  //   for(auto i:adj[s])
  //   {
  //     if(!vis[i])
  //     {
  //       dfs(i);
  //     }
  //   }
  // } 

  bool inbounds(int i,int j)
  {
    
    if(i>x-1||j>y-1||i<0||j<0)
    {
      return false;
    }

    return true;
  } 

  bool answer(int x,int y)
  {

    if(arr[x][y]=='W')
    {
      return true;
    }
    return false;
  }



  int32_t main()
  {
    
    

    #ifndef ONLINE_JUDGE
      // for getting input from input.txt
      freopen("input.txt", "r", stdin);
      // for writing output to output.txt
      freopen("output.txt", "w", stdout);
      #endif

    
      cin>>x>>y;

  
      for(int i=0;i<x;i++)
      {
        for(int j=0;j<y;j++)
        {
          char ch;
          cin>>ch;
          if(ch=='.')
          {
            ch='D';
          }
          arr[i][j]=ch;

        }
      }

      bool ok=true;
      for(int i=0;i<x;i++)
      {
        for(int j=0;j<y;j++)
        {
            if(arr[i][j]=='S')
            {
              
                trace2(i,j);
              
              if(inbounds(i+1,j) and answer(i+1,j))
              {
                cerr<<1;
                ok=false;
                goto ab;
              }

              if(inbounds(i-1,j) and answer(i-1,j))
              {
                ok=false;
                goto ab;
              }

              if(inbounds(i,j+1) and answer(i,j+1))
              {
                ok=false;
                goto ab;
              }

              if(inbounds(i,j-1) and answer(i,j-1))
              {
                ok=false;
                goto ab;
              }
            }
        }
      }
      ab:
      if(ok)
      {
        cout<<"Yes"<<endl;
        for(int i=0;i<x;i++)
        {
          for(int j=0;j<y;j++)
          {
            cout<<arr[i][j];
          }
          cout<<endl;
        }
      }
      else
      {
        cout<<"No"<<endl;
      }


      return 0;
      
     
  }   