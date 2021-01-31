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
int power(int a,int b,int m) {
      a%=m;
    int res=1;
    while (b>0) 
    {
        if (b&1)
            res=((res%m)*(a%m))%m;
        a =(a%m)*(a%m);
        b>>=1;
    }
    return res%m;
}
int32_t main()
{
IOS
        #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);
       freopen("output.txt", "w", stdout);
        #endif


        int x,k;
        cin>>x>>k;
                if(k==0)
                {
                  cout<<(2*x)%mod;
                }
                else if(x==0)
                {
                  cout<<0;
                }
              else if(x!=1)
                  cout<<(mod+(power(2,k+1,mod))*(x%mod)- (power(2,k,mod))+1)%mod;
                else
                {
                  cout<<power(2,k,mod)%mod+1;

                }
     



    return 0;
    
      
    }
    
    
  

  