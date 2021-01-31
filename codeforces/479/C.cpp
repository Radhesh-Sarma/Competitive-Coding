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
#define cases int testcases;cin>>testcases; while(testcases--)
#define trace1(x)                cerr<<#x<<": "<<x<<endl
#define trace2(x, y)             cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
#define trace3(x, y, z)          cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
#define trace4(a, b, c, d)       cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl
#define trace5(a, b, c, d, e)    cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl
#define trace6(a, b, c, d, e, f) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<endl
#define MOD 1000000007

int32_t main()
{
   
IOS
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
 #endif

IOS   
int n;
cin>>n;
vector<pair<int,int>> v;
while(n--)
{
    int x,y;
    cin>>x>>y;
    v.PB(MP(x,y));
}

sort(v.begin(),v.end());
auto i=v.begin();
int ans=min(i->first,i->second);

for(int i=1;i<v.size();i++)
{
    if(ans<=v[i].second &&ans<=v[i].first)
    {
        if(v[i].first<v[i].second)
        {
            ans=v[i].first;
            
        }
        else
        {
            ans=v[i].second;
        }
    }
    else if(ans<=v[i].first)
    {
        ans=v[i].first;
    }
    else if(ans<=v[i].second)
    {
        ans=v[i].second;
    }
}
cout<<ans;




#ifdef ONLINE_JUDGE
	cerr<<"\nTime elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
#endif
	

return 0;


}