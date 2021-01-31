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
 



int32_t main() {
  // your code goes here
  #ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("output.txt", "w", stdout);
    #endif



     cases 
     {
      
      int n,s;
      cin >> n >> s;

      int arr[n];


      for(int i = 0;i < n; i++)
      {
        cin >> arr[i];
      }

      int presum[n]={0};

      presum[0] = arr[0];

      for(int i = 1; i < n; i++)
      {
        presum[i] += presum[i-1] + arr[i];
      }

      if(presum[n-1] <= s)
      {
        cout <<"0\n";
        continue;
      }
      int ans = upper_bound(presum,presum+n,s) - presum;
      int ans1 = 0;
      for(int i = 0; i < n; i++)
      {
        int a = upper_bound(presum,presum+n,s+arr[i]) - presum - 1;
        if(ans < a)
        {
          ans = a;
          ans1 = i+1;
        }
        if(presum[i] > s)
        {
          break;
        }
      }

      cout << ans1 << endl;
     }
  return 0;
}