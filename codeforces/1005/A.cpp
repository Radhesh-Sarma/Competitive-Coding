#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define SQ(a) (a)*(a)
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define int long long
#define db long double


int32_t main()
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
 #endif
IOS

int n;
cin>>n;
int arr[n];
int ans1=0;

for(int i=0;i<n;i++)
{
	cin>>arr[i];
	if(arr[i]==1)
	{
		ans1++;
	}
}

vector<int>ans2;

for(int i=1;i<n;i++)
{
	if(arr[i]==1)
	{
		ans2.PB(arr[i-1]);
	}
}

ans2.PB(arr[n-1]);

cout<<ans1<<endl;

#define v ans2
for(auto i=v.begin();i!=v.end();i++)
{
	cout<<*i<<" ";

}




#ifndef ONLINE_JUDGE
	cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n\n";
#endif
	
return 0;


}