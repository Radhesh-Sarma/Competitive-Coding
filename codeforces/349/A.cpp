#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define SQ(a) (a)*(a)
#define f first
#define s second
#define PB push_back
#define MP make_pair
#define int long long
#define db long double
#define all(a) a.begin(), a.end()
#define Max(x,y,z) max(x,max(y,z))
#define Min(x,y,z) min(x,min(y,z))
#define trace1(x)                cerr<<#x<<": "<<x<<endl
#define trace2(x, y)             cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
#define trace3(x, y, z)          cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
#define trace4(a, b, c, d)       cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl
#define trace5(a, b, c, d, e)    cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl
#define trace6(a, b, c, d, e, f) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<endl
int32_t main()
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
 #endif

int n;
cin>>n;
int arr[n];
int hash[3]={0};

for(int i=0;i<n;i++)
{
	cin>>arr[i];
	if(arr[i]==25)
	{
		hash[0]++;
	}
	else if(arr[i]==50 && hash[0]>=1)
	{
		hash[1]++;
		hash[0]--;
	}
	else if(arr[i]==100)
	{
		if(hash[1]>=1 && hash[0]>=1)
		{
			hash[2]++;
			hash[1]--;
			hash[0]--;
		}
		else if(hash[0]>=3)
		{
			hash[0]=hash[0]-3;
			hash[2]++;
		}
		else
		{
			cout<<"NO";
			return 0;

		}

	}
	else
	{
		cout<<"NO";
		return 0;
	}
	
}
cout<<"YES";


#ifdef ONLINE_JUDGE
	cerr << "\nTime elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
#endif
	
	

return 0;


}


