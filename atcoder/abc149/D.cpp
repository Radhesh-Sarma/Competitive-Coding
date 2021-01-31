   // Author : Radhesh Sarma
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
    #define trace4(a, b, c, d)       cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl
    #define trace5(a, b, c, d, e)    cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl
    #define trace6(a, b, c, d, e, f) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<endl
    #define cases int testcases;cin>>testcases; while(testcases--)
    #define INF 2000000000
    const double PI = acos(-1);
    const int N =  200005;

    int dp[N];

    int n,k,r,p,s;
      string str;
    char winner(char ch)
    {
      if(ch == 'r')
      {
        return 'p';
      }
      if(ch == 's')
      {
        return 'r';
      }
      if(ch == 'p')
      {
        return 's';
      }
    }

    int pts(char ch)
    {
        if(ch == 'r')
      {
        return r;
      }
      if(ch == 's')
      {
        return s;
      }
      if(ch == 'p')
      {
        return p;
      }
    }
    bool ok[N];

  int32_t main() 
  {
    IOS

      
     
     cin >> n >> k >> r >> s >> p >> str;


     rep(i,0,n+1)
     {
      ok[i] = true;
     }
     // trace6(n,k,r,s,p,str);

     for(int i = 1; i <=k; i++)
     {
      dp[i] = dp[i-1] + pts(winner(str[i-1]));
    // trace4(i,str[i-1],winner(str[i-1]),pts(winner(str[i-1])));
     }

     for(int i = k + 1; i <= n; i++)
     {
      //trace4(i,str[i-1],winner(str[i-1]),pts(winner(str[i-1])));

      if((str[i-1]) == str[i-1 -k] and ok[i-k-1])
      {
       // trace2(i,str[i-1]);
        dp[i] = dp[i-1];
        ok[i-1] = false;
      }
      else
      {

        dp[i] = dp[i-1] + pts(winner(str[i-1]));
      }
     }

     rep(i,1,n)
     {
      //trace2(i,dp[i]);
     }

     cout << dp[n];
    
    return 0;
  }