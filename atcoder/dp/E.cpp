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
  #define f first
  #define s second
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
  #define INF 1e10
  const double PI = acos(-1);

    int wt[N],val[N],dp[N];
int32_t main()
{


  int n, w;
  cin >> n >> w;



  //  dp[i] denotes the minimum weight that can be there for value i

  int sum = 0;
  for(int i = 1; i <= n; i++)
  {
    cin >> wt[i] >> val[i];
    sum += val[i];
  }
  
  for(int i = 1; i <= sum; i++)dp[i] = INF;

    dp[0] = 0;

  for(int i = 1; i <= n; i++)
  {
    for(int j = sum; j -val[i]>= 0; j--)
    {
      // backward to prevent double counting
      dp[j] = min(dp[j],dp[j-val[i]] + wt[i]);
    }
  }
  int ans = 0;
  for(int i = 0; i <= sum; i++)
    {
      
      if(dp[i]  <= w)
        {
          ans = max(ans,i);
        }
    }



    cout << ans;

  return 0;
  
}  