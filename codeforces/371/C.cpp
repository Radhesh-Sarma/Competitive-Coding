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
  const int mod2 = 998244353;
  const int N = 20005;
  const int INF = 1e16;
  const double PI = acos(-1);


int nb,ns,nc,pb,ps,pc,r;

int bread = 0, cheese = 0, sause = 0;

int cost(int x)
{

  return (max(x*bread-nb,0LL)*pb + max(x*cheese-nc,0LL)*pc + max(x*sause-ns,0LL)*ps);
}

int binarysearch(int low,int high)
{
  while(low <= high)
  {
    int mid = low + (high-low)/2;

    if(cost(mid) <= r)
    {
      low = mid + 1;
    }
    else
    {
      high = mid-1;
    }
  }

  return low-1;
}


int32_t main()
{
       

    IOS
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    string s;
    cin >> s;

    for(int i = 0; i < s.length(); i++)
    {
      if(s[i] == 'B')bread++;
      else if(s[i] == 'C')cheese++;
      else sause++;
    }

    cin >> nb >> ns >> nc >> pb >> ps >> pc >> r;



    cout << binarysearch(0,1e13);

  return 0;
} 