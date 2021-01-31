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
  const int N = 1e9 + 1;

vector<int> v;


void fun(int x)
{

  if(x > 0)
  {
    v.push_back(x);
  }
  if(x > 2*N)
  {
    return;
  }

  fun(10*x+4);
  fun(10*x+7);
}

int fun2(int x)
{

  if(x == 0)return 0;
  int ans = 0;

  for(int i = 0; i < v.size(); i++)
  {

    if(v[i] <= x)
    { 
      if(i == 0)ans += v[i]*v[i];
      else ans += (v[i]-v[i-1])*v[i];
    }
    else
    {
      if(i == 0)ans += x*v[i];
      else ans += (x-v[i-1])*v[i];
      break;
    }
  }

  return ans;
}

int32_t main()
{


    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif



    fun(0);

    sort(all(v));

    int ans = 0;
    int l,r;
    cin >> l >> r;

    cout << fun2(r) - fun2(l-1);



    return 0;
}
