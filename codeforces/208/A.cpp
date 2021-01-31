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

string s;
cin>>s;
bool ok=false;

for(int i=0;i<s.length();i++)
{
	if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B')
	{
		i=i+2;
		ok=false;

	}
	else
	{
		cout<<s[i];
		goto ab;

		ok==true;
	}
	if(ok==true)
	{
		ab:
		if(s[i+1]=='W'&&s[i+2]=='U'&&s[i+3]=='B')
		{
			cout<<" ";

		}	
		
	}
}
#ifndef ONLINE_JUDGE
	cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n\n";
#endif
	
return 0;


}