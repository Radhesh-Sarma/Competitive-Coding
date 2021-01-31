  //Keep Working Hard
  // I__Like__Food  
  #include<bits/stdc++.h>
  using namespace std;
  #define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  #define endl "\n"
  #define all(v) v.begin(),v.end()
  #define f first
  #define s second
  #define PB push_back
  #define MP make_pair
  #define double long double
  #define trace1(x)                cerr<<#x<<": "<<x<<endl
  #define trace2(x, y)             cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
  #define trace3(x, y, z)          cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
  #define trace4(a, b, c, d)       cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl
  #define trace5(a, b, c, d, e)    cerr<<#a<<": "<<a<<" | "<<#b<< ": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl
  #define trace6(a, b, c, d, e, f) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<endl
  #define cases int testcases;cin>>testcases; while(testcases--)
  #define mod 1000000007
  #define N 200005
  #define INF 1e18
  #define eps 1e-6
  #define int long long
  #define pie 3.1415926535897932

int n,m,a,b,c;

vector<int> adj[N];

vector<int> bfs(int s,vector<int> &dist)
{
  vector<bool> vis(n,false);
  queue<int> q;
  q.push(s);

  int ss = s;

  dist[s] = 0;
  vis[s] = true;

  while(!q.empty())
  {
    s = q.front();
    q.pop();

    for(auto &i : adj[s])
    {
     // trace2(s,i);
      if(!vis[i])
      {
        vis[i] = true;
        dist[i] = min(dist[i],dist[s] + 1);
        q.push(i);
      }
    }
  }


  return dist;
}


int32_t main()
{


    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif


cases
{
      cin >> n >> m >> a >> b >> c;

      a--,b--,c--;

      vector<int> p(m+1,0);

      for(int i = 1; i <= m; i++)
      {
        cin >> p[i];
      }

      sort(all(p));

      for(int i = 1; i <=m; i++)p[i] += p[i-1];



      for(int i = 1; i <= m;i++)
      {
        int x, y;
        cin >> x >> y;
        x--;
        y--;
        adj[x].PB(y);
        adj[y].PB(x);
      }

    vector<int> d1(n,INF);
    vector<int> d2(n,INF);
    vector<int> d3(n,INF);


    bfs(a,d1);
    bfs(b,d2);
    bfs(c,d3);



    int ans = INF;

    for(int i = 0; i < n; i++)
    { 
     // trace4(i,d1[i],d2[i],d3[i]);
      if(d1[i] + d2[i] + d3[i] <= m)
      {
        ans = min(ans,p[d1[i]+d2[i]+d3[i]] + p[d2[i]]);
      }
    }

    cout << ans << endl;


    for(int i = 0; i <= n; i++)
    {
      adj[i].clear();
    }

    p.clear();

  }


    return 0;
}