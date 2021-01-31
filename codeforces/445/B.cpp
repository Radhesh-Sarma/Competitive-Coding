   #include<bits/stdc++.h>
    #include <ext/pb_ds/assoc_container.hpp> 
  #include <ext/pb_ds/tree_policy.hpp>
  #pragma comment(linker, "/stack:200000000")
  #pragma GCC optimize("O3")
  #pragma GCC optimize("Ofast")
  #pragma GCC optimize("unroll-loops")
    using namespace std;
  using namespace __gnu_pbds;
    #define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
    #define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    #define endl "\n"
    #define int long long
    #define all(v) v.begin(),v.end()
    #define rep(i,a,b) for(int i = a; i <=b; i++)
    #define rep2(i,a,b) for(int i = a; i>=b; i--)
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
    #define INF 2000000000
    const double PI = acos(-1);
    const int N = 200005;
    int mod = 1e9 + 7;


    vector<int> parent;
    vector<int> sz;
    vector<int> vis;

    void make_set(int s)
    {
      parent[s] = s;
      sz[s] = 1;
    }
    int find_set(int s)
    {
      if(s == parent[s])
      {
        return s;
      }
      return parent[s] = find_set(parent[s]);
    }
    void merge(int a,int b)
    {
      a = find_set(a);
      b = find_set(b);
      if(a != b)
      {
        if(sz[a] < sz[b])
        {
          swap(a,b);
        }
        sz[a] += sz[b];
        parent[b] = a;
      }
    }
  int32_t main() 
  {
    IOS
       #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);
       freopen("output.txt", "w", stdout);
      #endif
      
      
      int n,m;

      cin >> n >> m;

      parent.resize(n+1);
      vis.resize(n+1);
      sz.resize(n+1);



      for(int i = 1; i <= n; i++)
      {
        make_set(i);
      }
      for(int i = 1; i <= m; i++)
      {
        int x, y;
        cin >> x >> y;
        merge(x,y);
      }

      int ans = 0;


      for(int i = 1; i <= n; i++)
      {
        int p = find_set(i);
        if(!vis[p])
        {
          ans ++;
          vis[p] = true;
        }
      }
      ans= (1LL << (n - ans));
      cout << ans << endl;




    return 0;
  }