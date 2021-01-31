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

  vector<int> primes;
  
int32_t main()
{

  


   int n,k;
   cin >> n >> k;
   int arr[n];
   int ans=0 ;
   
   rep(i,0,n-1)
   {
    cin >> arr[i];
    if(arr[i] >= k)
    {
      ans++;
    }
   }

   cout << ans;

    return 0;
}