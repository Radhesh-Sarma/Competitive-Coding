#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#pragma GCC target("sse2")
#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl "\n"
#define pb push_back
#define mp make_pair
int32_t main()
{
IOS

int n,k;
cin>>n>>k;
int a[n],b[n];
for(int i=0;i<n;i++)
{
    cin>>a[i];
}

for(int i=0;i<n;i++)
{
    cin>>b[i];
}

vector<pair<int,int>> v;
for(int i=0;i<n;i++)
{
    v.pb(mp((a[i]-b[i]),i));
}

sort(v.begin(),v.end());

int ans=0;
for(int i=0;i<k;i++)
{
    int c=v[i].second;
    ans+=a[c];
    
}

for(int i=k;i<n;i++)
{
    int c=v[i].second;
    ans+=min(a[c],b[c]);
}
cout<<ans;

    return 0;
}