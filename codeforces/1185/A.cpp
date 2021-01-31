#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
#define all(v) v.begin(),v.end()
#define f first
#define s second
#define PB push_back
#define MP make_pair
#define db long double
#define trace1(x)                cerr<<#x<<": "<<x<<endl
#define trace2(x, y)             cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
#define trace3(x, y, z)          cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
#define trace4(a, b, c, d)       cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl
#define trace5(a, b, c, d, e)    cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl
#define trace6(a, b, c, d, e, f) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<endl
#define cases int testcases;cin>>testcases; while(testcases--)
#define mod 1000000007


int32_t main()
{
  
    IOS

  #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
    #endif



    int a,b,c,d;
    cin>>a>>b>>c>>d;
    vector<int> v;
    
    v.PB(a);
    v.PB(b);
    v.PB(c);

    sort(v.begin(),v.end());
    int ans=0;
    
    if(v[1]-v[0]<d)
    {
        ans+=(d-(v[1]-v[0]));

    }
    if(v[2]-v[1]<d)
    {
        ans+=(d-(v[2]-v[1]));
    }
    
    cout<<ans;


    return 0;


   
}   