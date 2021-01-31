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



int32_t main()
{
IOS
        #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);
       freopen("output.txt", "w", stdout);
        #endif



       int n,t;
       cin>>n>>t;
       int arr[n];
       int s=0;
       int a=1e12;
       for(int i=0;i<n;i++)
       {
        cin>>arr[i];
        s+=arr[i];
        a=min(a,arr[i]);
       }
       int ans=(t/s)*n;
        t=t%s;

        trace1(t);


          while(t>=a)
          {


              int ctr=0;
              s=0;
              int k=t;

          for(int i=0;i<n;i++)
          {
              if(k>=arr[i])
              {
                s+=arr[i];
                k-=arr[i];
                  ctr++;
              }
              
          }

             
            ans+=(t/s)*ctr;
            t=t%s;


            
          }
       
       cout<<ans;



    return 0;
    
      
    }
    
    
  

  