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


int32_t main()
{
	IOS

#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif


int n;
cin>>n;
int sum=0;
int arr[n];
for(int i=0;i<n;i++)
{
	cin>>arr[i];
	sum+=arr[i];
}

int done[n];
fill(done,done+n,0);
int m=(2*sum)/n;
int k=n/2;
int z=0;
while(z<k)
{

	for(int i=0;i<n;i++)
	{	
		if(done[i]==false)
		{


		for(int j=0;j<n;j++)
		{
			if(i!=j)
			{


			if(done[j]==false)
			{
				if((arr[i]+arr[j])==m)
				{
					cout<<i+1<<" "<<j+1<<endl;
					
					done[i]=true;
					done[j]=true;

					goto ab;


				}

			}

		}
		}

		}

	}
	ab:
	z++;

}



return 0;

}