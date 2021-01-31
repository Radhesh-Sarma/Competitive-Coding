  //Keep Working Hard
  // I__Like__Food  
  #include<bits/stdc++.h>
  #include <ext/pb_ds/assoc_container.hpp> 
  #include <ext/pb_ds/tree_policy.hpp>
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
  const int mod = 1e9 + 7;
  const int N = 200005;
  const int INF = 1e16;
  const double PI = acos(-1);



int32_t main()
{
       

    IOS
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    cases
    {
      int n,k;
      cin >> n >> k;

      int arr[n+1];
      set<int> s;

      bool ok = true;
      for(int i = 1; i <= n; i++)
      {
        cin >> arr[i];
      }

      for(int i = 1; i <= n; i++)
      {
        int x = 0;

        int y = arr[i];

        while(y)
        {
          x++;

          if(y%k !=0 and y%k != 1)
          {
            ok = false;
            break;
          }
          if(y%k == 1)
          {
            if(s.count(x))
            {
              ok = false;
              break;
            }
            else
            {
              s.insert(x);
            }
          }
          y/=k;
        }
        if(!ok)
        {
          break;
        }

      }




      if(ok)
      {
        cout << "YES" << endl;
      }
      else
      {
        cout << "NO" << endl;
      }

    }

  return 0;
} 