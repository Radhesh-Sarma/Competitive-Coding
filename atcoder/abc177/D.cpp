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


	int parent[200005];
	int sz[200005];

	void make_set(int n)
	{
		for(int i = 0; i <= n; i++)
		{
			parent[i] = i;
			sz[i] = 1;
		}
	}

	int getParent(int x)
	{
		if(x == parent[x])
			return x;
		return parent[x] = getParent(parent[x]);
	}

	void merge(int u, int v)
	{
		u = getParent(u);
		v = getParent(v);
		if(u == v)return;
		sz[u] += sz[v];
		sz[v] = sz[u];
		parent[v] = u;
		return;
	}

int32_t main()
{


    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    IOS



    int n,m;
    cin >> n >> m;


    make_set(n+1);

    for(int i =1; i <= m; i++)
    {
    	int x,y;
    	cin >> x >> y;
    	merge(x,y);

    }

    int ans = 1;

    for(int i = 1; i <= n; i++)
    {

    	int p = getParent(i);
    	//trace3(i,p,sz[p]);
    	ans = max(ans,sz[p]);
    }

    cout << ans;

    return 0;
}
