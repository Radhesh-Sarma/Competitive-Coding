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
  #pragma comment(linker, "/STACK:2000000")
  #pragma comment(linker, "/HEAP:2000000")
  #define db long double
  #define trace1(x)                cerr<<#x<<": "<<x<<endl
  #define trace2(x, y)             cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
  #define trace3(x, y, z)          cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
  #define trace4(a, b, c, d)       cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl
  #define trace5(a, b, c, d, e)    cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl
  #define trace6(a, b, c, d, e, f) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<endl
  #define cases int testcases;cin>>testcases; while(testcases--)
  #define MOD 1000000007
  void time() {
    #ifndef ONLINE_JUDGE
    cout << "\nTime: " << 1.0 * clock() / CLOCKS_PER_SEC << "s\n";
    #endif
}
  int32_t main()
  {        
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    IOS
    int n;
    cin>>n;
    int h1[n],h2[n];
    for(int i=0;i<n;i++)
    {
      cin>>h1[i];
    }
    for(int i=0;i<n;i++)
    {
      cin>>h2[i];
    }
    for(int i=1;i<n;i++)
    {
      h1[i]=max(max(h1[i-1],h2[i-1]),h1[i]+h2[i-1]);
      h2[i]=max(max(h2[i-1],h1[i-1]),h2[i]+h1[i-1]);
    }
    cout<<max(h1[n-1],h2[n-1]);
    return 0; 
} 