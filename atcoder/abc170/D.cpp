#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp>

// Remove GCC optimizer for codechef
#pragma comment(linker, "/stack:200000000")
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
  #define trace5(a, b, c, d, e)    cerr<<#a<<": "<<a<<" | "<<#b<< ": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl
  #define trace6(a, b, c, d, e, f) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<endl
  #define cases int testcases;cin>>testcases; while(testcases--)
  const int N = 200005;


set<int> divisors(int x)
{
    set<int> s;
    for(int i = 1; i*i <= x; ++i)
        if(x % i == 0)
            s.insert(i), s.insert(x/i);
    return s;
}

int freq[1000005];

int32_t main()
{


    IOS


    int n;
    cin >> n;

   	map<int,int> mp;


    vector<int> v(n);

    for(int i = 0; i < n; i++)
    {
    	cin >> v[i];
    	mp[v[i]]++;
    }



    sort(v.begin(),v.end());

    int ans = 0;


    for(int i = 0; i < n; i++)
    {	
    	freq[v[i]]++;
    	if(mp[v[i]] > 1)continue;

    	set<int> div = divisors(v[i]);
    	bool ok = true;

    	for(auto j : div)
    	{
    		if(j == v[i])break;
    		if(freq[j] > 0)
    		{
    			ok = false;
    			break;
    		}
    		//trace1(j);
    	}
    	if(ok)ans++;
    	


    }


    cout << ans;




    return 0;
}
