  #include<bits/stdc++.h>
  using namespace std;
  #define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  #define endl "\n"
  #define SQ(a) (a)*(a)you
  #define f first
  #define s second
  #define int long long
  #define PB push_back
  #define MP make_pair
  #define db long double
  #define all(a) a.begin(), a.end()
  #define trace1(x)                cerr<<#x<<": "<<x<<endl
  #define trace2(x, y)             cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
  #define trace3(x, y, z)          cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
  #define trace4(a, b, c, d)       cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl
  #define trace5(a, b, c, d, e)    cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl
  #define trace6(a, b, c, d, e, f) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<endl
  #define cases int testcases;cin>>testcases; while(testcases--)
  #define mod 1000000007 



  int32_t main()
  {
  IOS
         


          #ifndef ONLINE_JUDGE
         freopen("input.txt", "r", stdin);
         freopen("output.txt", "w", stdout);
          #endif

              

          int n;
          cin>>n;
          int arr[n];
          map<int,int> mp;

          for(int i=0;i<n;i++)
          {
            cin>>arr[i];
            mp[arr[i]]++;

          }

          int a=-1;
          int b;
          for(auto i:mp)
          {
            if(i.s>a)
            {
              a=i.s;
              b=i.f;
            }
          }

          cout<<n-a<<endl;
          for(int i=0;i<n;i++)
          {
            if(arr[i]==b)
            {
              for(int j=i-1;j>=0;j--)
              {
                if(arr[j]>arr[j+1])
                {
                  arr[j]=b;
                  cout<<2<<" "<<j+1<<" "<<j+2<<endl;
                }
                else if (arr[j]<arr[j+1])
                {
                  arr[j]=b;
                    cout<<1<<" "<<j+1<<" "<<j+2<<endl;
                }
              }
              break;
            }
          }


         for(int i=n-1;i>=0;i--)
         {
          if(arr[i]==b)
          {
            
            for(int j=i+1;j<n;j++)
            {
              if(arr[j]>arr[j-1])
              {
                arr[j]=b;
                cout<<2<<" "<<j+1<<" "<<j<<endl;
              }
              else 
              {
                arr[j]=b;

                cout<<1<<" "<<j+1<<" "<<j<<endl;
              }
            }

            break;
          }
         }

         for(int i=0;i<n-1;i++)
         {
            if(arr[i]==b && arr[i+1]!=b)
            {
              if(arr[i+1]>arr[i])
              {
                arr[i+1]=b;
                cout<<2<<" "<<i+2<<" "<<i+1<<endl;
              }
              else
              {
                arr[i+1]=b;
                cout<<1<<" "<<i+2<<" "<<i+1<<endl;
              }
            }

         }


      return 0;
      }
   

     