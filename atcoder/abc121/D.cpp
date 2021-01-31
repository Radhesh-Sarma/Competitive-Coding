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
bool sortbysec(const pair<int,int> &a, 
              const pair<int,int> &b) 
{ 
      

    return (a.first<b.first); 
} 

int32_t main()
{
IOS


     
     
          int x,y;
          cin>>x>>y;
            if(x>0)
                x--;
          int ans1,ans2;
          if(x%4==0)
          {
            ans1=x;
          
          }
          else if(x%4==1)
          {
            ans1=1;

          }
          else if(x%4==2)
          {
            ans1=(x/4)*4+3;
          }
          else
          {
              ans1=0;
          }


          if(y%4==0)
          {
            ans2=y;
          
          }
          else if(y%4==1)
          {
            ans2=1;

          }
          else if(y%4==2)
          {
            ans2=(y/4)*4+3;
          }
          else
          {
              ans2=0;
          }
            cout<<(ans1^ans2);

    return 0;
    }
    
    
  

  