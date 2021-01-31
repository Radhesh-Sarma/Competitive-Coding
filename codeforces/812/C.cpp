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
 
 vector<int> v;
 int n, s;

 int cost(int x)
 {
  vector <int> v1;

  for(int i = 0;i < n ;i++)
  {
    v1.PB(v[i] + (i+1)*(x));
  }



  sort(all(v1));

  int ans = 0;
  for(int i = 0; i < x;i++)
  {
    ans += v1[i];
  }

  return ans;

 }



int binsearch()
{
 int l = 0, r = n;

 while(l < r)
 {
  int mid = l + (r-l +1)/2;

  if(cost(mid) <= s)
  {
    l = mid;
  } 
  else
  {
    r = mid -1;
  }

 }

 return l;



}
int32_t main()
{
       

   #ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("output.txt", "w", stdout);
    #endif
  
     cin >> n >> s;

     rep(i,1,n)
     {
      int x;
      cin >> x;
      v.PB(x);
     }


      int ans = binsearch();

      cout << ans << " " << cost(ans);



   return 0;
}