    //Keep Working Hard
  // I__Like__Food  
  #include<bits/stdc++.h>
  using namespace std;
  #define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  #define endl "\n"
  #define all(v) v.begin(),v.end()
  #define f first
  #define s second
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
  #define MOD 998244353
  #define N 100005
  #define INF 1000000000000
  #define eps 1e-6
  #define int long long

int arr[N];
int dp[N][3];

int32_t main()
{


    int n;
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
      cin >> arr[i];
    }


    for(int i = 1; i <= n; i++)
    {
       dp[i][0] = max({dp[i-1][0],dp[i-1][1],dp[i-1][2]});
       if(arr[i] == 1 or arr[i] == 3)dp[i][1] = 1 + max(dp[i-1][0],dp[i-1][2]);
       if(arr[i] == 2 or arr[i] == 3)dp[i][2] = 1 + max(dp[i-1][0],dp[i-1][1]);
    }

    cout << n - max({dp[n][0],dp[n][1],dp[n][2]});








    return 0;
}