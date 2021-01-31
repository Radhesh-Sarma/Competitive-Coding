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

int k;
cin>>k;
vector<int> arr;
int sum=0;
for(int i=0;i<12;i++)
{
	int x;
	cin>>x;
	arr.PB(x);
	sum+=x;
}

if(sum<k)
{
	cout<<-1;
	return 0;
}
sort(arr.begin(),arr.end(),greater<int>());

int ans=0;
int ans1=0;
if(ans1>=k)
{
	cout<<ans1;
	return 0;

}
for(auto i:arr)
{
	ans+=i;
	if(ans>=k)
	{
		ans1++;
		cout<<ans1;
		return 0;
	}
	else
	{
		ans1++;
	}
}

if(ans1>=k)
{
	cout<<ans1;
	return 0;
	
}
else
{
cout<<-1;
}






return 0;

}