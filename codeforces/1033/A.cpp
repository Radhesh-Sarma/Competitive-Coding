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

  
  bool vis[1005][1005];
  int n;
 int ax,ay,bx,by,cx,cy;

  bool inbounds(int x,int y)
  {
    if(x>=1 and x<=n and y>=1 and y<=n)
    {
      return true;
    }
    return false;
  }
  bool isincheck(int x,int y)
  {
    if(x==ax||y==ay||abs(x-ax)==abs(y-ay))
    {
      return true;
    }
    return false;
  }

  void dfs(int x,int y)
  {
    if(!inbounds(x,y))
    {
      return ;
    }
    if(isincheck(x,y))
    {
      return;
    }
    if(vis[x][y])
    {
      return;
    }
    vis[x][y]=1;


    dfs(x-1,y);
    dfs(x-1,y-1);
    dfs(x-1,y+1);
    dfs(x,y+1);
    dfs(x,y-1);
    dfs(x+1,y);
    dfs(x+1,y-1);
    dfs(x+1,y+1);

    }



  int32_t main()
  {
    
    

    #ifndef ONLINE_JUDGE
      // for getting input from input.txt
      freopen("input.txt", "r", stdin);
      // for writing output to output.txt
      freopen("output.txt", "w", stdout);
      #endif



        
        cin>>n;


        cin>>ax>>ay>>bx>>by>>cx>>cy;

        dfs(bx,by);

        if(vis[cx][cy])
        {
          cout<<"YES";
        }
        else
        {
          cout<<"NO";
        }




      return 0;
      
     
  }     