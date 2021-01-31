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
#define MOD 1000000009
int32_t gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int32_t main()
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif


int n;
cin>>n;
int arr[n+1];
arr[0]=0;
for(int i=1;i<n;i++)
{
	arr[i]=arr[i-1]+i;

	if(gcd(arr[i],n*(n+1)/2 - arr[i])>1)
	{
		cout<<"Yes"<<endl;
		cout<<i<<" ";
		for(int j=1;j<=i;j++)
		{
			cout<<j<<" ";
		}
		cout<<endl<<n-i<<" ";
		for(int j=i+1;j<=n;j++)
		{
			cout<<j<<" ";
		}
		return 0;




	}

}
cout<<"No";




#ifdef ONLINE_JUDGE
cerr << "\nTime elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
#endif
	
	

return 0;


}