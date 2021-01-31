  //Keep Working Hard
  // I Like Food
  #include<bits/stdc++.h>
  #include <ext/pb_ds/assoc_container.hpp> 
  #include <ext/pb_ds/tree_policy.hpp>
  #pragma comment(linker, "/stack:200000000")
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
  #define MOD 1000000007
  #define N 200005
  #define INF 1000000000000000



typedef tree<
pair<int, int>,
null_type,
less<pair<int, int>>,
rb_tree_tag,
tree_order_statistics_node_update> ordered_set;

  
    int arr[N],pre[N],c[N],cidx[N];



int32_t main()
{

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n, k;
    cin >> n >> k;


    //c[n] denotes the value maximum prefix of length k till n
    //cidx[n] denotes the index of the maximum prefix of length k till n


    for(int i = 1; i <= n; i++)
    {
      cin >> arr[i];
      if(i == 1)pre[i] = arr[i];
      else pre[i] = pre[i-1] + arr[i];
    }

    for(int i = 1; i < k; i++)
    {
      c[i] = 0;
    }

    c[k] = pre[k];
    cidx[k] = 1;

    for(int i = k + 1; i <= n; i++)
    {
      if(pre[i] - pre[i-k] > c[i-1])
      {
        c[i] = pre[i] - pre[i-k];
        cidx[i] = i-k+1;
      }
      else
      {
        c[i] = c[i-1];
        cidx[i] = cidx[i-1];
      }
    }



    int ans1 = 1;
    int ans2 = 1 + k;

    int ans = pre[2*k];

    for(int i = k + 2; i <= n; i++)
    {
      if(pre[i+k-1]-pre[i-1] + c[i-1] > ans)
      {
        ans = pre[i+k-1]-pre[i-1] + c[i-1];

        ans1 = cidx[i-1];
        ans2 = i;
      }
    }
    cout << ans1 << " " << ans2;

  return 0;
}