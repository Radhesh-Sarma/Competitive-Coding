  //Keep Working Hard
  // I__Like__Food
  #include<bits/stdc++.h>
  #include <ext/pb_ds/assoc_container.hpp> 
  #include <ext/pb_ds/tree_policy.hpp>
  #pragma comment(linker, "/stack:200000000")
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
  #define MOD 998244353
  #define N 100005
  #define INF 1e16
  const double PI = acos(-1);

	


int binarysearch(vector<int> &suff,int k,int pos,int ele)
{
  int low = 0;
  int high = pos;

  while(low <= high)
  {
    int mid = low + (high-low)/2;
    // trace3(mid,pos,ele);
    // trace2(suff[mid],suff[pos]);
    // trace1((pos-mid)*ele - (suff[mid] - suff[pos]));

    if((pos-mid)*ele - (suff[mid] - suff[pos]) <= k)
    {
      high = mid - 1;
    }
    else
    {
      low = mid + 1;
    }
  }
  return pos - low + 1;
}
int32_t main()
{
       
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n,k;
    cin >> n >> k;

    vector<int> arr(n),suff(n);

    for(int i = 0; i < n; i++)
    {
      cin >> arr[i];
    }
    sort(all(arr));

    suff[n-1] = arr[n-1];

    for(int i = n - 2; i >= 0; i--)
    {
      suff[i] = suff[i+1] + arr[i];
    }
    // for(int i = 0; i < n; i++)
    // {
    //   cout << arr[i] << " " ;
    // }
    // cout << endl;

    // for(int i = 0; i < n; i++)
    // {
    //   cout << suff[i] << " " ;
    // }

    //cout << endl;

    int ans = 1;

    vector<int> v;

    for(int i = 0; i < n; i++)
    {
      v.PB(binarysearch(suff,k,i,arr[i]));
    }

    for(int i = 0 ; i < n; i++)
    {
      ans = max(ans,v[i]);
    }

    cout << ans << " ";

    for(int i = 0; i < n; i++)
    {
      if(ans == v[i])
      {
        cout << arr[i];
        return 0;
      }
    }

  return 0;
} 