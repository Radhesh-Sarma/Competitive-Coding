#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl "\n"
#define PB push_back
#define MP make_pair
#define trace1(x)                cerr<<#x<<": "<<x<<endl
#define trace2(x, y)             cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
#define trace3(x, y, z)          cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
#define trace4(a, b, c, d)       cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl
int32_t main()
{
IOS

int x;
cin>>x;
if(x==1)
{
    cout<<1;
    return 0;
}
if(x==2)
{
    cout<<2;
    return 0;
}

int ans=2;
for(int i=2;i<=sqrt(x);i++)
{
    if(x%i==0)
    {
        if(i!=(x/i))
            {
                ans+=2;
                 
            }
            
        else
        
        {
            ans++;
        }
    }
}
cout<<ans;


	return 0;
}
