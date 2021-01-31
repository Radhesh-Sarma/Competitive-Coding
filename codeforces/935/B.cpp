//AUTHOR:Radhesh Sarrma
//INSTITUTION:BITS Pilani Hyderaarr2d Campus
#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define SQ(a) (a)*(a)
#define F first
#define S second
#define MP make_pair
#define int long long
#define PB push_back


int32_t main()
{


#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
 #endif
IOS

int n;
cin>>n;
int arr[n+1];

int x=0,y=0;
int ans=0;
string s;
cin>>s;

arr[0]=0;

for(int i=1;i<=n;i++)
{



	if(s[i-1]=='R')
	{
		arr[i]=arr[i-1]+1;
	}
	else if(s[i-1]=='U')
	{
		arr[i]=arr[i-1]-1;
	}

//cout<<arr[i]<<endl;

}


for(int i=1;i<=n-2;i++)
{
	if(arr[i]<0 && arr[i+1]==0 && arr[i+2]>0)
	{
		ans++;
	}
		if(arr[i]>0 && arr[i+1]==0 && arr[i+2]<0)
	{
		ans++;
	}
}
cout<<ans;



	


#ifndef ONLINE_JUDGE
	cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n\n";
#endif
	
return 0;


}




 