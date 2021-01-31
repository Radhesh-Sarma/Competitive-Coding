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
#define trace1(x)                cerr<<#x<<": "<<x<<endl
#define trace2(x, y)             cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
#define trace3(x, y, z)          cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
#define trace4(a, b, c, d)       cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl
#define trace5(a, b, c, d, e)    cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl
#define trace6(a, b, c, d, e, f) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<endl
#define cases int testcases;cin>>testcases; while(testcases--)
#define MOD 1000000009
int fastpow(int base, int exp) {int res=1;while(exp>0) {if(exp%2==1) res=(res*base)%MOD;base=(base*base)%MOD;exp/=2;}return res%MOD;}


 bool isprime(int n)
 {
 	if(n<=1)
 	{
 		return false;
 	}
 	for(int i=2;i<=sqrt(n);i++)
 	{
 		if(n%i==0)
 		{
 			return false;
 		}
 	}
 	return true;
 }
 int smallestprimediv(int n)
 {
 	for(int i=3;i<=sqrt(n);i++)
 		{
 			if(isprime(i)&& n%i==0)
 			{
 				return i;
 			}
 		}
 		

 		return 1;

 		

 }

 int fun(int n)
 {
 	if(isprime(n))
 	{
 		return 1;
 	}
 	else if(n%2==0)
 	{
 		return n/2;
 	}
 	else  	{
 		int d=smallestprimediv(n);
 		return 1 + fun(n-d);
 	}
 }
int32_t main()
{
	IOS
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif


int n;
cin>>n;
cout<<fun(n);




return 0;


}
