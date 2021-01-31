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
  #define f first
  #define s second
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
  const int mod = 1000000007;
  const int mod2 = 998244353;
  const int N = 10000005;
  const int INF = 1e16;
  const double PI = acos(-1);


int mx ;

int freq[N];


const int M = 10000005;
bool comp[M]; 
set<int> primes;
void seive()
{
    comp[0] = comp[1] = 1;
    for(int i = 0; i*i <M; i++)
    {
        if(comp[i])
            continue;
        for(int j = i+i; j <M; j += i)
            comp[j] = 1;
    }

    for(int i = 2; i <M; i++)if(!comp[i])primes.insert(i);
}

int ans[N];



int32_t main()
{
       

    IOS


        #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
        #endif

    int n;
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
      int x;
      cin >> x;
      freq[x]++;
      mx = max(mx,x);
    }

    seive();


  for(auto i : primes)
  {
    int sum = 0;
    for(int j = i; j <M; j+=i)sum += freq[j];

      ans[i] = sum;
  }

  for(int i = 1; i <M; i++)
  {
    ans[i] += ans[i-1];
  }

  cases
  {
    int l,r;
    cin >> l >> r;

    if(l >= M)
    {
      cout << 0 << endl;
      continue;
    }
    r = max(min(r,M-1),l);

    cout << ans[r] - ans[l-1] << endl;
  }


  return 0;
} 