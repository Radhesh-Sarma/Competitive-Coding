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
  #define N 200005
  #define INF 1000000000000000



typedef tree<
pair<int, int>,
null_type,
less<pair<int, int>>,
rb_tree_tag,
tree_order_statistics_node_update> ordered_set;


int a[N],l[N],r[N];


int32_t main()
{

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif


    int n;
    cin >> n;

    for(int i = 0 ; i < n; i++)
    {
     cin >> a[i];
     l[i] = 1;
     r[i] = 1;
   }

   for(int i = 1; i < n; i++)
   {
    if(a[i] > a[i-1])l[i] = l[i-1] + 1;
   }

   for(int i = n-2; i >= 0; i--)
   {
    if(a[i] < a[i+1])r[i] = r[i+1] + 1;
   }

   int ans = l[0];

   for(int i = 0; i < n; i++)
   {
       ans = max({ans,l[i],r[i]}); 
   }

   for(int i = 1; i < n-1; i++)
   {
    if(a[i+1] - a[i-1] > 1)
    {
      ans = max(ans,l[i-1] + r[i+1] + 1);
    }
   }

    for(int i = 0 ; i + 1 < n; i++)
    {
      ans = max(ans,l[i]+1);
    }

    for(int i = n-1; i >= 1; i--)
    {
      ans = max(ans,r[i]+1);
    }

   cout << ans;




  return 0;
}