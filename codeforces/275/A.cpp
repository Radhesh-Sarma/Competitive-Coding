#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
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

int main()
{
	IOS
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif


int arr[3][3];
for(int i=0;i<3;i++)
{
	for(int j=0;j<3;j++)
	{
		cin>>arr[i][j];
		arr[i][j]=arr[i][j]%2;

	}
}


int n=5;

int ans[5][5];


for(int i=0;i<n;i++)
{
	for(int j=0;j<n;j++)
	{
		ans[i][j]=1;
	}
}

for(int i=1;i<=3;i++)
{
	for(int j=1;j<=3;j++)
	{
		if(arr[i-1][j-1]==1)
		{
			if(ans[i][j]==1)
			{
				ans[i][j]=0;
			}
			else
			{
				ans[i][j]=1;

			}

			if(ans[i+1][j]==1)
			{
				ans[i+1][j]=0;
			}
			else
			{
				ans[i+1][j]=1;

			}

			if(ans[i-1][j]==1)
			{
				ans[i-1][j]=0;
			}
			else
			{
				ans[i-1][j]=1;

			}

				if(ans[i][j+1]==1)
			{
				ans[i][j+1]=0;
			}
			else
			{
				ans[i][j+1]=1;

			}

				if(ans[i][j-1]==1)
			{
				ans[i][j-1]=0;
			}
			else
			{
				ans[i][j-1]=1;

			}

				}	


	}


}




for(int i=1;i<=3;i++)
{
	for(int j=1;j<=3;j++)
	{
		cout<<ans[i][j];
	}
	cout<<endl;
	
}


return 0;
}

