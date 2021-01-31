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
map<int,int>mp;


int32_t main()
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
 #endif
IOS
set<int> v;

for(int i=0;i<=33;i++)
{
	for(int j=0;j<=14;j++)
	{
		if(3*i+7*j <=100)
		{
			v.insert(3*i+7*j);
		}
		else
		{
			break;

		}
	}
}


int t;
cin>>t;
while(t--)
{


int n;
cin>>n;

if(v.find(n)!=v.end())
{
	cout<<"YES";
}
else
{
	cout<<"NO";
}

cout<<endl;

}

#ifndef ONLINE_JUDGE
	cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n\n";
#endif
	
return 0;


}