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
    const int N =  200005;

    int arr[N];
    int dp[N];

  int32_t main() 
  {
    IOS

      #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);
       freopen("output.txt", "w", stdout);
      #endif


        int n;
        cin >> n;
        
        rep(i,1,n)
        {
          cin >> arr[i];
          dp[i] = 1;
        }
        map<int,int> mp;

        mp[arr[1]] = 1;
        rep(i,2,n)
        {
          if(mp.find(arr[i] - 1) != mp.end())
          {
            dp[i] = max(dp[i], dp[mp[arr[i] - 1]] + 1);
          }
          mp[arr[i]] = i;
        }

        int ans = 1;

        rep(i,1,n)
        {
          ans = max(ans,dp[i]);
          //trace2(i,dp[i]);
        }

        int k = ans;
        set<int> s;


        rep2(i,n,1)
        {
          if(dp[i] == k)
          {
            k = arr[i];
            break;
          }
        }

        rep2(i,n,1)
        {
          if(arr[i] == k)
          {
            s.insert(i);
            k--;
          }
        }
        cout << s.size() << endl;

        for(auto i:s)
        {
          cout << i << " " ;
        }

    return 0;
  }