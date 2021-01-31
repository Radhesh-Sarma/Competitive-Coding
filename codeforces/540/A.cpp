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
string a,b;
cin>>a>>b;

int ans=0;

for(int i=0;i<n;i++)
{
	if(a[i]!=b[i])
	{
		int temp= abs(a[i]-b[i]);
		if(temp>5)
		{
			temp=10-temp;

			ans+= temp;
		}
		else
		{
			ans+=temp;
			
		}

	}

	//cout<< abs(a[i]-b[i])<<endl;

}






cout<<ans;

#ifndef ONLINE_JUDGE
	cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n\n";
#endif
	
return 0;


}