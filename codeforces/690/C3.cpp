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

vector<int> adj[N];

struct LCA
{
    int n;
    vector<int> first, last, depth;
    vector<vector<int>> up;
    int timer, L;
    LCA(int n): n(n)
    {
        timer = 0;
        up = vector<vector<int>>(n+1, vector<int>(20, 0));
        first.resize(n+1);
        last.resize(n+1);
        depth.resize(n+1);
        L = ceil(log2(n));
        dfs(1, 1, 0);
    }

    void dfs(int u, int p, int dis)
    {
        first[u] = ++timer;
        depth[u] = dis;
        up[u][0] = p;
        for(int i = 1; i <= L; i++)
            up[u][i] = up[up[u][i-1]][i-1];
        for(auto v: adj[u])
            if(v != p)
                dfs(v, u, dis + 1);
        last[u] = ++timer;
    }

    bool is_ancestor(int u, int v)
    {
        return first[u] <= first[v] && last[u] >= last[v];
    }

    int lca(int u, int v)
    {
        if(is_ancestor(u, v))
            return u;
        if(is_ancestor(v, u))
            return v;
        for(int i = L; i >= 0; i--)
        {
            if(!is_ancestor(up[u][i], v))
                u = up[u][i];
        }
        return up[u][0];
    }

    int dis(int u, int v)
    {
        int l = lca(u, v);
        return depth[u] + depth[v] - 2 * depth[l];
    }
};



int32_t main()
{


    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif


    int n;
    cin >> n;

    vector<int> v;

    for(int i = 2; i <= n; i++)
    {
      int x;
      cin >> x;
      v.PB(x);
      adj[i].PB(x);
      adj[x].PB(i);
    } 

    LCA lca(n);

    int ans1 = 2, ans2 = v[0];

    int ans = lca.dis(ans1,ans2);


    cout << ans << " " ;

    for(int x = 3; x <=n; x++)
    {
      int d1 = lca.dis(x,ans2);
      int d2 = lca.dis(ans1,x);

      if(ans < d1)
      {
        ans = d1;
        ans1 = x;
      }
      if(ans < d2)
      {
        ans = d2;
        ans2 = x;
      }

      cout << ans << " ";
    }



    return 0;
}