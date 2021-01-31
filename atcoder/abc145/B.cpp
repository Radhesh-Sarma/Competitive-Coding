  #include<bits/stdc++.h>
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

// void time() {
//     #ifndef ONLINE_JUDGE
//     cout << "\nTime: " << 1.0 * clock() / CLOCKS_PER_SEC << "s\n";
//     #endif
// }
 



  int32_t main()
  {        


     IOS

    

     int n;
     cin >> n;
     string s;
     cin >> s;

     if(n%2 == 0 )
     {
        bool ok = true;

        for(int i = 0; i < s.length()/2; i++)
        {
          if(s[i] != s[i + s.length()/2])
          {
            ok = false;
            break;
          }
        }

        if(ok)
        {
          cout << "Yes";
        }
        else
        {
          cout << "No";
        }
     }
     else
     {
      cout << "No";
     }

    //time();
    return  0;
     }
