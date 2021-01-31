  //Keep Working Hard
  #include<bits/stdc++.h>
    #include <ext/pb_ds/assoc_container.hpp> 
  #include <ext/pb_ds/tree_policy.hpp>
  #pragma comment(linker, "/stack:200000000")
  #pragma GCC optimize("O3")
  #pragma GCC optimize("Ofast") 
  #pragma GCC optimize("unroll-loops")
 using namespace std;
  using namespace __gnu_pbds;
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
  #define MOD 1000000007
  #define N 100005
  #define INF 1000000000000000



typedef tree<
pair<int, int>,
null_type,
less<pair<int, int>>,
rb_tree_tag,
tree_order_statistics_node_update> ordered_set;



int parent[N];
int sz[N];

int a[N],b[N],sum[N];

void make_set(int s)
{
  parent[s] = s;
  sum[s] = a[s];
  sz[s] = 1;
}

int findParent(int s)
{
  if(s == parent[s])return s;
  else return parent[s] = findParent(parent[s]);
}
void join(int a,int b)
{
  a = findParent(a);
  b = findParent(b);
  if(a != b)
  {
    parent[b] = a;
    sum[a] += sum[b];
    sum[b] = sum[a];
  }
}

int32_t main()
{

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif


  stack<int> s;

  

  int n;
  cin >> n;

  for(int i = 1; i <= n; i++)
  {
    cin >> a[i];
  }

  for(int i = 1; i <= n; i++)
  {
    cin >> b[i];
    make_set(i);
  }


  if(n == 1)
  {
    cout << 0;
    return 0;
  }
  s.push(0);
  s.push(a[b[n]]);

  set<int> ss;
  ss.insert(b[n]);

  int ans = a[b[n]];
  for(int i = n - 1; i>=2; i--)
  {
    if(ss.count(b[i]+1))
    {
      join(b[i],b[i]+1);
    }
    if(ss.count(b[i]-1))
    {
      join(b[i],b[i]-1);
    }
    ss.insert(b[i]);
    ans = max(ans,sum[findParent(b[i])]);
    s.push(ans);
  }


  while(!s.empty())
  {
    cout << s.top() << endl;
    s.pop();
  }

 

  return 0;
}