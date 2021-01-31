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

int dp[n+1];
dp[0]=1;
dp[1]=0;
dp[2]=3;
int x=9;


for(int i=3;i<=n;i++)
{
    
    dp[i]=(x-dp[i-1]+1000000000+7)%mod;
    x=(x*3)%mod;
    
}

cout<<dp[n];

    return 0;
    
}