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

int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}

int pre[n];
pre[0]=arr[0];
for(int i=1;i<n;i++)
{
    pre[i]=pre[i-1]+arr[i];
}

int m;
cin>>m;
while(m--)
{
    int x;
    cin>>x;
    cout<<lower_bound(pre,pre+n+1,x)-pre+1<<endl;
}
    return 0;
    
}