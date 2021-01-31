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
cin.ignore();
getline(cin,s);

unordered_set<char> ch;

for(int i=0;i<s.length();i++)
{
	if(s[i]>='a'&&s[i]<='z')
	{
		ch.insert(s[i]);
	}
}

cout<<ch.size();
#ifndef ONLINE_JUDGE
	cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n\n";
#endif
	
return 0;


}