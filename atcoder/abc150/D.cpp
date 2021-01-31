   #include<bits/stdc++.h>
    #include <ext/pb_ds/assoc_container.hpp> 
  #include <ext/pb_ds/tree_policy.hpp>
  #pragma comment(linker, "/stack:200000000")
  #pragma GCC optimize("O3")
  #pragma GCC optimize("Ofast")
  #pragma GCC optimize("unroll-loops")
    using namespace std;
  using namespace __gnu_pbds;
    #define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
    #define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    #define endl "\n"
    #define int long long
    #define all(v) v.begin(),v.end()
    #define rep(i,a,b) for(int i = a; i <=b; i++)
    #define rep2(i,a,b) for(int i = a; i>=b; i--)
    #define PB push_back
    #define MP make_pair
    #define db long double
    #define trace1(x)                cerr<<#x<<": "<<x<<endl
    #define trace2(x, y)             cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
    #define trace3(x, y, z)          cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
    #define trace3race4(a, b, c, d)       cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl
    #define trace5(a, b, c, d, e)    cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl
    #define trace6(a, b, c, d, e, f) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<endl
    #define cases int testcases;cin>>testcases; while(testcases--)
    #define INF 2000000000
    const double PI = acos(-1);
    const int N = 100005;
    int lcm(int a,int b)
    {
    	return ((a/__gcd(a,b))  * b);
    }
  int32_t main() 
  {
    IOS



       
     	int n,m;
     	cin >> n >> m;

     	int arr[n+1];
     	for(int i = 1; i <= n; i++)
     	{
     		cin >> arr[i];
     		
     	}

     	int ans = arr[1]/2;
     	for(int i = 2; i <= n; i++)
     	{
     		ans = lcm(ans,arr[i]/2);
     	}

     	if(ans > m)
     	{
     		cout << 0;
     		return 0;
     	}

     	for(int i = 1; i <= n; i++)
     	{
     		if((ans* 2)/arr[i] %2 == 0)
     		{
     			cout << 0;
     			return 0;
     		}
     	}


     		int ans1 =  (m - ans ) /(2 * ans) + 1;


     		cout << ans1;




     	




    return 0;
      }