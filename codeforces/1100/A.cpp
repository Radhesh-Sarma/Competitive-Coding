#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#pragma GCC target("sse2")
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
bool sortbysec(const pair<int,int> &a, 
              const pair<int,int> &b) 
{ 
    return (a.second > b.second); 
} 

int32_t main()
{
	IOS
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif


int n,k;
cin>>n>>k;
int arr[n];
int sum=0;
int x=0;
int y=0;

for(int i=0;i<n;i++)
{
	cin>>arr[i];
	//sum+=arr[i];

	if(arr[i]==1)
	{
		x++;
	}
	else if(arr[i]==-1)
	{
		y++;
	}
}

//trace2(x,y);
int ans=-1;

for(int b=0;b<n;b++)
{

	
	int j=b%k;
	int p=x;
	int q=y;
	while(j<n)
	{
		if(arr[j]==1)
		{
			p--;
		}
		else
		{
			q--;
		}
		j+=k;
		//trace2(b,j);
	}
	

	ans=max(ans,abs(p-q));
	//trace4(b,ans,p,q);

}

cout<<ans;

return 0;
}