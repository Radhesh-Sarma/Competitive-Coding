  //Keep Working Hard
  // I__Like__Food  
  #include<bits/stdc++.h>
  #include <ext/pb_ds/assoc_container.hpp> 
  #include <ext/pb_ds/tree_policy.hpp>
  #define rep(i,a,b) for(int i = a; i <=b; i++)
  #define rep2(i,a,b) for(int i = a; i>=b; i--)
  #pragma GCC optimize("O3")
  #pragma GCC optimize("Ofast") 
  #pragma GCC optimize("unroll-loops")
  using namespace std;
  using namespace __gnu_pbds;
  #define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  #define endl "\n"
  #define int long long
  #define all(v) v.begin(),v.end()
  #define PB push_back
  #define MP make_pair
  #define double long double
  #define trace1(x)                cerr<<#x<<": "<<x<<endl
  #define trace2(x, y)             cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
  #define trace3(x, y, z)          cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
  #define trace4(a, b, c, d)       cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl
  #define trace5(a, b, c, d, e)    cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl
  #define trace6(a, b, c, d, e, f) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<endl
  #define cases int testcases;cin>>testcases; while(testcases--)
  const int mod = 1e9 + 7;
  const int N = 200005;
  const int INF = 1e16;
  const double PI = acos(-1);



vector<int> entryTime(N),exitTime(N);



vector<int> adj[N];
vector<int> parent(N);
vector<int> depth(N);

int timer = 1;

void dfs(int s,int ps,int level)
{

    timer++;
    entryTime[s] = timer;
    depth[s] = level;
    parent[s] = ps;
    for(auto &i : adj[s])
    {
      if(i == ps)continue;

        dfs(i,s,level+1);
    }

  exitTime[s] = timer;
}

bool customsort(int x,int t)
{
  return depth[x] < depth[t];
}

int32_t main()
{
       

    IOS
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif


    int n, m;
    cin >> n >> m;


    adj[0].PB(1);

    for(int i = 1; i <= n - 1; i++)
    {
      int x, y;
      cin >> x >> y;
      adj[x].PB(y);
      adj[y].PB(x);
    }

     dfs(0,0,0);


    while(m--)
    {
      int k;
      cin >> k;

      //trace1(k);

      vector<int> v;

      for(int i = 0; i < k; i++)
      {
        int x;
        cin >> x;
        v.PB(parent[x]);
      }

      sort(all(v),customsort);

      // for(auto i : v)
      // {
      //   trace2(i,m);
      // }

      bool ans = 1;

      for(int i = 0; i < v.size() - 1; i++)
      {
        ans &= (bool(entryTime[v[i]] <= entryTime[v[i+1]]) && bool(exitTime[v[i]] >= exitTime[v[i+1]]));
        if(!ans)break;
      }

      if(ans)cout << "YES" << endl;
      else cout << "NO" << endl;

    }




  return 0;
} 