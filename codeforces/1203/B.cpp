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



    #ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("output.txt", "w", stdout);
    #endif


    cases 
    {
      int n;
      cin>>n;
      int arr[4*n];
      int x=0;

      rep(i,0,4*n-1)
      {
        cin>>arr[i];
      }

      sort(arr,arr+4*n);

      bool okay=true;
      int area;

      for(int i=0;i<2*n;i++)
      {
         area=(arr[i])*(arr[4*n-i-1]);
        if(area==x or x==0)
        {
          x=area;
        }
        else
        {
    
          okay=false;
          break;
        }
        if(arr[i]!=arr[i+1] or arr[4*n-i-1]!=(arr[4*n-i-2]))
        {
       
          okay=false;
          break;
        }
        i++;

      }

      if(okay)
      {
        cout<<"YES"<<endl;
      }

      else
      {
        cout<<"NO"<<endl;
      }
    }
    
    return 0; 

    
     }


