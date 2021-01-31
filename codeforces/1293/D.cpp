#include<bits/stdc++.h>  
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
#define all(v) v.begin(),v.end()
#define rep(i,a,b) for(int i = a; i <=b; i++)
#define rep2(i,a,b) for(int i = a; i>=b; i--)
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
#define INF 2000000000
const double PI = acos(-1);
const int N = 100005;
#define eps 1e-6
#define MOD 1000000007

    vector< pair<int,int> > v;
  int dist(int x,int y,int z,int w)
  {
    return abs(x-z) + abs(y-w);
  }

  pair<int,int> nearest(int x,int y)
  {
    auto it = *v.begin();
    int ansx = it.first;
    int ansy = it.second;

    int ans = dist(x,y,ansx,ansy);

    for(auto i : v)
    {
      int k = dist(i.first,i.second,x,y);
      if(ans > k )
      {
        ans = k;
        ansx = i.first;
        ansy = i.second;
      }
    }
    return {ansx,ansy};  
  }
  int32_t main() 
  {
    IOS
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif



      int x0,y0,ax,ay,bx,by;


      cin >> x0 >> y0 >> ax >> ay >> bx >> by;

      int xs,ys,t;
      cin >> xs >> ys >> t;

      int newx = x0,newy = y0;
      v.PB({newx,newy});
      while(1)
      {
        newx = ax * newx + bx;
        newy = ay * newy + by;
        if(newx > 1e17 or newy > 1e17 or newx < 0 or newy < 0)
        {
          break;
        }
        v.PB({newx,newy});
      }

      int ans = 0;
      
      for(int i = 0 ; i < v.size(); i++)
      {
        for(int j = i; j < v.size(); j++)
        {
          int l = dist(v[i].first,v[i].second,v[j].first,v[j].second);
          int a = dist(xs,ys,v[i].first,v[i].second);
          int b = dist(xs,ys,v[j].first,v[j].second);
          if(a + l <= t or b + l <=t)
          {
            ans = max(ans,j-i+1);
          }
        }
      }

      cout << ans;
    return 0;
      }
        