  #include<bits/stdc++.h>
  using namespace std;
  #define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  #define endl "\n"
  #define int long long
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
  #define MOD 1000000007
  #define N 10005
  #define INF 10000000000000
  #define eps 1e-6

  int dp[N];
  int32_t main()
  {         

    IOS

    int h,n;
    cin >> h >> n;

    int a[n+1],b[n+1];

    for(int i = 1; i <= n; i++)
    {
      cin >> a[i] >> b[i];
    }
    
    //dp[n] denotes the minimum cost to win over health H

    dp[0] = 0;

    for(int i = 1; i <= h; i++)
    {
      dp[i] = INF;
    }

    for(int i = 1; i <= h; i++)
    {
      for(int j = 1; j <= n; j++)
      {     //if(i - a[j] <0) continue;
            if(i - a[j] < 0) dp[i] = min(dp[i],b[j]);
            else dp[i] = min(dp[i],dp[i-a[j]] + b[j]);
      }
    } 

    cout << dp[h];

    // for(int i = 0 ; i <= h; i++)
    // {
    //   trace2(i,dp[i]);
    // }

    return 0;   
}