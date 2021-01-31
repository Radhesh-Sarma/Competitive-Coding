#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl "\n"
#define SQ(a) (a)*(a)
#define f first
#define s second
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
int32_t main()
{
  IOS
  
    int arr1[200000],arr2[200000],b=1;
    int n;
    
	cin>>n;
	for(int i=0;i<n;i++)
	
	{
		cin>>arr1[i];
		arr2[i]=1;
	}
	
	for(int i=1;i<n;i++)
	{
		if(arr1[i]<=arr1[i-1]*2)
		{
		    arr2[i]=arr2[i-1]+1;
		}
		
		if(arr2[i]>b)
		{
		    b=arr2[i];
		}
		
	}
	cout<<b;


  
return 0;


}