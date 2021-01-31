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



int32_t main()
{


    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    IOS


    int n,m;
    cin >> n >> m;

    vector<pair<int, int>> v(m+1);

    for(int i =1 ; i <= m; i++)
    {
    	cin >> v[i].first >> v[i].second;
    }

    int k;
    cin >> k;


    vector<pair<int, int>> v2(k+1);

    for(int i = 1; i <= k; i++)
    {
    	cin >> v2[i].first >> v2[i].second;
    }




    int ans = 0;

    for(int mask = 0; mask < (1 << k); mask++)
    {
    	set<int> v1;

	for(int i = 0; i < k; i++) {
		if(mask & (1 << i))
		{
			v1.insert(v2[i+1].first);
		}
		else
		{
			v1.insert(v2[i+1].second);
		}
	}

	int ans1 = 0;
	for(int i = 1; i <= m; i++)
	{
		if(v1.count(v[i].first) and v1.count(v[i].second))ans1++;
	}	

	ans = max(ans,ans1);

}

	cout << ans;
    return 0;
}
