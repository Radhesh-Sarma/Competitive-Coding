#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
map<int,int>mp;
int ans=0;
int32_t main()
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
 #endif
IOS
int n;
cin>>n;
int arr[n];

for(int i=0;i<n;i++)
{
	cin>>arr[i];
	mp[arr[i]]++;
}



for(auto i:mp)
	ans=max(ans,i.second);


cout<<ans;

#ifndef ONLINE_JUDGE
	cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n\n";
#endif
return 0;
}