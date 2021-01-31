 #include<bits/stdc++.h>
  #pragma GCC optimize ("-O3")
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
  int gcd(int a, int b){
    if (b == 0)
        return a;
    return gcd(b, a % b); 
}
 deque<int> d;
     set<int> s;
int32_t main()
{
       



     int n,k;
     cin >> n >> k;

    
     rep(i,1,n)
     {
      int x ;
       cin >> x;

       if(s.count(x))
       {
        continue;
       }
       else
       {
          if(d.size() < k)
          {
            d.push_front(x);
            s.insert(x);
          }
          else
          {
            s.erase(d.back());
            d.pop_back();
            s.insert(x);
            d.push_front(x);
          }
       }

     }

      cout << d.size() << endl;

      for(auto i: d)
      {
        cout << i << " ";
      }

    return 0;
}