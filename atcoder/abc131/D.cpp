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
  #define db long double
  #define trace1(x)                cerr<<#x<<": "<<x<<endl
  #define trace2(x, y)             cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
  #define trace3(x, y, z)          cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
  #define trace4(a, b, c, d)       cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl
  #define trace5(a, b, c, d, e)    cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl
  #define trace6(a, b, c, d, e, f) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<endl
  #define cases int testcases;cin>>testcases; while(testcases--)
  #define MOD 1000000007
    

  int gcd(int a,int b)
  {
    if(b==0)
    {
      return a;
    }
    return gcd(b,a%b);
  }

  bool sortbysec(const pair<int,int> &a,const pair<int,int> &b)
  {

    if(a.s==b.s)
    {
      return a.f<b.f;
    }
    return a.s<b.s;
  }
  int32_t main()
  {         

      IOS


      vector<pair<int,int> >v;


      int n;
      cin>>n;
      for(int i=1;i<=n;i++)
      {
        int x,y;
        cin>>x>>y;
        v.PB(MP(x,y));
      }

      sort(all(v),sortbysec);


      int time=0;
      bool ok=true;
      for(auto i:v)
      {
        if(time + i.f <=i.s)
        {
          time+=i.f;
        }
        else
        {
          cout<<"No";
          return 0;

        }
      }

      cout<<"Yes";


      return 0;
  }           