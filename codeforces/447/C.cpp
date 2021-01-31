 #include<bits/stdc++.h>
  #include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp>
#pragma comment(linker, "/stack:200000000")
#pragma GCC optimize("O3")
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
  using namespace std;
using namespace __gnu_pbds;
  #define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
  #define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  #define endl "\n"
  #define int long long
  #define double long double
  #define all(v) v.begin(),v.end()
  #define rep(i,a,b) for(int i = a; i <=b; i++)
  #define rep2(i,a,b) for(int i = a; i>=b; i--)
  #define f first
  #define s second
  #define PB push_back
  #define MP make_pair
  #define db long double
  #define trace1(x)                cerr<<#x<<": "<<x<<endl
  #define trace2(x, y)             cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
  #define trace3(x, y, z)          cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
  #define trace4(a, b, c, d)       cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl
  #define trace5(a, b, c, d, e)    cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl
  #define trace6(a, b, c, d, e, f) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<endl
  #define cases int testcases;cin>>testcases; while(testcases--)
  #define INF 2000000000
  const double PI = acos(-1);
  const int N = 200005;
  int mod = 1e9 + 7;
      
int32_t main()
{
       

   #ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin >> n;

    if(n == 1 or n == 2)
    {
      cout << n;
      return 0;
    }
    int arr[n+1];
    rep(i,1,n)
    {
      cin >> arr[i];
    }

    int dp1[n+1],dp2[n+1];


    dp1[1] = 1;
    rep(i,2,n)
    {
      if(arr[i] > arr[i-1])
      {
        dp1[i] = dp1[i-1] + 1;
      } 
      else
      {
        dp1[i] = 1;
      }
    }

    dp2[n] = 1;

    rep2(i,n-1,1)
    {
      if(arr[i] < arr[i+1])
      {
        dp2[i] = dp2[i+1] + 1;
      }
      else
      {
        dp2[i] = 1;
      }
    }

    
    int ans = max({1+dp1[n-1],1+dp2[2]});

    rep(i,2,n-1)
    {
      ans = max({ans,dp1[i]+1,dp2[i]+1});

      if(arr[i+1] > arr[i-1] + 1)
      {
        ans = max(ans,dp1[i-1]+dp2[i+1]+1);
      }
    }

    cout << ans;

   return 0;
}       