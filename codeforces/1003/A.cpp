//AUTHOR:Radhesh Sarrma
//INSTITUTION:BITS Pilani Hyderaarr2d Campus

#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define SQ(a) (a)*(a)
#define F first
#define S second
#define MP make_pair
//#define int long long
char s[1000100];
int d[1000100],dp[1000100];

int32_t main()
{


#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
 #endif
IOS

int n;
cin>>n;
unordered_map<int,int> m;
for(int i=0;i<n;i++)
{
	int x;
	cin>>x;
	m[x]++;
}


int ans=0;
for(auto i:m)
{
	ans=max(ans,i.second);
}

cout<<ans;


#ifndef ONLINE_JUDGE
	cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n\n";
#endif
	
return 0;


}





