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

        

      int n,t;
      cin>>n>>t;

      int s[n],d[n];

      for(int i=0;i<n;i++)
      {
        cin>>s[i]>>d[i];
      }


      int ans1=1e9;
      int ans2=1;


        int a;
      for(int i=0;i<n;i++)
      {
         if(s[i]>=t)
        {

            a=s[i];
          if(s[i]-t<ans1)
          {
              ans1=s[i]-t;
              ans2=i+1;
          }
          
        }
      else
      {

          int x=(t-s[i])/d[i] + bool((t-s[i])%d[i]);

          a=s[i]+d[i]*x;  
          
          if(a<s[i])
          {
            a+=d[i];
          }

          if(a-t<ans1)
          {
            ans1=a-t;
            ans2=i+1;
          }

         

      }

       trace1(a);
      }

        cout<<ans2;


    return 0;
    
      
}

    
  

   