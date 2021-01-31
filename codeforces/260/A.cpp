  #include<bits/stdc++.h>
  using namespace std;
  #define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  #define endl "\n"
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
  #define N 100005
  #define INF 1000000000000
  #define eps 1e-6
  #define int long long

int32_t main()
{



    int n,a,b;
    cin >> a >> b >> n;

    int y = a%b;

    string ans;

    for(int i = 1; i <= n; i++)
    {
      bool ok = false;
      for(int j = 0; j <= 9; j++)
      {
        if((((10 *(y%b))%b + j%b)%b) == 0)
        {
          y = ((10 *(y%b))%b + j%b);
          y %= b;
          
          ok = true;
          ans.PB(j + '0');
          break;
        }
      }

      if(ok == false)
      {
        cout << -1;
        return 0;
      } 

    }

    cout << a << ans;


    return 0;
}