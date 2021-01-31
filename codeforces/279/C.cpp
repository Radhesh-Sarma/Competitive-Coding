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
  #define N 100005
  #define INF 1e16
  const double PI = acos(-1);

  


int dp[N],dp2[N];
int32_t main()
{
       

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    
   int n,m;
   cin >> n >> m;
   
   vector<int> arr(n+1);
   
   for(int i = 1; i <= n; i++)
   {
          cin >> arr[i];
   }

   vector<int> dp1(n+1,1);
   vector<int> dp2(n+1,1);

   for(int i = 2; i <= n; i++)
   {
      if(arr[i] <= arr[i-1])dp1[i] = 1 + dp1[i-1];
      else dp1[i] = 1;
   }
   for(int i = n-1; i >=1; i--)
   {
    if(arr[i] <= arr[i+1])dp2[i] = 1 + dp2[i+1];
    else dp2[i] = 1;
   }


   for(int i = 1; i <= m; i++)
   {
    int x,y;
    cin >> x >> y;
    if(dp1[y] + dp2[x] > y-x+1)cout << "Yes" << endl;
    else cout << "No" << endl;
   }
  return 0;
} 