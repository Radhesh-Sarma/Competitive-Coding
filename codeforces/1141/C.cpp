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


      int n;
       cin>>n;
       int q[n-1];

       for(int i=0;i<n-1;i++)
       {
          cin>>q[i];
       }

      vector<int> v;
      v.PB(0);
      int s=0;
          int mini=1e9;
        for(int i=0;i<n-1;i++)
      {
        s+=q[i];
        mini=min(mini,s);
        v.PB(s);
      }
        
      if(mini<1)
      {
        int a=1-mini;

      for(int i=0;i<n;i++)
      {
        v[i]+=a;
      }


      }
      else
      {
        for(int i=0;i<n;i++)
        {
          v[i]+=1;
        }
      }


      int v2[n];
      for(int i=0;i<n;i++)
      {
        v2[i]=v[i];
      }
      sort(v2,v2+n);


      for(int i=0;i<n;i++)
      {
        if(v2[i]!=(i+1))
        {cout<<-1;

          return 0;
        }
      }

      for(auto i:v)
      {
        cout<<i<<" ";
      }




    return 0;
    
      
    }
    
  

