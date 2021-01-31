  #include<bits/stdc++.h>
  using namespace std;
  #define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  #define endl "\n"
  #define int long long
  #define all(v) v.begin(),v.end()
  #define rep(i,a,b) for(int i = a; i <=b; i++)
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
   
  
  int n;
  cin >> n;
  int arr[n+1];
  
  rep(i,1,n)
  {
      cin >> arr[i];
  }
  
  int dp1[n+1],dp2[n+1];
  
  dp1[1] = 1;
  
  rep(i,2,n)
  {
      if(arr[i] > arr[i-1])
      {
          dp1[i] = dp1[i-1] + 1;
      }
      else
      {
          dp1[i] = 1;
          
      }
  }
  
  dp2[n] = 1;
  
  for(int i = n -1; i >=1; i-- )
  {
      if(arr[i] < arr[i+1])
      {
          dp2[i] = dp2[i+1] + 1;
      }
      else
      {
          dp2[i] = 1;
      }
      
  }
  
  int ans = 0;
  for(int i = 1; i <= n;i++)
  {
      ans = max(ans,dp1[i]);
  }
  
  
  rep(i,2,n-1)
  {
      if(arr[i+1] > arr[i-1])
      {
          ans = max(ans,dp1[i-1] + dp2[i+1]);
      }
            
  }
  
  cout << ans ;
  
  
    return 0;
    
    
} 