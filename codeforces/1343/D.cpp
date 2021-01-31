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
  #define trace5(a, b, c, d, e)    cerr<<#a<<": "<<a<<" | "<<#b<< ": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl
  #define trace6(a, b, c, d, e, f) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<endl
  #define cases int testcases;cin>>testcases; while(testcases--)
  #define mod 1000000007
  #define N 200005
  #define INF 1e18
  #define eps 1e-6
  #define int long long
  #define pie 3.1415926535897932



int32_t main()
{


    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif


  cases
  {
  
    int n, k;
    cin >> n >> k;

    vector<int> v(n);

    for(int i = 0; i < n; i++)
    {
      cin >> v[i];
    }

    map<int,int> mp;

    for(int i = 0; i < n/2; i++)
    {
      mp[v[i] + v[n-i-1]]++;
    }


    vector<int> f(2*k+2,0);

    for(int i = 0; i < n/2; i++)
    {
      int l = min(v[i],v[n-i-1]) + 1;
      int r = max(v[i],v[n-i-1]) + k;
      f[l]++;
      f[r+1]--;
    }

    for(int i = 1; i <= 2*k+1; i++)
    {
      f[i] += f[i-1];
    }

    int ans = INF;

    for(int i = 2; i <= 2*k; i++)
    { 
      if(mp.find(i) != mp.end())ans = min(ans,2*(n/2 - f[i]) + f[i] - mp[i]);
      else ans = min(ans,n - f[i]);
    }

    cout << ans << endl;
  }


    return 0;
}