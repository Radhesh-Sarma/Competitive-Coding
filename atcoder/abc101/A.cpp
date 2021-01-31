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


string s;
cin>>s;
int ans=0;

for(int i=0;i<s.length();i++)
{
	if(s[i]=='+')
	{
		ans++;
	}
	else if(s[i]=='-')
	{
		ans--;
	}
}




cout<<ans;



//#ifndef ONLINE_JUDGE
	//cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n\n";
//#endif

return 0;

}
