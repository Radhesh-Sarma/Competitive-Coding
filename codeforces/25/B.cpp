#include<bits/stdc++.h>
using namespace std;
#define ios ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
#define trace1(x)                cerr<<#x<<": "<<x<<endl
#define trace2(x, y)             cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
#define trace3(x, y, z)          cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
#define trace4(a, b, c, d)       cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl
#define trace5(a, b, c, d, e)    cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl
#define trace6(a, b, c, d, e, f) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<endl
int gcd(int a, int b) 
{ 
	if(a==b)
	{
		return a;
	}
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
} 

int32_t main()
{
	ios

#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif


int n;
cin>>n;
string s;
cin>>s;

if(n==2||n==3)
{
	cout<<s;
}
else if(n%2==0)
{
	for(int i=0;i<n;i++)
	{
		cout<<s[i];
		if(i%2==1&&i!=(n-1))
		{
			cout<<"-";
		}

	}

}
else if(n%3==0)
{
	for(int i=0;i<n;i++)
	{
		cout<<s[i];
		if((i+1)%3==0&&i!=(n-1))
		{
			cout<<"-";
		}

	}

}
else 
{
	for(int i=0;i<n-3;i++)
	{
		cout<<s[i];
		if(i%2==1&&i!=(n-1))
		{
			cout<<"-";
		}

	}
	cout<<s[n-3]<<s[n-2]<<s[n-1];


}

return 0;

}