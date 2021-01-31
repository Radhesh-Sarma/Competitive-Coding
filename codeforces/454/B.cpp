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

bool sortbysec(const pair<int,int> &a, 
              const pair<int,int> &b) 
{ 
    return (abs(a.f - a.s) > abs(b.f - b.s)); 
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

vector<int> v;



for(int i=0;i<n;i++)
{
	int x;
	cin>>x;
	v.PB(x);
}



vector<int> v1,v2;
v1=v;
sort(v1.begin(),v1.end());
v2=v1;
reverse(v2.begin(),v2.end());


if(v==v1)
{
	
	cout<<0;
	return 0;

}
else if(v==v2)
{

	if(n==2)
		cout<<n-1;	
	else
	{
		cout<<-1;
	}
	return 0;
	
}
else
{
	

	int c=0;
	int d;

	for(int i=0;i<n-1;i++)
	{
		if(v[i]>v[i+1])
		{
			c++;
			d=i;
		}
	}
	if(c!=1)
	{
		cout<<-1;
		return 0;
	}
	else if(v[n-1]<=v[0])
	{
		cout<<n-d-1;
		return 0;


	}
	else
	{
		cout<<-1;
		return 0;

	}

}

return 0;


}
