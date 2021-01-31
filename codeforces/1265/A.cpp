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
    #define trace1(x)                cerr<<#x<<": "<<x<<endl
    #define trace2(x, y)             cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
    #define trace3(x, y, z)          cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
    #define trace3race4(a, b, c, d)       cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl
    #define trace5(a, b, c, d, e)    cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl
    #define trace6(a, b, c, d, e, f) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<endl
    #define cases int testcases;cin>>testcases; while(testcases--)
    #define INF 2000000000
    const double PI = acos(-1);
    const int N =  200005;


    
  int32_t main() 
  {
    IOS

        #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);
       freopen("output.txt", "w", stdout);
      #endif
       


       cases 
       {
        string s;
        cin >> s;

        bool ok = true;
        for(int i = 0; i + 1 < s.length(); i++)
        {
          if(s[i] == s[i+1] and s[i] != '?')
          {
            ok = false;
            break;
          }
        }

        if(ok)
        {

          if(s[0] == '?')
          {
            if(s.length() == 1)
            {
              s[0] = 'b';
              cout << s << endl;
              continue;
            }

            if(s[1] == 'a' or s[1] == 'c')
            {
              s[0] = 'b';
            }
            else if(s[1] == 'b')
            {
              s[0] = 'a';
            }
            else if(s[1] == '?')
            {
              s[0] = 'b';
            }
          }

          for(int i = 1; i < s.length() - 1; i++)
          {
            if(s[i+1] == '?' and s[i] == '?')
            {
              if(s[i-1] == 'a' or s[i-1] == 'c')
            {
              s[i] = 'b';
            }
            else if(s[i-1] == 'b')
            {
              s[i] = 'a';
            }

            }
            else if(s[i] == '?')
            {
              if('b' != s[i+1] and 'b' != s[i-1])
              {
                s[i] = 'b';
              }
              else if('c' != s[i+1] and 'c' != s[i-1])
              {
                s[i] = 'c';
              }
               else if('a' != s[i+1] and 'a' != s[i-1])
              {
                s[i] = 'a';
              }
            }

          }

          if(s[s.length() - 1] == '?')
          {
            if(s[s.length() - 2] == 'a' or s[s.length() - 2] == 'c')
            {
              s[s.length() - 1] = 'b';
            }
            else if(s[s.length() - 2] == 'b')
            {
              s[s.length() - 1] = 'a';
            }
          }


          cout << s << endl;



        }
        else
        {
          cout <<" -1\n";
        }

       }
    return 0;
      
  }


