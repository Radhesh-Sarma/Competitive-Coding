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
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout); 
    #endif
    IOS



    int n;
    cin>>n;
    int arr[n];
    int mx=-1;
    int mxindx=-1;
    for(int i=0;i<n;i++)
    {
      cin>>arr[i];
      if(mx<arr[i])
      {
        mx=arr[i];
        mxindx=i;
      }
    }
    bool ok1=1,ok2=1,ok3=1;
    for(int i=0;i<n-1;i++)
    {
      if(arr[i]>arr[i+1])
      {
        ok1=0;
        
      }
      if(arr[i]<arr[i+1])
      {
        ok2=0;
      }
    }


    for(int i=0;i<mxindx;i++)
    {
      if(arr[i]>arr[i+1])
      {

        ok3=false;
      }
    }

    for(int i=mxindx;i<n-1;i++)
    {
      if(arr[i]<arr[i+1])
      {

        ok3=false;
      }
    } 

    if((ok1)or(ok2)or(ok3))
    {
      cout<<"YES";
    }
    else
    {
      cout<<"NO";
    }



    return 0;      
} 