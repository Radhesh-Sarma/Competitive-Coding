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

  
  bool vis[30005];
  vector<int>adj[30005];

  void dfs(int s)
  {
    vis[s]=true;
    for(auto i:adj[s])
    {
      if(!vis[i])
      {
        dfs(i);
      }
    }
  }

  int32_t main()
  {
    
    

    #ifndef ONLINE_JUDGE
      // for getting input from input.txt
      freopen("input.txt", "r", stdin);
      // for writing output to output.txt
      freopen("output.txt", "w", stdout);
      #endif


        int n,t;
        cin>>n>>t;

        int arr[n+1];
        for(int i=1;i<n;i++)
        {
          cin>>arr[i];
        }

        for(int i=1;i<n;i++)
        {
          adj[i].PB(i+arr[i]);
        }


        dfs(1);

        if(vis[t])
        {
          cout<<"YES";
        }       
        else
        {
          cout<<"NO";
        }
      return 0;
     
  }   