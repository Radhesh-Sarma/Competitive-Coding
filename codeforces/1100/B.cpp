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

      
      int n,m;
      cin>>n>>m;
      set<int> s;
      map<int,int>mp;

      for(int i=0;i<m;i++)
      { 
        int x;
        cin>>x;
        mp[x]++;
        s.insert(x);
        if(s.size()==n)
        {
            cout<<1;
              s.clear();
            for(int i=1;i<=n;i++)
            {
              mp[i]--;
              if(mp[i]!=0)
              {
                  s.insert(i);
              }
            }
        }
        else
        {
          cout<<0;
        }


      }  

    return 0;
    
      }
    
    
  

