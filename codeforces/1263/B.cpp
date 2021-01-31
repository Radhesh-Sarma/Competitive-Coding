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
    #define PB push_back
    #define MP make_pair
    #define db long double
    #define f first 
    #define s second
    #define trace1(x)                cerr<<#x<<": "<<x<<endl
    #define trace2(x, y)             cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
    #define trace3(x, y, z)          cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
    #define trace4(a, b, c, d)       cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl
    #define trace5(a, b, c, d, e)    cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl
    #define trace6(a, b, c, d, e, f) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<endl
    #define cases int testcases;cin>>testcases; while(testcases--)
    #define INF 2000000000
    const double PI = acos(-1);
    const int N =  3005;


  int32_t main() 
  {
    IOS

      #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);
       freopen("output.txt", "w", stdout);
      #endif


      cases 
      {
        int n;
        cin >> n;
        set<string>s;
        vector<string>v;

   

        rep(i,1,n)
        {
          string x;
          cin >> x;
          v.PB(x);
          s.insert(x);
        }

        int ans = n - s.size();


        set<string > ss;

        for(int i = 0; i < v.size(); i++)
        { 
          if(ss.count(v[i]))
          { 
            string k = v[i];

            bool ok = false;
              rep(j,0,9)
              {
                string kk = k;
                kk[0] = j + '0';
                //trace2(i,kk);
                if(!s.count(kk))
                {
                  v[i] = kk;
                  ss.insert(kk);
                  s.insert(kk);
                  ok = true;
                  break;
                }

              }

            
          }
          else
          {

            ss.insert(v[i]);
          }
        }


        cout << ans << endl;
        for(auto i:v)
          {
            cout << i << endl;
          }

      }
    return 0;
  }