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



	    cases 
	    {
	    	int n;
	    	cin >> n;

	    	vector<int> v(2*n);

	    		
	    	for(int i = 0; i < v.size(); i++)
	    	{
	    		cin >> v[i];
	    	}

	    	sort(all(v));

	    	
	    	bool ok = true;

	    	for(int idx = 0; idx < v.size()-1; idx++)
	    	{
	    		ok = true;
	    		int x = v[idx] + v.back();

	    		multiset<int> ms(all(v));

	    		auto itt1 = ms.end();
	    		itt1--;

	    		if(itt1 == ms.end())continue;
	    		ms.erase(itt1);

	    		auto itt2 = ms.find(v[idx]);
				if(itt2 == ms.end())continue;
	 
	    		ms.erase(itt2);

	    	

	    		vector<vector<int>> ans;
	    		ans.push_back({x});
	    		ans.push_back({{v.back(),v[idx]}});

	  

	    			int mx = v.back();

	    		while(ms.size() > 0)
	    		{


	    			auto it1 = ms.end();
	    			it1--;

	    	
	    			auto it2 = ms.find(mx-*it1);
	    			if(it2 == ms.end() or it1 == it2)
	    			{
	    				ok = false;
	    				break;
	    			}

	    			ans.push_back({*it1,*it2});
	    			mx = max(*it1,*it2);

	  
	    			ms.erase(it2);
	    			ms.erase(it1);
	    		

	    		}



	    		if(ok)
	    		{
	    			cout << "YES" << endl;
	    			for(auto &i : ans)
	    			{
	    				for(auto &j : i) 
	    				{
	    					cout << j << " " ;
	    				}

	    				cout << endl;
	    			}
	    			break;
	    		}
	    	}	


	    	if(!ok)
	    	{
	    		cout << "NO" << endl;
	    	}
	    }



	    return 0;
	}
