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
  #define N 200005
  #define INF 1000000000000
  #define eps 1e-6


int arr[3][3];


int32_t main()
{



    for(int i = 0; i < 3; i++)
    {
      for(int j = 0; j < 3; j++)
      {
        cin >> arr[i][j];
      }
    }


    int n;
    cin >> n;

    for(int k = 1; k <= n; k++)
    {
      int x;
      cin >>x;

      for(int i = 0; i < 3; i++)
      {
        for(int j = 0; j < 3; j++)
        {
          if(x == arr[i][j])arr[i][j] = -1;
        }
      }
    }



    bool ok = false;

    vector<int> v;
    v.PB(-1);
    v.PB(-1);
    v.PB(-1);


    for(int i = 0; i < 3; i++)
    {
      vector<int> v1,v2;
      for(int j = 0; j < 3; j++)
      {
        v1.PB(arr[i][j]);
        v2.PB(arr[j][i]);
      }

      if(v1 == v or v2 == v)ok = true;
    
    }

      vector<int> v1,v2;

      for(int i = 0; i < 3; i++)
      {
        v1.PB(arr[i][i]);
        v2.PB(arr[i][2-i]);
      }    

      if(v1 == v or v2 == v)ok = true;

      cout << (ok ? "Yes" : "No");

    return 0;
}