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



map<int, int> factorize(int x)
{
    int n = x;
    map<int, int> m;
    for(int i = 2; i*i <= n and x > 1; ++i)
        while(x % i == 0)
            m[i]++, x /= i;
    if(x > 1)
        m[x]++;
    return m;
}

vector<int> v1;

int32_t main()
{




      int x;
      cin >> x;


      

      for(int i = 1; i <= 10000; i++)
      {
        v1.push_back(i*(i+1)/2);
      }


      map<int,int> mp = factorize(x);



      vector<int> v;

      for(auto i : mp)
      {
        v.push_back(i.second);
      }

      int ans  =0;

      for(int i = 0; i < v.size(); i++)
      {
        int k = v[i];

        int j = 1;

        while(k -j>=0)
        {
          k-=j;
          j++;
          ans++;
        }

      }

      cout << ans;





    return 0;
}
