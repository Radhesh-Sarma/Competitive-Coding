#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define f first
#define s second

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
        
        int n,m;
        cin>>n>>m;


        int arr1[n],arr2[m];
        int pre1[n],pre2[m];
        for(int i=0;i<n;i++)
        {
          cin>>arr1[i];
          if(i==0)
          {
            pre1[i]=arr1[i];
          }
          else  
          {
            pre1[i]=pre1[i-1]+arr1[i];
          }
        }

        for(int i=0;i<m;i++)
        {
          cin>>arr2[i];
          if(i==0)
          {
            pre2[i]=arr2[i];
          }
          else
          {
            pre2[i]=pre2[i-1]+arr2[i];
          }
         }





          int ans=0;
          for(int i=0;i<n;i++)
          {
            if(binary_search(pre2,pre2+m,pre1[i]))
            {
              ans++;
            }
          }

          cout<<ans;



    return 0;
    
      
}

    
  

   