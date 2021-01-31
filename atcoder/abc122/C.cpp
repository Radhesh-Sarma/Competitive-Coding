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


      int n,q;
      cin>>n>>q;
      string s;
      cin>>s;
      int answer[s.length()]={0};

          for(int i=0;i<s.length()-1;i++)
          {
            if((s[i]=='A')&&(s[i+1]=='C'))
            {
              answer[i+1]++;
            }
          }
            
          for(int i=1;i<s.length();i++)
          {
            answer[i]+=answer[i-1];
          }
        while(q--)
        {
          int x,y;
          cin>>x>>y;
          cout<<answer[y-1]-answer[x-1]<<endl;

        }

    return 0;
    }
    
    
  

  