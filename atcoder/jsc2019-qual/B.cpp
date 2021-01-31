  //Keep Working Hard
  // I__Like__Food  

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp>

#pragma GCC optimize("O3")
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")

using namespace std;
using namespace __gnu_pbds;

  #define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  #define int long long
  #define endl "\n"
  #define all(v) v.begin(),v.end()
  #define double long double
  #define trace1(x)                cerr<<#x<<": "<<x<<endl
  #define trace2(x, y)             cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
  #define trace3(x, y, z)          cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
  #define trace4(a, b, c, d)       cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl
  #define tracel5(a, b, c, d, e)    cerr<<#a<<": "<<a<<" | "<<#b<< ": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl
  #define trace6(a, b, c, d, e, f) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<endl
  #define cases int testcases;cin>>testcases; while(testcases--)

const int N = 2005;

const int MOD = 1000000007;
int arr[N];

int32_t main()
{


    IOS

    int n, k;
    cin >> n >> k;

    k%=MOD;

    for(int i = 1; i<= n; i++)
    {
    	cin >> arr[i];
    }


    int invcount = 0;

    for(int i = 1; i <= n; i++)
    {
    	int ans = 0;
    	for(int j = 1; j <= n; j++)
    	{
    		if(arr[i] > arr[j])ans++;
    		if(arr[i] > arr[j] and i < j)invcount+=k;
    		invcount %= MOD;
    	}
    	ans %= MOD;
    	invcount %= MOD;
    	int f = k*(k-1)/2;
    	f%=MOD;

    	invcount += (f*ans);
        invcount %= MOD;
    }

    cout << invcount%MOD;




    return 0;
}


