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
#define m 1000000007



int32_t main()
{
IOS
//#ifndef ONLINE_JUDGE
//freopen("input.txt", "r", stdin);
//freopen("output.txt", "w", stdout);
//#endif


int n;
cin>>n;
int y=n;
int sum=0;
int digit;
while(y)
{
digit=y%10;
sum+=digit;


	y=y/10;
}


if(n%sum==0)
{
	cout<<"Yes";
}
else
{
	cout<<"No";
}


//#ifndef ONLINE_JUDGE
	//cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n\n";
//#endif

return 0;

}
