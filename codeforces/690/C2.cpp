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
  #define INF 1000000000000
  #define eps 1e-6
  #define int long long
  #define pie 3.1415926535897932


vector<int> adj[N];

int n,m;
vector<int> bfs(int source)
{
  vector<bool> vis(n+1,false);
  vector<int> dist(n+1,INF);

  queue<int> q;
  q.push(source);
  dist[source] = 0;
  vis[source] = true;

  while(!q.empty())
  {
    int k = q.front();
    q.pop();

    for(auto i : adj[k])
    {
      if(!vis[i])
      {
        vis[i] = true;
        q.push(i);
        dist[i] = dist[k] + 1;
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


    cin >> n >> m;

    for(int i = 1; i <= m; i++)
    {
      int x,y;
      cin >> x >> y;
      adj[x].PB(y);
      adj[y].PB(x);
    }

    vector<int> v1 = bfs(1);


    int u = 1;
    for(int i = 1; i <= n; i++)
    {
      if(v1[u] < v1[i])
      {
        u = i;
      }
    }


    vector<int> v2 = bfs(u);

  //  cout << *max_element(all(v2));

    int ans = 1;

    for(auto i : v2)
    {
      if(i != INF)
      {
        ans = max(ans,i);
      }
    }

    cout << ans;
 
    return 0;
}