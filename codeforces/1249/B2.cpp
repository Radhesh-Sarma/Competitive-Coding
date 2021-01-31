      #include<bits/stdc++.h>
        using namespace std;
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
        #define trace4(a, b, c, d)       cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl
        #define trace5(a, b, c, d, e)    cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl
        #define trace6(a, b, c, d, e, f) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<endl
        #define cases int testcases;cin>>testcases; while(testcases--)
        #define MOD 1000000007
   
      
     
      
      vector<int> adj[200005];
      bool vis[200005];
     	int a = 0;

     	set<int> se;

     	void dfs(int s)
     	{
     		if(vis[s])
     		{
     			return ;
     		}	
     		a++;
     		vis[s] = true;
   			se.insert(s);
     		for(auto i :adj[s])
     		{
     			if(!vis[i])
     			{
     				dfs(i);
     			}
     		}
     	}
      int32_t main()
      {
             
     
     
        
          IOS
          
    
     
          
       
     	cases
     	{
     	
     		int n;
     		cin >> n;
     		int arr[n+1];
     		for(int i = 1 ; i<= n;i++)
     		{
     			cin >> arr[i];
     		}

     		int ans[n+1];
     		for(int i = 1;  i<= n;i++)
     		{
     			if(i == arr[i])
     			{
     				ans[i] = 1;

     			}
     			else
     				{
     					adj[i].PB(arr[i]);
     				}
     		}


     		for(int i = 1; i <= n; i++)
     		{
     			if(i == arr[i])
     			{
     				continue;
     			}
     			if(!vis[i])
     			{
     				dfs(i);

     				for(auto i :se)
     				{
     					ans[i] = a;
     				}
     				a = 0;
     				se.clear();
     			}
     		}

     		for(int i = 1; i <= n; i++)
     		{
     			cout << ans[i] << " ";
     		}
     		cout << endl;

     		for(int i = 1; i <= n;i++)
     		{
     			vis[i] = false;
     			adj[i].clear();
     		}
     		a = 0;
     		se.clear();

     	}
     
     
          return 0;
      }