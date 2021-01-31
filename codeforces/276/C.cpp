  #include<bits/stdc++.h>
    using namespace std;
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
    #define MOD 1000000007
    void printprecise(double l,int precision) 
    {
      std::cout << std::fixed;
      std::cout << std::setprecision(precision);
      std::cout << l;
  }

  int fastExpo(long long a,long long n, int mod)
  {
      a%=mod;
      if(n==2)return a*a%mod;
      if(n==1)return a;
      if(n&1)return a*fastExpo(fastExpo(a,n>>1,mod),2,mod)%mod;
      else return fastExpo(fastExpo(a,n>>1,mod),2,mod);
  }
  int isPrime(int n){
      if(n < 2)
          return 0;
      if(n < 4)
          return 1;
      if(n % 2 == 0 or n % 3 == 0)
          return 0;
      for(int i = 5; i*i <= n; i += 6)
          if(n % i == 0 or n % (i+2) == 0)
              return 0;
      return 1;
  }
  long long C(int n, int r) {
      if(r>n-r) 
          r=n-r;
      long long ans=1;
      for(int i=1;i<=r;i++){
          ans*=n-r+i;
          ans/=i;
      }
      return ans;
  }

  
 
  int32_t main()
  {
         


    
      IOS
      
     #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

      
    int n, q;
    cin >> n >> q;

    int arr[n+1];

    for(int i = 1;i <= n; i++)
    {
      cin >> arr[i];
    }

    int arr2[n+2]= {0};

    while(q--)
    {
      int x, y;
      cin >> x >> y;
      arr2[x]++;
      arr2[y+1]--;
    }

  
    vector<int> v;
    for(int i = 1;i <=n; i++)
    {
      arr2[i] += arr2[i-1];
      v.push_back(arr2[i]);
    }

    sort(arr+1,arr+n+1);
    sort(v.begin(),v.end());

    int ans = 0;
    for(int i = 1;i <= n; i++)
    {
      //trace2(arr[i],v[i-1]);
      ans+= (arr[i] * v[i-1]);
    }

    cout << ans;




      return 0;
  }