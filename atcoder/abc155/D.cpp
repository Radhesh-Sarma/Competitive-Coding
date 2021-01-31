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
  #define N 1000001
  

  #define eps 1e-6

  const int INF = 2*1e18 + 1;
bool check(int n,int x,int arr[],int k)
{

  // finds the number of combinations less than x
  int ans = 0;

  for(int i = 0;i <= n-1; i++)
  {
    if(arr[i] > 0)
    {
      int low = -1, high = n;
      while(low + 1< high)
      {
        int mid = (high+low)/2;
        if(arr[i] * arr[mid] <= x)
        {
          low = mid;
        }
        else
        {
          high = mid;
        }
      }

      ans += high;
    }
    else
    {
        int low = -1, high = n;
      while(low + 1< high)
      {
        int mid = (high+low)/2;

        if(arr[i] * arr[mid] <= x)
        {
          high = mid;
        }
        else
        {
          low = mid;
        }
      }

      ans += (n-high);
    }
  if(arr[i]*arr[i] <= x) ans --;
  }

  ans/=2;

  if(ans < k)return 0;
  else return 1;

}

bool check1(int x)
{
  return x >= 55;
}
int binarysearch(int arr[],int n,int k)
{
  int low = -INF,high = INF;

  while(low <= high)
  {
    int mid = low + (high - low)/2;
    if(check(n,mid,arr,k))
    {
      high = mid - 1;
    }
    else
    {
      low = mid + 1;
    }
  }
  return low ;
}
int32_t main()
{




    int n,k;
    cin >> n >> k;

    int arr[n];

    for(int i = 0; i <n; i++)
    {
      cin >> arr[i];
    }

    sort(arr ,arr+n);

    cout << binarysearch(arr,n,k) << endl;

    return 0;
}