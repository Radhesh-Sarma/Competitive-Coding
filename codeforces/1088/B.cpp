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
int mod = 1e9+7;
int binarysearch(int arr[],int l,int h,int val)
{

	if(arr[h]<val||arr[l]>val)
	{
		return -1;
	}
	int mid=l+(h-l)/2;

	if(arr[mid]==val)
	{
		return mid;
	}
	else if(arr[mid]>val)
	{
		return binarysearch(arr,0,mid-1,val);
	}
	else
	{
		return binarysearch(arr,mid+1,h,val);
	}
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


set<int> s;
s.insert(0);
while(n--)
{
	int x;
	cin>>x;

	s.insert(x);
}



int j=0;

auto i=s.begin();

while(j<k)
{
	if(next(i)!=s.end())
		{
			cout<< (*next(i)-*i)<<endl;
			i=next(i);
		}

	else
	{
		cout<<0<<endl;
	}

j++;
}
	

return 0;
}