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

// void time() {
//     #ifndef ONLINE_JUDGE
//     cout << "\nTime: " << 1.0 * clock() / CLOCKS_PER_SEC << "s\n";
//     #endif
// }
 



  int factorial(int n)
  {
    if(n == 1 || n == 0)
    {
      return 1;
    }
    else return n * factorial(n-1);
  }

  int arr[9][9];

  bool compare(const pair<int,int> &a,const pair<int,int> &b)
  {
    if(a.f == b.f)
    {
      return (a.s < b.s);
    }
    return a.f < b.f;

  }

  double distance(int x1,int y1,int x2,int y2)
  {
    return sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2)) ;  
  }
  int32_t main()
  {        

     IOS

    int n;
    cin >> n;
    vector<pair<int,int>> v;

    for(int i = 1; i <= n; i++)
    {
      int x, y;
      cin >> x >> y;
      v.PB(MP(x,y)); 
    }



    double answer = 0 ;

      sort(all(v),compare);

       for(int i = 0; i < v.size() -1; i++)
      {
        answer += distance(v[i].f,v[i].s,v[i+1].f,v[i+1].s);
      }

    while(next_permutation(v.begin(),v.end()))
    {
      for(int i = 0; i < v.size() -1; i++)
      {
        answer += distance(v[i].f,v[i].s,v[i+1].f,v[i+1].s);
      }
    }



    cout << fixed << setprecision(15) << (answer) / factorial(n);


    //time();
    return  0;
     }
