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


  int32_t main() 
  {
    IOS


       
     	int ans1 = 1;
     	int ans2 = 1;


     	int n;
     	cin >> n;

     	vector<int> v;

     	vector<int> p,q;
     	for(int i = 1; i <= n; i++)
     	{
     		int x;
     		cin >> x;
     		p.PB(x);
     	}

     	for(int i = 1; i <= n; i++)
     	{
     		int x;
     		cin >> x;
     		q.PB(x);
     	}
     	


     	for(int i = 1; i <= n; i++)
     	{
     		v.PB(i);
     	}

     	if(v != p)
     	{
     		     	while(next_permutation(all(v)))
			     	{
			       		ans1++;
			     		if(v == p)
			     		{
			     			break;
			     		}


			     	}
     	}
     


     	v.clear();



     	for(int i = 1; i <= n; i++)
     	{
     		v.PB(i);
     	}

     	if(v != q)
     	{

     		while(next_permutation(all(v)))
	     	{
	     		ans2++;
	     		if(v == q)
	     		{
	     			break;
	     		}

	     	}

     	}

     	//trace2(ans1,ans2);
     	cout << abs(ans1 - ans2);


    return 0;
      }