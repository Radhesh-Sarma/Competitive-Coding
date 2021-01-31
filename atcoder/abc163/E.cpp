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
  #define mod 1000000007
  #define N 2005
  #define INF 1000000000000
  #define eps 1e-6
  #define int long long
  #define pie 3.1415926535897932384626433832795028

  int arr[N];
  int dp[N][N];
  // dp[l][r] means the maximum hapiness we can get if 
  // we put the r-l + 1 kids from l to r index

int32_t main()
{




    int n;
    cin >> n;
    vector<pair<int,int>>arr(n);

    for(int i = 0; i < n; i++)
    {
      cin >> arr[i].f;
      arr[i].s = i;
    }

    sort(all(arr));
    for(int i = 1; i <= n; i++)
    {
      for(int j = 0; j < n; j++)
      {
        int l = j;
        int r = j + i - 1;

        if(l == r)
        {
          dp[l][l] = max(dp[l][l],arr[i-1].f*abs(arr[i-1].s-l));
        }
        else
        {
          dp[l][r] = max({dp[l+1][r] + arr[i-1].f * abs(arr[i-1].s - l),dp[l][r-1] + arr[i-1].f * abs(arr[i-1].s - r),dp[l][r]});
        }
      }
    }

    cout << dp[0][n-1];

    return 0;
}