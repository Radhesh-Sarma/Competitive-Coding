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


string s;
cin>>s;
bool ok=false;
int ans=-1;
int len=s.length();
for(int i=s.length()-1;i>=0;i--)
{
	if(s[i]=='2'||s[i]=='4'||s[i]=='6'||s[i]=='8'||s[i]=='0')
	{
			ok=true;
			break;

	}
}

if(ok==false)
	cout<<-1;
else
{

for(int i=0;i<s.length()-1;i++)
{

if(s[i]=='2'||s[i]=='4'||s[i]=='6'||s[i]=='8'||s[i]=='0')
{
	if(s[i]<s[len-1])
	{
		char temp=s[i];
		s[i]=s[len-1];
		s[len-1]=temp;
		cout<<s;
		return 0;

	}
}
}

for(int i=s.length()-1;i>=0;i--)
{

if(s[i]=='2'||s[i]=='4'||s[i]=='6'||s[i]=='8'||s[i]=='0')
{
	if(s[i]>s[len-1])
	{
		char temp=s[i];
		s[i]=s[len-1];
		s[len-1]=temp;
		cout<<s;
		return 0;
		
	}
}

}





}






#ifndef ONLINE_JUDGE
	cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n\n";
#endif
	
return 0;


}