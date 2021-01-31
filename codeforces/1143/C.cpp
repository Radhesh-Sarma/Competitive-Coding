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
   bool c[100005];
   int root;


    vector<int> adj[100005];
    vector<int> ans;
  
    void dfs(int s)
    {

    


      if(c[s]==0)
      {
        return;
      }



      for(auto i:adj[s])
      {
        if(c[i]==0)
        {
          return;
        }
      }

        ans.PB(s);
      return;
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



        int n;
        cin>>n;


        for(int i=1;i<=n;i++)
        {
          int x,y;
          cin>>x>>y;
          if(x!=-1)
          {
            adj[x].PB(i);
          }
          else
          {
            root=i;
          }
          c[i]=y;

        }


            for(int i=1;i<=n;i++)
            {
              if(i!=root)
              {
                dfs(i);
              }

            }

            if(ans.size()==0)
            {
              cout<<-1;
              return 0;
            }
          for(auto i:ans)
          {
            cout<<i<<" ";
          }

      return 0;
        
      
      
    
  }     