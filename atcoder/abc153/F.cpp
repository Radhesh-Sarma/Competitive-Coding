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
  #define double long double
  #define trace1(x)                cerr<<#x<<": "<<x<<endl
  #define trace2(x, y)             cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
  #define trace3(x, y, z)          cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
  #define trace4(a, b, c, d)       cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl
  #define trace5(a, b, c, d, e)    cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl
  #define trace6(a, b, c, d, e, f) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<endl
  #define cases int testcases;cin>>testcases; while(testcases--)
  #define MOD 998244353
  #define N 200005
  #define INF 1000000000000
  #define eps 1e-6
	vector<pair<int,int>> v;
	int g[N];
bool check(int x,int val)
{

		if(v[x].first > val)
		{
			return true;
		}

		return false;
}
int binarysearch(int low,int high,int val)
{
	while(low <= high)
	{
		int mid = low + (high-low)/2;
		if(check(mid,val))
		{
			high = mid - 1;
		}
		else
		{
			low = mid + 1;
		}
	}
	return low;
}
int32_t main()
{
  // #ifndef ONLINE_JUDGE
  //   freopen("input.txt", "r", stdin);
  //   freopen("output.txt", "w", stdout);
  //   #endif
    IOS


	int n,d,a;
	cin >> n >> d >> a;


	for(int i = 1; i <= n; i++)
	{
		int x, y;
		cin >> x >> y;
		v.PB({x,y});
	}

	sort(all(v));

	int ans = 0;
	for(int i = 0; i < n;i++)
		{
			if(i)g[i] += g[i-1];
			int x = v[i].second - a*g[i];
			if(x <= 0) continue;
			int k = max((x + a - 1)/a,0LL);
			ans += k;
			g[i] += k;
			int y = binarysearch(i,n,v[i].first+2*d);
				g[y]-=k;		
		}



		cout << ans;

	return 0;
}