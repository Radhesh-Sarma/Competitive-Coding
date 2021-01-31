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
  const int mod2 = 998244353;
  const int N = 20005;
  const int INF = 1e16;
  const double PI = acos(-1);


int parent[50];
int sz[50];

void make_set(int n)
{
  for(int i = 0; i <= n; i++)
  {
    parent[i] = i;
    sz[i] = 1;
  }
}

int getParent(int s)
{
  if(s == parent[s])return s;
  else return parent[s] = getParent(parent[s]);
}

void join(int a,int b)
{
  a = getParent(a);
  b = getParent(b);

  if(a != b)
  {
    parent[b] = a;
    sz[a] += sz[b];
    sz[b] = 1;
  }
}
 
bool vis[50];


int32_t main()
{
       

    IOS
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n, m;
    cin >> n >> m;

    make_set(n);


    map<int,set<int>> mp;


    for(int i = 1; i <= n; i++)
    {
      mp[i].insert(i);
    }

    for(int i = 1; i <= m; i++)
    {
      int x, y;
      cin >> x >> y;
      join(x,y);
      int p = getParent(x);
      mp[p].insert(x);
      mp[p].insert(y);
    }




    int countone = 0;
    int counttwo = 0;
 
    for(int i = 1; i <= n; i++)
    {
      int p = getParent(i);
      if(vis[p]) continue;

      vis[p] = true;

      if(sz[p] > 3)
      {
        cout << -1;
        return 0;
      }
      else if(sz[p] == 2)
      {
        counttwo++;
      }
      else if(sz[p] == 1)
      {
        countone++;
      }
    }

    if(countone < counttwo)
    {
      cout << -1;
      return 0;
    }

    if((countone - counttwo)% 3 !=0)
    {
      cout << -1;
      return 0;
    }


    vector<int> one,two;

    for(auto &i : mp)
    {
      if(i.second.size() == 3)
      {
        for(auto &j: i.second)
        {
          cout << j << " "; 
        }
        cout << endl;
      }
      else if(i.second.size() == 2)
      {
        for(auto &j : i.second)
        {
          two.PB(j);
        }
      }
      else if(i.second.size() == 1)
      {
        for(auto &j:i.second)
        {
          int p = getParent(j);
          if(sz[p] != 1)continue;
          one.PB(j);
        }
      }
    }

    int  j = 0;





    for(int i = 0; i + 1 < two.size(); i+=2 )
    {
      cout << two[i] << " " << two[i+1] << " " << one[j++] << endl;
    }
   
    int k = 0;

    while(j < one.size())
    {
      cout << one[j] << " ";
      j++;
      k++;
      if(k % 3 == 0)cout << endl;

    }
  return 0;
} 