#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define SQ(a) (a)*(a)
#define f first
#define s second
#define PB push_back
#define MP make_pair
#define int long long
#define db long double
#define all(a) a.begin(), a.end()
#define Max(x,y,z) max(x,max(y,z))
#define Min(x,y,z) min(x,min(y,z))
#define trace1(x)                cerr<<#x<<": "<<x<<endl
#define trace2(x, y)             cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
#define trace3(x, y, z)          cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
#define trace4(a, b, c, d)       cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl
#define trace5(a, b, c, d, e)    cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl
#define trace6(a, b, c, d, e, f) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<endl



int32_t main()
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
 #endif


string a,b,c;
cin>>a>>b>>c;
map<char,char> s;

for(int i=0;i<a.length();i++)
{
	if(a[i]>='a'&&a[i]<='z')
	{
		s[a[i]]=b[i];
		s[a[i]-32]=b[i]-32;
	}
	else if(a[i]>='A'&&a[i]<='Z')
	{
		s[a[i]]=b[i];
		s[a[i]+32]=b[i]+32;
	}

}

for(int i=0;i<c.length();i++)
{
	if(s.find(c[i])==s.end())
	{
		cout<<c[i];
	}
	else
	{
		cout<<s[c[i]];
	}
	

}


#ifndef ONLINE_JUDGE
	cerr << "\n\nTime elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n\n";
#endif
	
return 0;


}