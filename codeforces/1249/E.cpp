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
  
  int32_t main()
  {        
   
    
    IOS

    int n, c;
    cin >> n >> c;
    
    int a[n],b[n];
    
    for(int i = 1; i <= n-1; i++)
    {
        cin >> a[i];
    }
    
    
    for(int i = 1; i <= n-1; i++)
    {
        cin >> b[i];
    }
    
    int dpStair[n+1];
    int dpElevator[n+1];
    
    dpStair[1] = 0;
    dpElevator[1] = c;
    
    for(int i = 2; i <= n; i++)
    {
        dpStair[i] = a[i-1] + min(dpStair[i-1],dpElevator[i-1]);
        dpElevator[i] = b[i-1] + min(c+dpStair[i-1],dpElevator[i-1]);
    }
    
    for(int i = 1; i <= n;i++)
    {
        cout << min(dpStair[i],dpElevator[i]) << " " ;
    }
    
    return 0; 
} 