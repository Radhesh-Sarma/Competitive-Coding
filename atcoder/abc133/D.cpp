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
  #define MOD 998244353
  #define N 200005
  #define INF 1000000000000
  #define eps 1e-6

  bool custom(pair<int,int> &a,pair<int,int> &b)
  {
    if(a.s == b.s)return a.f > b.f;
    return a.s > b.s;
  }
int32_t main()
{
    IOS

  int n;
  cin >> n;
  int arr[n+1];

  for(int i = 1; i <= n; i++)
  {
    cin >> arr[i];
  }

  int x =0;

  for(int i = n; i >=1; i--)
  {
    if(i%2 == 1)
    {
      x += arr[i];      
    }
    else
    {
      x-= arr[i];
    }
  }

  
  cout << x << " ";
  x/=2;
  vector<int> ans;

  for(int i = 1; i <= n-1; i++)
  {
    ans.PB(arr[i]-x);
    x = arr[i] - x;
  }

  for(auto i: ans)
  {
    cout << 2*i << " ";
  }

	return 0;  
}