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
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
int n;
cin>>n;

// if(n==1)
// {
// cout<<0<<" "<<1;
// return 0;
// }
// else if(n==2)
// {
// 	cout<<0<<" "<<2;
// }
// else if(n>=3&&n<=5)
// {
// 	cout<<n-2<<" "<<n;
// }
// else if(n==6)
// {
// 	cout<<1<<" "<<2;
// }

int ans1=0,ans2=0;

int l=(n/7)*7;

ans1+=((l/7)*2);
ans2+=((l/7)*2);

int k=n%7;

if(k==1||k==2)
{
	cout<<ans1<<" "<<ans2+k;
}
else if(k>=3&&k<=5)
{
	cout<<ans1<<" "<<ans1+2;
}
else if(k==6)
{
	cout<<ans1+1<<" "<<ans1+2;
}
else
{
	cout<<ans1<<" "<<ans2;

}

return 0;

}