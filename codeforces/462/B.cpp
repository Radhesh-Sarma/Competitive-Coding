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
#define MOD 1000000009
int fastpow(int base, int exp) {int res=1;while(exp>0) {if(exp%2==1) res=(res*base)%MOD;base=(base*base)%MOD;exp/=2;}return res%MOD;}

bool sortbysec(const pair<int,int> &a, 
              const pair<int,int> &b) 
{ 
    return (a.second > b.second); 
}



int32_t main()
{
	IOS
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif

int n,k;

cin>>n>>k;
string s;
cin>>s;
int arr[26]={0};
for(int i=0;i<s.length();i++)
{
	arr[s[i]-'A']++;
}

vector<pair<int,int>> v;

for(int i=0;i<26;i++)
{
	v.PB(MP(i,arr[i]));
}

sort(v.begin(),v.end(),sortbysec);


int ans=0;

for(int i=0;i<26;i++)
{
	if(v[i].s>=k)
	{
		ans+=k*k;
		cout<<ans;
		return 0;
	}
	else if(v[i].s<k)
	{
		ans+= (v[i].s * v[i].s);
		k-= v[i].s;

	}
}

cout<<ans;

return 0;


}
