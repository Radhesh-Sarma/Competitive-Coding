  #include<bits/stdc++.h>
  using namespace std;
  #define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  #define endl "\n"
//   #define SQ(a) (a)*(a)you
//   #define f first
//   #define s second
//   #define int long long
//   #define PB push_back
//   #define MP make_pair
//   #define db long double
//   #define all(a) a.begin(), a.end()
//   #define trace1(x)                cerr<<#x<<": "<<x<<endl
//   #define trace2(x, y)             cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
//   #define trace3(x, y, z)          cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
//   #define trace4(a, b, c, d)       cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl
//   #define trace5(a, b, c, d, e)    cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl
//   #define trace6(a, b, c, d, e, f) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<endl
//   #define cases int testcases;cin>>testcases; while(testcases--)
//   #define mod 1000000007 

  
  int32_t main()
  {
// IOS

          int n;
          cin>>n;
          int ans=0;

          for(int i=1;i<=n;i++)
          {
            for(int j=1;j<=n;j++)
            {
                  int c=i*i+j*j;
                if(c>(n*n))
                {
                  break;
                }
                else
                {
                    if(ceil(sqrt(c))==floor(sqrt(c)))
                    {
                        ans++;
                    }
                }

            }
          }

          cout<<ans/2;
      return 0;
      }
   

     