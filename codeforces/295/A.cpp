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
  #define N 2005
  #define INF 1e16
  const double PI = acos(-1);

int arr[100005];
  int l[100005],r[100005],d[100005];
  int query[100005];
  int operation[100005];
  int ans[100005];

int32_t main()
{

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
  int n, m, k;
       cin >> n >> m >> k;
 
       rep(i,1,n)
          cin >> arr[i];
 
      rep(i,1,m)
          cin >> l[i] >> r[i] >> d[i];
 
      int x, y;    
      rep(i,1,k)
      {
        cin >> x >> y;
        operation[x]++;
        operation[y+1]--;
      }
 
      rep(i,1,m)
      {
        operation[i] += operation[i-1];
      }
 
      rep(i,1,m)
      {
        ans[l[i]] += (operation[i] * d[i]);
        ans[r[i]+1] -= (operation[i] * d[i]);
      }
 
      rep(i,1,n)
        ans[i] += ans[i-1];
 
      rep(i,1,n)
        cout << arr[i] + ans[i] << " ";
      return 0;
  return 0;
} 