  //Keep Working Hard
  // I__Like__Food
  #include<bits/stdc++.h>
  #include <ext/pb_ds/assoc_container.hpp> 
  #include <ext/pb_ds/tree_policy.hpp>
  #pragma comment(linker, "/stack:200000000")
  #define rep(i,a,b) for(int i = a; i <=b; i++)
  #define rep2(i,a,b) for(int i = a; i>=b; i--)
  #pragma GCC optimize("O3")
  #pragma GCC optimize("Ofast") 
  #pragma GCC optimize("unroll-loops")
  using namespace std;
  using namespace __gnu_pbds;
  #define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  #define f first
  #define s second
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
  #define MOD 998244353
  #define N 100005
  #define INF 1e16
  const double PI = acos(-1);


vector<int> toposort;

vector<int> adj[N];
bool vis[N];

void dfs(int s)
{
  if(!vis[s])
  {
    vis[s] = true;
    for(auto i : adj[s])
    {
      if(!vis[i])
      {
        dfs(i);
      }
    }

  }

  toposort.push_back(s);
}

int dp[N+1];
int32_t main()
{






// dp[s] denotes the longest path starting at s



  int n, m;
  cin >> n >> m;

  vector<pair<int,int>> v;



  for(int i = 1; i <= m; i++)
  {
    int x, y;
    cin >> x >> y;
    adj[x].PB(y);
  }

  for(int i = 1; i <= n; i++)
    {
      if(!vis[i])
      {
        dfs(i);
      }
    }

    // for(auto i : toposort)
    // {
    //   cout << i << " ";
    // }

    for(auto &i : toposort)
    {
      for(auto &j : adj[i])
      {
        dp[i] = max(dp[i],1 + dp[j]);
      }
    } 


    int ans = 0;

    for(int i = 1; i <= n; i++)
    {
      ans = max(ans,dp[i]);
    }
    cout << ans;





  return 0;
  
}  