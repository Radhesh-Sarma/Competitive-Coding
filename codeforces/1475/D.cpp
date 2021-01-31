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
		    	int n,m;
		    	cin >> n >> m;

		    	vector<int> v1,v2;

		    	vector<int> a(n+1),b(n+1);

		    	for(int i = 1; i <= n; i++)cin >> a[i];

		    	for(int i = 1; i <= n; i++)cin >> b[i];

		    	for(int i = 1; i <= n; i++)
		    	{
		    		if(b[i] == 1)v1.push_back(a[i]);
		    		else v2.push_back(a[i]);
		    	}

		    	sort(all(v1),greater<int>());
		    	sort(all(v2),greater<int>());

		    	for(int i = 1; i < v1.size(); i++)v1[i] += v1[i-1];
		    	for(int i = 1; i < v2.size(); i++)v2[i] += v2[i-1];

		    	int ans = 2*n;
		    	if(v1.empty())
		    	{
		    		bool ok = false;

		    		for(int i = 0; i < v2.size(); i++)
		    		{
		    			if(v2[i] >= m)
		    			{
		    				ok = true;

		    				cout << 2*(i + 1) << endl;
		    				break;
		    			}
		    		}

		    		if(!ok)
		    		{
		    			cout << -1 << endl;
		     		}
		     		continue;
		    	}

		    	if(v2.empty())
		    	{
		    		bool ok = false;

		    		for(int i = 0; i < v1.size(); i++)
		    		{
		    			if(v1[i] >= m)
		    			{
		    				ok = true;

		    				cout << i + 1 << endl;
		    				break;
		    			}
		    		}

		    		if(!ok)
		    		{
		    			cout << -1 << endl;
		     		}
		     		continue;
		    	}


		    	if(v1.back() + v2.back() < m)
		    	{
		    		cout << -1 << endl;
		    		continue;
		    	}

		    	auto it = lower_bound(all(v1),m);


		    	if(it != v1.end())
		    	{
		  		  ans = min(ans,(int)(it-v1.begin()+1));
				}

		    	it = lower_bound(all(v2),m);
		    	if(it != v2.end())ans = min(ans,2*(int)(it-v2.begin()+1));

		    	for(int i = 0; i < v2.size(); i++)
		    	{	
		    		if(m-v2[i] < 0)break;
		    		it = lower_bound(all(v1),m-v2[i]);

		    		if(it != v1.end())ans = min(ans, 2*(i+1) + (int)(it-v1.begin()+1));
		    	}

		    	cout << ans << endl;

		  		
		    	
		    }





		    return 0;
		}
