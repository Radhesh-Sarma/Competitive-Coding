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


 int a[N],b[N];


int32_t main()
{

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin >> n;

    map<int,int> mp;


    for(int i = 0; i < n; i++)
    {
      cin >> a[i];
    }

    for(int j = 0 ; j < n; j++)
    {
      cin >> b[j];
    }

    int ans = 0;

    if(a[0] + a[1] > b[0] + b[1])
    {
      ans++;
    }

    int time = 0;

    ordered_set s;

    s.insert({a[0]-b[0],time++});
    s.insert({a[1]-b[1],time++});

    mp[a[0]-b[0]]++;
    mp[a[1]-b[1]]++;


    for(int i = 2; i < n; i++)
    {
      ans += s.size() - s.order_of_key({b[i]-a[i],0}) - mp[b[i]-a[i]];
      s.insert({a[i]-b[i],time++});
      mp[a[i]-b[i]]++;
    }

    cout << ans; 

  return 0;
}