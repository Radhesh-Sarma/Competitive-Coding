 #include<bits/stdc++.h>
  using namespace std;
  #define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  #define endl "\n"
  #define int long long
  #define all(v) v.begin(),v.end()
  #define rep(i,a,b) for(int i = a; i <=b; i++)
  #define rep2(i,a,b) for(int i = a; i>=b; i--)
  #define f first
  #define s second
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
 
int32_t main()
{
       

   #ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("output.txt", "w", stdout);
    #endif
  


     int a,b;   
     cin >> a >> b;
     int s = a + b;
      int n = 1;
      while(((n)*(n+1))/2 <= s)
      {
        n++;
      }

      n--;


      set<int> ans1,ans2 ;

      int sum = a;

    for(int i = n; i >=1 ; i--)
    {
      if(i <= sum)
      {
        ans1.insert(i);
        sum-=i;
      }
    }

    for(int i = 1;i <= n; i++)
    {
      if(ans1.count(i) == 0)
      {
        ans2.insert(i);
      }
    }

      cout << ans1.size() << endl;
    for(auto i : ans1 )
    {
      cout << i << " ";
    }
    cout << endl ;
    cout << ans2.size() << endl;
    
    for(auto i:ans2)
    {
      cout << i << " ";
    }

    return 0;

    
}

