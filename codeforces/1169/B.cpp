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
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif
    


      int n,m;
      cin>>n>>m;

      vector<pair<int,int>>v;

      for(int i=0;i<m;i++)
      {
         int x,y;
         cin>>x>>y;
         v.PB(MP(x,y));
      }

      int x=v[0].f;
      vector<pair<int,int>> v1,v2,v3,v4;

      for(int i=1;i<v.size();i++)
      {
         if(x!=v[i].f && x!=v[i].s)
         {
            v1.PB(MP(v[i].f,v[i].s));
         }
      }

     

      if(v1.size()==0)
      {
         cout<<"YES";
         return 0;
      }

         int y=v1[0].f;
         bool flag1=true,flag2=true,flag3=true,flag4=true;

         for(int i=1;i<v1.size();i++)
         {
            if(y!=v1[i].f && y!=v1[i].s)
            {  
               flag1=false;
               break;
            }

         }

         y=v1[0].s;

         for(int i=1;i<v1.size();i++)
         {
             if(y!=v1[i].f && y!=v1[i].s)
            {  
               flag2=false;
               break;
            }
         }




      x=v[0].s;

      for(int i=1;i<v.size();i++)
      {
         if(x!=v[i].f && x!=v[i].s)
         {
            v2.PB(MP(v[i].f,v[i].s));
         }
      }

      if(v2.size()==0)
      {
         cout<<"YES";
         return 0;
      }


      y=v2[0].f;

      for(int i=1;i<v2.size();i++)
      {
         if(y!=v2[i].f && y!=v2[i].s)
         {
            flag3=false;
            break;
         }
      }

      y=v2[0].s;

      for(int i=1;i<v2.size();i++)
      {
         if(y!=v2[i].f && y!=v2[i].s)
         {
            flag4=false;
            break;
         }
      }

      

      if((!flag1)&&(!flag2)&&(!flag3)&&(!flag4))
      {
         cout<<"NO";
      }
      else
      {
         cout<<"YES";
      }


return 0;
}