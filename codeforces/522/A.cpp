#include<bits/stdc++.h>  
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
#define all(v) v.begin(),v.end()
#define rep(i,a,b) for(int i = a; i <=b; i++)
#define rep2(i,a,b) for(int i = a; i>=b; i--)
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
#define INF 2000000000
const double PI = acos(-1);
const int N = 100005;
#define eps 1e-6
#define MOD 1000000007
    map<string,int> mp;
    vector<int> adj[N];
    bool vis[N];
    int parent[N];
    int dist[N];
    void bfs(int s)
    { 
      queue<int> q;
      q.push(s);
      vis[s] = true;
      dist[s] = 0;
      while(! q.empty())
      {
        int k = q.front();
        q.pop();

        for(int &i:adj[k])
        {
          if(!vis[i])
          {
            vis[i] = 1;
            parent[i] = k;
            dist[i] = dist[k] + 1;
            q.push(i);
          }
        }
      }
    }

    int node = 1;

  int32_t main() 
  {
    IOS
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif


      int q;
      cin >> q;

      mp["polycarp"] = 0;

      while(q--)
      {
        string x,y,z;
        cin >> x >> y >> z;

        for(int i = 0 ; i < x.length(); i++)
        {
          if(isupper(x[i]))
          {
            x[i] = tolower(x[i]);
          }
        }
        for(int i = 0 ; i < z.length(); i++)
        {
          if(isupper(z[i]))
          {
            z[i]=tolower(z[i]);
          }
        }


        if(mp.find(x) == mp.end())
        {
          mp[x] = node++;
        }
        if(mp.find(z) == mp.end())
        {
          mp[z] = node++;
        }

      adj[mp[z]].PB(mp[x]);
      }


      bfs(0); 


      int ans = 0;

      for(auto i : mp)
      {
        ans = max(ans,dist[i.second]);
      }

      cout << ans+1;



      

    return 0;
      }
        