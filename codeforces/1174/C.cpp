#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f first
#define s second
#define int long long
#define PB push_back
#define MP make_pair
#define db long double
#define all(a) a.begin(), a.end()
#define trace1(x)                cerr<<#x<<": "<<x<<endl
#define trace2(x, y)             cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
#define trace3(x, y, z)          cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
#define trace4(a, b, c, d)       cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl
#define trace5(a, b, c, d, e)    cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl
#define trace6(a, b, c, d, e, f) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<endl
#define cases int testcases;cin>>testcases; while(testcases--)
int32_t main()
 {
	

  
        #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);
       freopen("output.txt", "w", stdout);
        #endif  

int n, arr[100001] = {}; cin >> n;
  for(int i = 2 ; i <= n ; i ++)
  {
    arr[i] = i;
  }
  for(int i = 2 ; i <= sqrt(n); i ++)
  {
    if(arr[i] == 0)
    {
    	continue;
    } 
    for(int j = i*i; j <= n; j += i) 
    	{
    		arr[j] = 0;
    	}

  }

  int count = 0, ans[100001] = {};

  for(int i = 2 ; i <= n ; i ++)
  {
    if(arr[i] != 0)
    {
      count ++;
      for(int j = i; j <= n; j += i)
      {
        if(ans[j] == 0)
        {
        	ans[j] = count;	
        } 
      }
    } 
  }

  for(int i = 2; i <= n ; i ++) 
  	{
  		cout << ans[i] << ' ';
  	}

  	return 0;
}