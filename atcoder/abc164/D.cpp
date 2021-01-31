  //Keep Working Hard
  // I__Like__Food  

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp>

// Remove GCC optimizer for codechef
#pragma comment(linker, "/stack:200000000")
#pragma GCC optimize("O3")
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")

using namespace std;
using namespace __gnu_pbds;

  #define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  #define int long long
  #define endl "\n"
  #define all(v) v.begin(),v.end()
  #define double long double
  #define trace1(x)                cerr<<#x<<": "<<x<<endl
  #define trace2(x, y)             cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
  #define trace3(x, y, z)          cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
  #define trace4(a, b, c, d)       cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl
  #define trace5(a, b, c, d, e)    cerr<<#a<<": "<<a<<" | "<<#b<< ": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl
  #define trace6(a, b, c, d, e, f) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<endl
  #define cases int testcases;cin>>testcases; while(testcases--)
  const int N = 200005;
  const double PI = 3.1415926535898;


int32_t main()
{






  string s;
  cin >> s;
  int p = 2019;

  int n = s.length();

  int arr[n+1];

  for(int i = 1; i <= n; i++)
  {
    arr[i] = s[i-1] -'0';
  } 

  if(10%p == 0)
  {
    int ans = 0;

    for(int i = 1; i <= n; i++)
    {
      if(arr[i]%p == 0)ans +=i;
    }
    cout << ans;
    return 0;
  }

  int pre[n+1];
  pre[n] = arr[n]%p;

  int poww = 10;
  for(int i = n-1; i >= 1; i--)
  {
      pre[i] = (pre[i+1]%p + ((poww)*arr[i]) %p)%p;
    poww = (10*poww)%p;
  }

  pre[0] = 0;


  reverse(pre+1,pre+n+1);

  int ans = 0;

  vector<int> mp(p,0);

  for(int i = 0; i <=n; i++)
  {
    ans += mp[pre[i]];
    mp[pre[i]]++;
  }
  cout << ans;

    return 0;
}
