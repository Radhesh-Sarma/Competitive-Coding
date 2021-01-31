#include <bits/stdc++.h>
using namespace std;
  #define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  #define int long long 
  #define endl "\n"
  #define all(v) v.begin(),v.end()
  #define double long double
  #define trace1(x)                cerr<<#x<<": "<<x<<endl
  #define trace2(x, y)             cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
  #define trace3(x, y, z)          cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
  #define trace4(a, b, c, d)       cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl
  #define trace5(a, b, c, d, e)    cerr<<#a<<": "<<a<<" | "<<#b<< ": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl
  #define trace6(a, b, c, d, e, f) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<endl
  #define cases int testcases;cin>>testcases; while(testcases--)


#define N 200005


  vector<int> path;


  vector<int> adj[N];
  vector<int> vis(N,false);

  int cycle = -1;

  void dfs(int s)
  {

    if(!vis[s])
    {
      vis[s] = true;
      path.push_back(s);
      for(auto i : adj[s])
      {
      
        if(!vis[i])
          {
            dfs(i);
          }
          else
          {
            cycle = i;
          }
      }

    }
  }

int32_t main()
{


    IOS

    int n,k;
    cin >> n >> k;


    vector<int> v(n+1);
    for(int i = 1; i <= n; i++)
    {
      int x;
      cin >> x;
      adj[i].push_back(x);
     // trace2(i,x);
    }


    dfs(1);



    if(k < path.size())
    {
      cout << path[k];
      return 0;
    }
    else if(cycle == -1)
    {
      cout << path[k%(path.size())];
      return 0;
    }
    

    // for(auto i :path)
    // {
    //   cout << i << " ";
    // }



    // cout << endl;

    int ans1;

    for(int i = 0; i < path.size(); i++)
    {
      if(path[i] == cycle)
      {
        ans1 = i;
        break;
      }
    }


    for(int i = 0; i <= n; i++)vis[i] = false;


    path.clear();
    dfs(cycle);

    // for(auto i :path)
    // {
    //   cout << i << " ";
    // }



    // cout << endl;

    cout << path[(k-ans1)%(path.size())];



    return 0;
}