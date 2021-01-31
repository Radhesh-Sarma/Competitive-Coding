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

  
  int arr[100005];
  int l[100005],r[100005],d[100005];
  int query[100005];
  int operation[100005];
  int ans[100005];
  int32_t main()
  {
         


    
      IOS
      
     #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

        
      int n, m, k;
       cin >> n >> m >> k;

       rep(i,1,n)
          cin >> arr[i];

      rep(i,1,m)
          cin >> l[i] >> r[i] >> d[i];

      int x, y;    
      rep(i,1,k)
      {
        cin >> x >> y;
        operation[x]++;
        operation[y+1]--;
      }

      rep(i,1,m)
      {
        operation[i] += operation[i-1];
      }

      rep(i,1,m)
      {
        ans[l[i]] += (operation[i] * d[i]);
        ans[r[i]+1] -= (operation[i] * d[i]);
      }

      rep(i,1,n)
        ans[i] += ans[i-1];

      rep(i,1,n)
        cout << arr[i] + ans[i] << " ";
      return 0;
  }