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
       



    int n,k;
    cin >> n >> k;
    int arr1[n+1],arr2[n+1];

    int pre[n+1];

    rep(i,1,n)
    {
      cin >> arr1[i];
    }

    rep(i,1,n)
    {
      cin >> arr2[i];
    }

    int sum = 0;

    rep(i,1,n)
    {
      if(arr2[i] == 1)
      {
        sum+=arr1[i];
        arr1[i] = 0;
      }

    }

    int ans = 0;

    rep(i,1,k)
    {
      ans += arr1[i];
    }

    


    pre[1] = arr1[1];

    rep(i,2,n)
    {
      pre[i] = pre[i-1] + arr1[i];
    }


    rep(i,1,n-k)
    {
      ans = max(ans, pre[i+k] - pre[i]);
    }

    cout << sum + ans;
 
   return 0;
}