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


int32_t main()
{
IOS


        


            int n,m,ta,tb,k;
            cin>>n>>m>>ta>>tb>>k;

            int arr1[n],arr2[m],arr3[m];


            for(int i=0;i<n;i++)
            {
              cin>>arr1[i];
              arr1[i]+=ta;
            } 




            for(int i=0;i<m;i++)
            {
              cin>>arr2[i];
              arr3[i]=arr2[i]+tb;
            }


           //  for(int i=0;i<n;i++)
           //  {
           //    cout<<arr1[i]<<" ";
           //  } 
           //    cout<<endl;

           // for(int i=0;i<m;i++)
           //  {
           //      cout<<arr2[i]<<" ";

           //  }


           //  trace1(k);
           //     cout<<endl;
              
           // for(int i=0;i<m;i++)
           //  {
           //      cout<<arr3[i]<<" ";

           //  }


           //    cout<<endl;

            if(k>=min(n,m))
            {
              cout<<-1;
              return 0;
            }

                int ans=-1;
              

            for(int i=0;i<=k;i++)
            {

              int l=lower_bound(arr2,arr2+m,arr1[i])-arr2;
              //trace3(i,l,arr2[l]);

              if(k-i>=m-l)
              {
                cout<<-1;
                return 0;
              }
              else
              {
               
                int j=l+k-i;
                 // trace4(l,j,i,k);
                ans=max(ans,arr3[j]);
              }
            }



            cout<<ans;



           return 0;
          
    
      
}

    
  

    