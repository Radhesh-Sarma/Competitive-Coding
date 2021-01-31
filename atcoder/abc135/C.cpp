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
    IOS
    int n;
    cin>>n;
    int a[n+2];
    int b[n+1];
    int ans=0;
    rep(i,1,n+1)
    {
      cin>>a[i];
    }
    rep(i,1,n)
    {
      cin>>b[i];
    }
    rep(i,1,n)
    {
      if(b[i]<=a[i])
      {
        a[i]-=b[i];
        ans+=b[i];
        b[i]=0;
        
      }
      else if(b[i]>a[i])
      {
        b[i]-=a[i];
        ans+=a[i];
        a[i]=0;
        if(b[i]>a[i+1])
        {
          b[i]-=a[i+1];
          ans+=a[i+1];
          a[i+1]=0;
        }
        else if(b[i]<=a[i+1])
        {
          a[i+1]-=b[i];
          ans+=b[i];
          b[i]=0;
        }
      }
    }
    cout<<ans;
    return 0;
} 