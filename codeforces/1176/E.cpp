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


  vector<int> adj[200005];
  int color[200005];
  int n,m,x,y;
  int ans=0;

  void dfs(int s)
  {
    if(color[s]!=0)
    {
      return;
    }
    color[s]=1;
    ans++;
    for(auto &j:adj[s])
    {
      color[j]=2;
    }
    return;
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



      cases
      {
        cin>>n>>m;

        for(int i=1;i<=m;i++)
        {
          cin>>x>>y;
          adj[x].PB(y);
          adj[y].PB(x);

        }

        for(int i=1;i<=n;i++)
        {
          dfs(i);
        }

        if(ans<=n/2)
        {
          cout<<ans<<endl;
          for(int i=1;i<=n;i++)
          {
            if(color[i]==1)
            {
              cout<<i<<" ";
            }
          }
        }
        else
        {
          cout<<n-ans<<endl;
            for(int i=1;i<=n;i++)
            {
              if(color[i]==2)
              {
                cout<<i<<" ";
              }
            }
        }

        cout<<endl;

        for(int i=1;i<=n;i++)
        {
          color[i]=0;
          adj[i].clear();
        }
        ans=0;

      }


      return 0;
      
      
      
    
  }     