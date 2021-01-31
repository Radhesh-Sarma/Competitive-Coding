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
  #define N 100005
  #define INF 1000000000000
  #define eps 1e-6
  #define int long long
  #define pie 3.1415926535897932384626433832795028


vector<int> adj[26];
bool vis[26];

vector<pair<int,int>> a;
set <pair<int,int>> ans;
int sz = 0;

void dfs(int s)
{
  if(!vis[s])
  {
    vis[s] = true;

    for(auto i : adj[s])
    {
      if(!vis[i])
        {
            sz++;
            a.PB(MP(s,i));
            dfs(i);
        }
    }
  }
}
int32_t main()
{




    int n;
    cin >> n;
    string s,t;
    cin >> s >> t;

    for(int i = 0; i < n; i++)
    {
      if(s[i] != t[i])
      {
        adj[s[i]-'a'].PB(t[i]-'a');
        adj[t[i]-'a'].PB(s[i]-'a');
      }
    }

    for(int i = 0; i < 26; i++)
    {
      if(!vis[i])
      {
        dfs(i);
      //  trace2(i,sz);
        for(int j = 0; j < sz; j++)
        {
          ans.insert(a[j]);
        }
        a.clear();
        sz = 0;
      }
    }

    cout << ans.size() << endl;
    for(auto i : ans)
    {
      char ch1 = i.f + 'a';
      char ch2 = i.s + 'a';

      cout << ch1 << ' ' << ch2 << endl;
    }


    return 0;
}