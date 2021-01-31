 #include<bits/stdc++.h>
#include<vector>
#include<algorithm>
#include<utility>
#include<map>
#include<queue>
#include <cstdlib>
#include <climits>
#include <iomanip>
#include<iostream>
#include <sstream>  // for string streams
#include <string>  // for string
#include <stack> 
#include <cmath>
  #pragma comment(linker, "/STACK:2000000")
#pragma comment(linker, "/HEAP:2000000")
  using namespace std;
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
  #define MOD 1000000007
  void printprecise(double l,int precision) 
  {
    std::cout << std::fixed;
    std::cout << std::setprecision(precision);
    std::cout << l;
}



int answer(vector<int> v, int a, int d)
{
  int ans = 0;

  int term = a;
  for(auto i : v)
  {
    if(i != term)
    {
      ans+=abs(i-term);
    }
    term += d;
  }
  return ans;
}

int32_t main()
{
       


   #ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("output.txt", "w", stdout);
    #endif
 
  

    int n;
    cin >> n;
    vector<int> v;

    rep(i,1,n)
    {
      int x;
      cin >> x;
      v.PB(x);
    }

    if(n <= 2)
    {
      cout << 0;
      return 0;
    }
    int ans = 1000000000;
    
    for(int i = -1;i <= 1;i++)
    {
      for(int j = -1;j <= 1;j++)
      {
        int a = v[0] + i;
        int b = v[1] + j;
        int d = b - a;
        ans = min(ans,answer(v,a,d));
       // trace3(a,d,answer(v,a,d));
      }
    }

    if(ans > n)
    {
      ans = -1;
    }
    cout << ans;



    return 0;
}