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
  #define double long double
  #define trace1(x)                cerr<<#x<<": "<<x<<endl
  #define trace2(x, y)             cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
  #define trace3(x, y, z)          cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
  #define trace4(a, b, c, d)       cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl
  #define trace5(a, b, c, d, e)    cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl
  #define trace6(a, b, c, d, e, f) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<endl
  #define cases int testcases;cin>>testcases; while(testcases--)
  #define MOD 998244353
  #define N 200005
  #define INF 1000000000000
  #define eps 1e-6

vector<int> adj[N];
int ans[N];
bool vis[N];

void dfs(int s)
{
  if(vis[s])return;
  vis[s] = 1;

  for(auto i :adj[s])
  {
    if(!vis[i])
    {
      ans[i] += ans[s];
      dfs(i);
    }
  }
}
int32_t main()
{

    IOS

  
  int n,q;
  cin >> n >> q;


  for(int i = 1; i <= n - 1; i++)
  {
    int x, y;
    cin >> x >> y;
    adj[x].PB(y);
    adj[y].PB(x);
  }




  for(int i = 1; i <= q; i++)
  {
    int x,y;
    cin >> x >> y;
    ans[x] += y;
  }

  for(int i = 1; i <= n; i++)
  {
    if(!vis[i])dfs(i);
  }

  for(int i = 1; i <= n; i++)
  {
    cout << ans[i] << " ";
  }
	return 0;
}