#include <bits/stdc++.h>
using namespace std;
  #define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  #define endl "\n"
  #define all(v) v.begin(),v.end()
#define int long long 
  #define double long double
  #define trace1(x)                cerr<<#x<<": "<<x<<endl
  #define trace2(x, y)             cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
  #define trace3(x, y, z)          cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
  #define trace4(a, b, c, d)       cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl
  #define trace5(a, b, c, d, e)    cerr<<#a<<": "<<a<<" | "<<#b<< ": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl
  #define trace6(a, b, c, d, e, f) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<endl
  #define cases int testcases;cin>>testcases; while(testcases--)
const int mod = 1000000007;
const double PI = 3.1415926535898;

#define N 100005

const int INF = (1LL << 62) - 1;


vector<bool> vis(N,false);
vector<int> dist(N,INF);
vector<int> par(N,-1);

vector<int> adj[N];


void bfs(int s)
{
  queue<int> q;

  q.push(s);
  vis[s] = true;
  dist[s] = 0;

  while(!q.empty())
  {
    int k = q.front();
    q.pop();

    for(auto i : adj[k])
    {
       if(1 + dist[k] < dist[i])
        {
          dist[i] = dist[k] + 1;
          par[i] = k;
        }

      if(!vis[i])
      {
        q.push(i);
        vis[i] = true;
        if(par[i] == -1) par[i] = k;

        if(1 + dist[k] < dist[i])
        {
          dist[i] = dist[k] + 1;
          par[i] = k;
        }
      }
    }
  }
}




int32_t main()
{




      int n,m;
      cin >> n >> m;

      for(int i = 1; i <= m; i++)
      {
        int x,y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
      }


      bfs(1);

      for(int i = 1; i <= n; i++)
      {
        if(!vis[i])
        {
          cout << "No";
          return 0;
        }
      }

      cout << "Yes" << endl;
      
      for(int i = 2 ; i <= n; i++)
      {
        cout << par[i] << endl;
      }


    return 0;
}

