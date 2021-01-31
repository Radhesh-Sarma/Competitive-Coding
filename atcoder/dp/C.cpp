 #include<bits/stdc++.h>
  using namespace std;
  #define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  #define endl "\n"
  #define int long long
  #define all(v) v.begin(),v.end()
  #define rep(i,a,b) for(int i = a; i <=b; i++)
  #define rep2(i,a,b) for(int i = a; i>=b; i--)
  #define f first
  #define s second
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
      


int32_t main()
{
       

    
    int n;
    cin >> n;
    int a[n+1],b[n+1],c[n+1];

    rep(i,1,n)
    {
      cin >> a[i] >> b[i] >> c[i];
    }

    int dp1[n+1],dp2[n+1],dp3[n+1];
    dp1[1] = a[1];
    dp2[1] = b[1];
    dp3[1] = c[1];

    

    rep(i,2,n)
    {
      dp1[i] = max(dp2[i-1] + a[i],dp3[i-1]+a[i]);
      dp2[i] = max(dp1[i-1]+b[i],dp3[i-1]+b[i]);
      dp3[i] = max(dp1[i-1]+c[i],dp2[i-1]+c[i]);
    }

      cout << max({dp1[n],dp2[n],dp3[n]});

   return 0;
}  