#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
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
const int R = 200005;
int32_t main()
{
IOS

  
        #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);
       freopen("output.txt", "w", stdout);
        #endif  




          int n;
          cin>>n;
          n*=2;


            int arr[n];

          for(int i=0;i<n;i++)  
          {
            cin>>arr[i];
          }


            sort(arr,arr+n);

            int sum1=0;
            int sum2=0;

            for(int i=0;i<n/2;i++)
            {
              sum1+=arr[i];
            }

            for(int i=n/2;i<n;i++)
            {
              sum2+=arr[i];
            }
            if(sum1==sum2)
            {
              cout<<-1;
              return 0;
            }
            else
            {
              for(int i=0;i<n;i++)
              {
                cout<<arr[i]<<" ";
              }
            }

           return 0;
          
    
      
}

    


    