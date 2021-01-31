#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#pragma GCC target("sse2")
#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl "\n"
#define PB push_back
#define MP make_pair
int32_t main()
{
IOS
int n,m;
cin>>n>>m;
unordered_set<int> s;
while(n--)
{
    int x;
    cin>>x;
    s.insert(x);
    
}
vector<int> ans;
int sum=0;

for(int i=1;i<=1000000000;i++)
{
    if(s.count(i)==0)
    {
        if(sum+i<=m)
           {
               ans.PB(i);
               sum+=i;
           }
        else
        {
            break;
        }
            
    }
    
}

cout<<ans.size()<<endl;
for(auto i:ans)
{
    cout<<i<<" ";
}

    return 0;
    
}