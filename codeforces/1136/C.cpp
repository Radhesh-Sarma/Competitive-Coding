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
    
    vector<int>v1[1000],v2[1000];
      for(int i=0;i<n;i++)
      {
        for(int j=0;j<m;j++)
        {
          int x;
          cin>>x;

          v1[i+j].PB(x);
        }
      }
      int a=0;
        for(int i=0;i<n;i++)
      {
        for(int j=0;j<m;j++)
        {
          int x;
          cin>>x;

          v2[i+j].PB(x);
          a=max(a,i+j);
        }
      }


      for(int i=0;i<=a;i++)
      {
        sort(v1[i].begin(),v1[i].end());
        sort(v2[i].begin(),v2[i].end());
        if(v1[i]!=v2[i])
        {
         
          cout<<"NO";
          return 0;
        }
      }
      cout<<"YES";
}
