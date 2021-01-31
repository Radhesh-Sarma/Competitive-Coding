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
  int gcd(int a,int b)
  {
    if(a==0)
    {
      return b;
    }
    else 
      
        return gcd(b%a,a);
  }
  int32_t main()
  {        
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    IOS
    int n,m;
    cin>>n>>m;
    int p=n/(gcd(n,m));
    int q=m/(gcd(n,m));
    cases 
    {
      int x1,y1,x2,y2,a,b;
      cin>>x1>>y1>>x2>>y2;
      if(x1==1)
      {
        a=p;
      }
      else
      {
        a=q;
      }

      if(x2==1)
      {
        b=p;
      }
      else
      {
        b=q;
      }


      if((y2-1)/b == (y1-1)/a)
      {
        cout<<"YES";
      }
      else
      {
        cout<<"NO";
      }

      cout<<endl;
}



    return 0; 

    }


