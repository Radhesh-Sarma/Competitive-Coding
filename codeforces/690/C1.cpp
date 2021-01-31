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
vector<bool> vis(N,false);

int y = 0;
void dfs(int s)
{
  if(!vis[s])
  {
    vis[s] = true;
    y++;
    for(auto i : adj[s])
    {
      if(!vis[i])
      {
        dfs(i);
      }
    }
  }
}
int32_t main()
{


    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif


    int n,m;
    cin >> n >> m;

    if(m != n-1)
    {
      cout <<"no";
      return 0;
    }

      int x,y;
    for(int i = 1; i <= m; i++)
    {
      
      cin >> x >> y;

      adj[x].PB(y);
      adj[y].PB(x);

    }

    dfs(1);

    for(int i = 1; i <= n; i++)
    {
      if(!vis[i])
      {
        cout <<"no";
        return 0;
      }
    }
      cout << "yes";
 
    return 0;
}