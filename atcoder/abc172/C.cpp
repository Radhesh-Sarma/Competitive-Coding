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


int bs(vector<int> &v,int k)
{
	int low = 0;
	int high = v.size()-1;

	if(v[high] <= k)return v.size();
	if(v[0] > k)return 0;

	while(low <= high)
	{
		int mid = low + (high-low)/2;
		if(v[mid] <= k)
		{
			low = mid + 1;
		}
		else
		{
			high = mid -1;
		}
	}

	return low;
}
int32_t main()
{


    IOS


   	int n,m,k;
   	cin >> n >> m >> k;

   	vector<int> v1(n),v2(m);

   	for(int i = 0; i < n; i++)cin >> v1[i];
   	
   	for(int i = 0; i < m; i++)cin >> v2[i];
   	


   	for(int i = 1; i < n; i++)v1[i] += v1[i-1];

   	for(int i = 1; i < m; i++)v2[i] += v2[i-1];


 
	
	int ans = max(bs(v1,k),bs(v2,k));


	for(int i = 0; i < n; i++)
	{
		int sum = k-v1[i];
		if(sum < 0)break;
		ans = max(ans,bs(v2,sum) + i + 1);
	}


	for(int i = 0; i < m; i++)
	{
		int sum = k-v2[i];
		if(sum < 0)break;
		ans = max(ans,bs(v1,sum) + i + 1);
	}

	cout << ans;
  

    return 0;
}
