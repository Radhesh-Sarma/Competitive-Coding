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


int fun(vector<int> &v)
{
	sort(v.begin(),v.end());

	if(v.size()%2 == 1)
	{
		int ans = 0;
		int m = v[(v.size()/2)];

		for(int i = 0; i < v.size(); i++)
		{
			ans += abs(v[i]-m);
		}
		return ans;
	}
	else
	{
		int ans1 = 0,ans2 = 0;
		int m1 = v[v.size()/2];
		int m2 = v[v.size()/2 - 1];
		for(int i = 0; i < v.size(); i++)
		{
			ans1 += abs(v[i]-m1);
			ans2 += abs(v[i]-m2);
		}
		return min(ans1,ans2);
	}
}
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

   map<int, int> mp;	

   int xorr = 0;


   for(int i = 0; i < n; i++)
   {
   	cin >> v[i];
   	xorr = xorr xor v[i];
   }

   for(int i = 0; i < n; i++)
   {
   	cout << (xorr xor v[i]) << " ";
   }




    return 0;
}
