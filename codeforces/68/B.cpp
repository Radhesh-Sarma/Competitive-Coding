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
  double epsilon = 1e-7;
int n, k;
int arr[10003];
double ans ;
bool check(double x)
{

  
  double pos = 0, neg = 0;

  for(int i = 0; i < n; i++)
  {
    if((double)(arr[i]) - x > 0)
    {
      pos += (double)(arr[i]) - x;
    }
    else
    {
      
      neg += (x - (double)(arr[i]));
    }
  }

  

  ans = (double)((100-k)* pos)/ 100 - (double)neg;



  if(ans < 0)
  {
    return true;
  }
  return false;

}

int32_t main()
{
       

   #ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("output.txt", "w", stdout);
    #endif
  

    
    cin >> n >> k;

    

    rep(i,0,n-1)
    {
      cin >> arr[i];
    }

    double l = 0;
    double r = 1000;

    int i = 0;



   

    while(true)
    {
      double mid = l + (r-l)/2;
      if(check(mid))
      {
        r= mid;
      }
      else
      {
        l = mid;
      }
      if(abs(ans) < epsilon)
      {
        cout << fixed << setprecision(6) << l;
        return 0;
      }
    }


   return 0;
}