    //Keep Working Hard
  // I__Like__Food  
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
  #define trace5(a, b, c, d, e)    cerr<<#a<<": "<<a<<" | "<<#b<< ": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl
  #define trace6(a, b, c, d, e, f) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<endl
  #define cases int testcases;cin>>testcases; while(testcases--)
  #define mod 1000000007
  #define N 200005
  #define INF 1000000000000
  #define eps 1e-6
  #define int long long
  #define pie 3.1415926535897932384626433832795028


bool sameparity(int x,int y)
{
  if(x > 0 and y > 0)return true;
  if(x < 0 and y < 0)return true;

  return false;
}
int32_t main()
{



    cases
    {
      int n;
      cin >> n;
      vector<int> v(n);

      stack<int> s;

      for(int i = 0; i < n; i++)
      {
        cin >> v[i];
      }

      s.push(v[0]);

      for(int i = 1; i < n; i++)
      {
        if(sameparity(v[i],s.top()))
        {
          if(v[i] > s.top())
          {
            s.pop();
            s.push(v[i]);
          }
        }
        else
        {
          s.push(v[i]);
        }
      }

      int ans = 0;

      while(!s.empty())
      {
        ans += s.top();
        s.pop();
      }
      

      cout << ans << endl;

    }
    return 0;
}