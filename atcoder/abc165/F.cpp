#include <bits/stdc++.h>
using namespace std;
  #define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  #define int long long
  #define endl "\n"
  const int N = 200005;


vector<int> adj[N];
vector<bool> vis(N,false);

vector<int> a(N);

vector<int> ans(N);

multiset<int> ss;

int timer = 0;

vector<int> entrytimer(N,0),exitimer(N,0);

void dfs(int s)
{
  if(!vis[s])
  {
    vis[s] = true;



    auto it = ss.lower_bound(a[s]);

    

    int y = -1 ;

    ss.insert(a[s]);
    if(it != ss.end())
      {
        y = *it;
        ss.erase(it);
      }


    ans[s] = ss.size();
    for(auto &i : adj[s])
    {
      if(!vis[i])dfs(i);
    }


    auto it1 = ss.find(a[s]);
    if(it1 != ss.end())ss.erase(it1);

    if(y != -1)ss.insert(y);


  }
}

int32_t main()
{

    IOS


    int n;
    cin >> n;


    for(int i = 1; i <=n; i++)cin >> a[i];


    for(int i = 1; i <= n-1; i++)
    {
      int x, y;
      cin >> x >> y;
      adj[x].push_back(y);
      adj[y].push_back(x);
    }


    dfs(1);


    for(int i = 1; i <= n; i++)cout << ans[i] << endl;


    

    return 0;
}

