//AUTHOR:Radhesh Sarrma
//INSTITUTION:BITS Pilani Hyderabad Campus
#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
int32_t main()
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
 #endif
IOS
int n;
cin>>n;
int arr[n][n]={0};



for(int i=0;i<n;i++)
{
	arr[i][0]=1;
	arr[0][i]=1;

}
int ans=1;

for(int i=1;i<n;i++)
{
	for(int j=1;j<n;j++)
	{
		

		arr[i][j]=arr[i-1][j]+arr[i][j-1];
		ans=max(ans,arr[i][j]);
	}


}

cout<<ans;



#ifndef ONLINE_JUDGE
	cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n\n";
#endif
	
return 0;


}