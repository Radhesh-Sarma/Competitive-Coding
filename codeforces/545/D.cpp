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
// bool sortbysec(const pair<int,int> &a, 
//               const pair<int,int> &b) 
// { 
//         if(a.f !=b.f)
//         {
//           return (a.f>b.f);
//         }
//         else
//         {
//           return (a.s<b.s);
//         }
   
// } 



int32_t main()
{
IOS
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
      bool isprime[110000];
      memset(isprime,true,sizeof(isprime));


      isprime[0]=false;
      isprime[1]=false;
  
        for(int i=2;i*i<=110000;i++)
        {
          if(isprime[i]==true)
          {
            for(int j=i*i;j<=110000;j+=i)
            {
              isprime[j]=false;
            }
          }
        }

        vector<int> prime;

        for(int i=2;i<=110000;i++)
        {
          if(isprime[i]==true)
          {
            prime.PB(i);
          }
        }
          int z=prime.size();


            // for(auto i:prime)
            // {
            //   cerr<<i<<" ";
            // }
            //     //nt x=6;

          //cout<<endl<<prime[lower_bound(prime.begin(),prime.end(),x)-prime.begin()]-x<<endl;




      int n;
      cin>>n;
      int arr[n];
      for(int i=0;i<n;i++)
      {
        cin>>arr[i];

      }
        sort(arr,arr+n);
        int waitingtime=0;
        int ans=0;
      for(int i=0;i<n;i++)
      {
        if(arr[i]>=waitingtime)
        {
          ans++;
          waitingtime+=arr[i];
          //trace2(waitingtime,ans);
        }
      }
      cout<<ans;


    return 0;
    
      }
    
    
  

