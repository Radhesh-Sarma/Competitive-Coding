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
 
      
      cases
      {
        int n,k;
        cin >> n >> k;
        vector<pair<int,int>> v;
        for(int i=0;i<n;i++)
        {
          int x,y;
          cin >> x >> y;
          v.PB(MP(x,y));
        }


        sort(v.begin(),v.end());
        reverse(v.begin(), v.end());

        if(v[0].f >= k)
        {
          cout << 1 << endl;
          continue;
        }
        int a = -1;
        for(int i=0;i<n;i++)
        {
          a = max(a,v[i].f - v[i].s);
        }

        if(a <=0)
        {
          cout << -1 << endl;
          continue;
        }


        int ans = (k-v[0].f)/(a);
        if((k-v[0].f)%a !=0)
        {
          ans++;
        }
        cout << ans + 1 << endl;

      } 


    return 0;

    
}

