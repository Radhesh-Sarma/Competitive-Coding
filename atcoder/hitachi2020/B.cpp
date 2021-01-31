   #include<bits/stdc++.h>
  using namespace std;
  #define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  #define endl "\n"
  #define int long long
  #define all(v) v.begin(),v.end()
  #define f first
  #define s second
  #define PB push_back
  #define MP make_pair
  #define double long double
  #define trace1(x)                cerr<<#x<<": "<<x<<endl
  #define trace2(x, y)             cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
  #define trace3(x, y, z)          cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
  #define trace4(a, b, c, d)       cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl
  #define trace5(a, b, c, d, e)    cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl
  #define trace6(a, b, c, d, e, f) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<endl
  #define cases int testcases;cin>>testcases; while(testcases--)
  #define MOD 1000000007
  #define N 1000001
  

int32_t main()
{




  int a,b,m;
  cin >> a >> b >> m;

  int arr1[a+1],arr2[b+1];

  for(int i = 1; i <= a; i++)
  {
    cin >> arr1[i];
  }

  for(int i = 1; i <= b; i++)
  {
    cin >> arr2[i];
  }


  int ans = 1e17;

  for(int i = 0; i < m; i++)
  {
    int x,y,c;
    cin >> x >> y >> c;
    ans = min(ans,arr1[x] + arr2[y] - c);
   
  }

  sort(arr1+1,arr1+a+1);
  sort(arr2+1,arr2+b+1);


  cout << min(ans,arr1[1] + arr2[1]);


  return 0;
}