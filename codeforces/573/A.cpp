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
int gcd(int a,int b)
{
  return __gcd(a,b);
}
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
        for(int i=0;i<n;i++)
        {
          cin>>arr[i];
        }

        int ans=gcd(arr[0],arr[1]);

        for(int i=2;i<n;i++)
        {
          ans=gcd(ans,arr[i]);
        }

        for(int i=0;i<n;i++)
        {
            db y=(db)arr[i]/(db)(ans);
            if(ceil(y)!=floor(y))
            {
              cout<<"No";
              return 0;
            }
            int x=arr[i]/ans;

            while((x%3)==0 && (x))
            {
              x/=3;
            }
            while((x%2)==0 && (x))
            {
              x/=2;
            }

            if(x!=1)
            {
              cout<<"No"; 
              return 0;
            }

        }
        cout<<"Yes";

        
     
return 0;
    }
    
    
  

  