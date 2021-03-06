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
  #define N 4005
  #define INF 1e16
  const double PI = acos(-1);

  int dp[N][N];
  int lastElement[N];
int32_t main()
{

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif


    int n;
    cin >> n;

    int arr[n+1];

    set<int> s;

    for(int i = 1; i <= n; i++)
    {
      cin >> arr[i];
      s.insert(arr[i]);
    }

    map<int,int> mp;

    int j = 1;
    for(auto i: s)
    {
      mp[i] = j++;
    }

    for(int i = 1; i <= n; i++)
    {
      arr[i] = mp[arr[i]];
    }





// dp[i][j] indicates the length of the longest such subsequence ending at ith pos, with j being the prev element


  for(int i = 1; i <= n; i++)
  {
    for(int j = 1; j <= n; j++)
    {
      dp[i][j] = 1;
    }
  }

  for(int i = 1; i <= n; i++)
  {
    for(int j = 1; j <= i-1; j++)
    {
      dp[i][arr[j]] = max(dp[i][arr[j]],1 + dp[j][arr[i]]);
    }
  }


    int ans = 1;

    // for(int i = 1; i<= n; i++)
    // {
    //   cout << dp[n][i] << " ";
    // }

    for(int i = 1; i <= n; i++)
    {
      for(int j = 1; j <= n; j++)
      {
       // trace3(i,j,dp[i][j]);
        ans = max(ans,dp[i][j]);
      }
    }

    cout << ans;




  return 0;
} 