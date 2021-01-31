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
int mod = 1e9+7;
int m=1000000;

int32_t main()
{
	IOS
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif

cerr<<endl;
int n;
cin>>n;
if(n==1)
{
	cout<<1;
	return 0;

}

vector<int> ans;
ans.PB(1);
for(int i=2;i<=sqrt(n);i++)
{

if(n%i==0)
{


 int no=((n-1)/i + 1);
int a=((no)*(2+(no-1)*i))/2;


ans.PB(a);

if((n/i)!=i)
{

	int k=(n/i);

 int no=((n-1)/k + 1);
int a=((no)*(2+(no-1)*k))/2;

//trace2(i,a);

ans.PB(a);

}


}


}

ans.PB(((n)*(n+1)/2));

sort(ans.begin(),ans.end());
for(auto i:ans)
{
	cout<<i<<" ";
}
return 0;
}