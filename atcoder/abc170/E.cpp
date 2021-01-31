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

vector<set<pair<int, int>>> v;
// pair is rating, id

int32_t main()
{

    IOS

    v.resize(N);
    int n,q;
    cin >> n >> q;


    vector<int> a(n+1),b(n+1);

    for(int i = 1; i <= n; i++)
    {
    	cin >> a[i] >> b[i];
    	//trace2(a[i],b[i]);
    	v[b[i]].insert({a[i],i});
    }

    // v[1].insert({1,2});
    // v[1].insert({2,3});

    // cout << v[1].size() << endl;

    multiset<int> ans;

    for(int i = 1; i <= 200000; i++)
    {
    	if(!v[i].empty())
    	{
    		auto it = *v[i].rbegin();
    		ans.insert(it.first);
    	}
    }

 //  cout << *ans.begin() << endl;




    while(q--)
    {
    	int x,y;
    	cin >> x >> y;
    	auto it = *v[b[x]].rbegin();
    	bool ok1 = false;
    	//trace3(x,a[x],b[x]);
    	v[b[x]].erase({a[x],x});
    	if(x == it.second)
    	{
    		ok1 = true;
    		auto it2 = ans.find(a[x]);
    		ans.erase(it2);
    		if(!v[b[x]].empty())
    		{
    			auto it3 = *v[b[x]].rbegin();
    			ans.insert(it3.first);
    		}
    	}
    	b[x] = y;
    	if(!v[b[x]].empty())
    	{
	    	auto it4 = *v[b[x]].rbegin();
	    	if(a[x] > it4.first)
	    	{
	    		auto it2 = ans.find(it4.first);
	    		if(it2 != ans.end())ans.erase(it2);	
	    		ans.insert(a[x]);
	    	}
    	}
    	if(v[b[x]].empty())
    	{
    		ans.insert(a[x]);
    	}

    	v[b[x]].insert({a[x],x});
		cout << *ans.begin() << endl;
		//trace1(ans.size());
    }


    // for(int i = 1; i <= 3; i++)
    // {
    // 	for(auto j : v[i])
    // 	{
    // 		cout << j.first << " " << j.second << endl;
    // 	} 
    // 	cout << endl;
    // }

    // cout << endl;

    // cout << ans.size() << endl;

    // for(auto i : ans)
    // {
    // 	cout << i << endl;
    // }



    //  for(auto i : v[2020])
    // {
    // 	cout << i.first << ":  " << i.second << endl;
    // }





    return 0;
}
