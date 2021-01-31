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



bool customsort(const pair<string,int> &a,const pair<string,int> &b)
{
 

      if(a.f!=b.f)
      {
         return a.f<b.f;
      }

      return a.s>b.s;
   
}
int32_t main()
{
  IOS
  


    

      int n;
      cin>>n;

      vector<pair<string,int>>v,v2;
      for(int i=0;i<n;i++)
      {

         string s;
         cin>>s;
         int x;
         cin>>x;
         v.PB(MP(s,x));
      } 

         v2=v;



      sort(v.begin(),v.end(),customsort);

          


         for(auto i:v)
         {
               int ans=0;

            for(auto j:v2)
            {  
                     ans++;
               if(j==i)
               {
                     cout<<ans<<endl;
               }
            }
         }

return 0;
}  
