  //Keep Working Hard
  // I__Like__Food  
  #include<bits/stdc++.h>
  #include <ext/pb_ds/assoc_container.hpp> 
  #include <ext/pb_ds/tree_policy.hpp>
  #define rep(i,a,b) for(int i = a; i <=b; i++)
  #define rep2(i,a,b) for(int i = a; i>=b; i--)
  #pragma GCC optimize("O3")
  #pragma GCC optimize("Ofast") 
  #pragma GCC optimize("unroll-loops")
  using namespace std;
  using namespace __gnu_pbds;
  #define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  #define endl "\n"
  #define int long long
  #define all(v) v.begin(),v.end()
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
  const int mod = 1e9 + 7;
  const int N = 200005;
  const int INF = 1e16;
  const double PI = acos(-1);


int ans = 0;

int arr1[N],arr2[N],arr3[N];


int32_t main()
{
       

    IOS


    int x,y,a,b,c;
    cin >> x >> y >> a >> b >> c;



    for(int i = 1; i <= a; i++)
    {
      cin >> arr1[i];
    }

    for(int i = 1; i <= b; i++)
    {
      cin >> arr2[i];
    }

    for(int i = 1; i <= c; i++)
    {
      cin >> arr3[i];
    }

    sort(arr1+1,arr1+a+1,greater<int>());
    sort(arr2+1,arr2+b+1,greater<int>());
    sort(arr3+1,arr3+c+1,greater<int>());


    vector<int> v;


     for(int i = 1; i <= x; i++)v.PB(arr1[i]);




     for(int i = 1; i <= y; i++)v.PB(arr2[i]);




    sort(all(v));

    int ans = 0;

    int j = 1;

    //cout << v.size() << endl;

    for(int i = 0; i < v.size(); i++)
    {
      if(v[i] < arr3[j] and j <= c)
      {
        v[i] = arr3[j++];
      }
    }
    for(int i = 0; i < v.size(); i++)
    {
      ans += v[i];
    }

    cout << ans;
  return 0;
} 