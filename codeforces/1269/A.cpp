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
  const double PI = acos(-1);
  const int N = 1e6 + 7;
  int mod = 1e9 + 7;
     
    
    bool isPrime(int n)
    {
      if(n%2 ==0 or n%3 == 0)
      {
        return false;
      }


      for(int i = 4;i*i <= n;i++)
      {
        if(n%i ==0)
        {
          return false;
        }
      }

      return true;
    }
int32_t main()
{
       


    int n;
    cin >> n;
    


    int a = n+4;

    while(true)
    {
      if(!isPrime(a) and !isPrime(a-n))
      {
        cout << a << " " << a-n;
        return 0;
      }
      a++;
    }

   return 0;
}       