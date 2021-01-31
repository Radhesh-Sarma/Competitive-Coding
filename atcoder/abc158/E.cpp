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
  #define N 1000001
  

int32_t main()
{



  int n,p;
  cin >> n >> p; 


  string s;
  cin >> s;

  int arr[n+1];

  for(int i = 1; i <= n; i++)
  {
    arr[i] = s[i-1] -'0';
  } 

  if(10%p == 0)
  {
    int ans = 0;

    for(int i = 1; i <= n; i++)
    {
      if(arr[i]%p == 0)ans +=i;
    }
    cout << ans;
    return 0;
  }

  int pre[n+1];
  pre[n] = arr[n]%p;

  int poww = 10;
  for(int i = n-1; i >= 1; i--)
  {
      pre[i] = (pre[i+1]%p + ((poww)*arr[i]) %p)%p;
    poww = (10*poww)%p;
  }

  pre[0] = 0;


  reverse(pre+1,pre+n+1);

  //   for(int i = 0; i <= n; i++)
  // {
  //   trace2(i,pre[i]);
  // }
  int ans = 0;

  vector<int> mp(p,0);

  for(int i = 0; i <=n; i++)
  {
    ans += mp[pre[i]];
    mp[pre[i]]++;
  }
  cout << ans;


  return 0;
}