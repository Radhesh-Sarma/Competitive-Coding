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

#define MOD 1000000007


int32_t main()
{


#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
 #endif
IOS


	const int N=(int)2e5+1;

	int n,m,s=0,c,d;

	cin>>n>>m;

	int arr[N+1],t[N+1],ri,r[N+1],a,b,arr2[N+1];

	for(int i=0;i<n;i++)
	{

		cin>>arr[i];
	}


	while(m--)
	{
		cin>>a>>b;

		while(s>0&&b>r[s-1])
		s--;
		t[s]=a,r[s]=b,++s;
	}
	
	c=0,d=r[0],r[s]=0,++s;
	
	for(int i=0;i<r[0];i++)
	{
		arr2[i]=arr[i];
	}

	sort(arr2,arr2+d);
	
	for(int i=1;i<s;++i)
    {
	for(int j=r[i-1];j>r[i];--j)
	{
		arr[j-1]=(t[i-1]==1)?arr2[--d]:arr2[c++];
	}

    }

	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}



#ifndef ONLINE_JUDGE
	cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n\n";
#endif
	
return 0;


}




