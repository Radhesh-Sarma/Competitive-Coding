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
int sumofdigits(int n)
{
    int ans=0;
    while(n)
    {
        
        ans+=(n%10);
        n/=10;
    }
    return ans;
}
int32_t main()
{
IOS
int k;
cin>>k;

set<int> s;

int i=max(k-82,1LL);

for(;i<=k;i++)
{
    if((i+sumofdigits(i)==k))
    {
        s.insert(i);
    }
}
cout<<s.size()<<endl;

for(auto i:s)
{
    cout<<i<<endl;
}
    return 0;
    
}