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

     
      
     
      int32_t main()
      {
             
     
     
        
          IOS
          
   
          
       
     	cases
     	{
     		int n;
     		cin >> n;
     		int arr[n];
     		for(int i = 0; i < n;i++)
     		{
     			cin >> arr[i];
     		}

     		int ans = 1;
     		sort(arr,arr+n);
     		for(int i = 0;i < n-1; i++)
     		{
     			if(arr[i+1] == arr[i]+1)
     			{
     				ans++;
     				break;
     			}
     		}

     		cout << ans << endl;
     	}
     
     
          return 0;
      }