#include<bits/stdc++.h>
using namespace std;
#define ios ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"


int32_t main()
{
	ios

#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif



int arr[3];
cin>>arr[0]>>arr[1]>>arr[2];
sort(arr,arr+3);

if(arr[0]+arr[1]>arr[2])
{
	cout<<0;
}
else
{
	cout<<abs(arr[0]+arr[1]-arr[2])+1;

}


return 0;
}