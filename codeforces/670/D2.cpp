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
      

  #define N 200000


  int a[N],b[N];

  int n, k;
  bool check(int x)
  {
      int def = 0;

      rep(i,1,n)
      {
        if(b[i] - x*a[i] < 0)
        {
            def += x*a[i] - b[i];
        }
        if(def > k)
        {
          return false;
        }
      }

       if(def > k)
        {
          return false;
        }
      return true;
  }


  int binarysearch(int l,int r)
  {
    

    while(r-l > 1)
    {
      int mid = (l+r+1)/2;
      if(check(mid))
      {
        l = mid;
      } 
      else
      {
        r = mid;
      } 
    }

    return l;
  }
int32_t main()
{
       

   #ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("output.txt", "w", stdout);
    #endif

  

     cin >> n >> k;
     rep(i,1,n)
     {
      cin >> a[i];
     }
     rep(i,1,n)
     {
      cin >> b[i];
     }




     cout << binarysearch(0,2e9+10);

   return 0;
}