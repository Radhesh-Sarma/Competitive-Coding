#include <bits/stdc++.h>
using namespace std;
  #define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  #define int long long
  #define endl "\n"
  #define all(v) v.begin(),v.end()
  #define double long double
  #define trace1(x)                cerr<<#x<<": "<<x<<endl
  #define trace2(x, y)             cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
  #define trace3(x, y, z)          cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
  #define trace4(a, b, c, d)       cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl
  #define trace5(a, b, c, d, e)    cerr<<#a<<": "<<a<<" | "<<#b<< ": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl
  #define trace6(a, b, c, d, e, f) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<endl
  #define cases int testcases;cin>>testcases; while(testcases--)
  const int N = 200005;

const int INF = (1LL << 62) - 1;

int32_t main()
{


    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    IOS

    int n;
    cin >> n;

    vector<int> v(n);

    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }


    int sum = 0;
    vector<int> premax(n,-INF);
    vector<int> presum(n,-INF);


    for(int i = 0; i < n; i++)
    {
        if(i == 0)presum[i] = v[i];
        else presum[i] = presum[i-1] + v[i];

        sum += v[i];

        if(i == 0)premax[i] = v[0];
        else premax[i] = max(premax[i-1],sum);
    }


    // for(auto i : premax)
    // {
    //     cout << i << " ";
    
    // }
    // cout << endl;


    // for(auto i : presum)
    // {
    //     cout << i << " ";
    
    // }

    // cout << endl;

    int ans = 0;
    int pos = 0;

    for(int i = 0; i < n; i++)
    {
        // trace3(pos,premax[i],presum[i]);
        ans = max(ans,pos + premax[i]);
        pos += presum[i];
    }


    cout << ans;
    return 0;
}
