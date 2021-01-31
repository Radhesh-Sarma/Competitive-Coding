//AUTHOR:Radhesh Sarrma
//INSTITUTION:BITS Pilani Hyderabad Campus

#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define SQ(a) (a)*(a)
#define F first
#define S second
#define MP make_pair
#define int long long
#define db double
int32_t main()
{



#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
 #endif
IOS



int n,k;
cin>>n>>k;
int arr[n];
for(int i=0;i<n;i++)
{
	cin>>arr[i];
}


int ans=2;

for(int i=0;i<n-1;i++)
{

	if((arr[i+1]-arr[i])<(2*k))
	{
		continue;
	}

	else if((arr[i+1]-arr[i])==(2*k))
	{
		ans++;
	}
	else 
	{
		ans=ans+2;
	}

	

}


cout<<ans;

#ifndef ONLINE_JUDGE
	cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n\n";
#endif
	
return 0;


}