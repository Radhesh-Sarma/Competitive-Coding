#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define SQ(a) (a)*(a)
#define f first
#define s second
#define int long long
#define PB push_back
#define MP make_pair
#define db long double
#define all(a) a.begin(), a.end()
#define cases int testcases;cin>>testcases; while(testcases--)
#define trace1(x)                cerr<<#x<<": "<<x<<endl
#define trace2(x, y)             cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
#define trace3(x, y, z)          cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
#define trace4(a, b, c, d)       cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl
#define trace5(a, b, c, d, e)    cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl
#define trace6(a, b, c, d, e, f) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<endl
#define MOD 1000000007

int mod(int n)
{
    int ans=n%MOD;
    if(ans<0)
    {
        ans+= MOD;
    }
    return ans;
    
}
int32_t main()
{
    int x,y,n;
    cin>>x>>y>>n;
    int ans=n%6;
    if(ans==1)
    {
        cout<<mod(x);
        
    }
    else if(ans==2)
    {
        cout<<mod(y);
    }
    else if(ans==3)
    {
        cout<<mod(mod(y)-mod(x));
    }
    else if(ans==4)
    {
        cout<<mod(-x);
        
    }
    else if(ans==5)
    {
        cout<<mod(-y);
    }
    else
    {
        cout<<mod(mod(x)-mod(y));
        
    }
    
    
return 0;


}