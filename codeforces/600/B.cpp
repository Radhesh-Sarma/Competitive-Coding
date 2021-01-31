#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl "\n"
#define PB push_back
#define MP make_pair
#define mod 1000000007


int32_t main()
{
IOS

int n,m;
cin>>n>>m;
int arr1[n];
for(int i=0;i<n;i++)
{
    cin>>arr1[i];
}

sort(arr1,arr1+n);

while(m--)
{
    int x;
    cin>>x;
    cout<<upper_bound(arr1,arr1+n+1,x)-arr1<<" ";
}
    return 0;
    
}