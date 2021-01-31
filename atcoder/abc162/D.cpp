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
  #define endl "\n"
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
  const int mod = 1e9 + 7;
  const int N = 100005;
  const int INF = 1e16;
  const double PI = acos(-1);

int32_t main()
{

    int n;
    cin >> n;


    string s;
    cin >> s;

    vector<int> rcount(n),gcount(n),bcount(n);

    rcount[0] = bool(s[0] == 'R');
    gcount[0] = bool(s[0] == 'G');
    bcount[0] = bool(s[0] == 'B');

    for(int i = 1; i < s.length(); i++)
    {
      rcount[i] = rcount[i-1] + bool(s[i] == 'R');
      gcount[i] = gcount[i-1] + bool(s[i] == 'G');
      bcount[i] = bcount[i-1] + bool(s[i] == 'B');
    }

    int ans =0;

    for(int i = 0; i < s.length(); i++)
    {
      for(int j = i+1; j < s.length(); j++)
      {
        if(s[i] != s[j])
        {
          if(s[i] == 'R' and s[j] == 'G')
          {
            ans += bcount[s.length()-1] - bcount[j];
            if(2*j-i < s.length())
            {
              if(s[2*j-i] == 'B')ans--;
            }
          }
          else if(s[i] == 'R' and s[j] == 'B')
          {
            ans += gcount[s.length()-1] - gcount[j];
            if(2*j-i < s.length())
            {
              if(s[2*j-i] == 'G')ans--;
            }
          }
          else if(s[i] == 'G' and s[j] == 'R')
          {
            ans += bcount[s.length()-1] - bcount[j];
            if(2*j-i < s.length())
            {
              if(s[2*j-i] == 'B')ans--;
            }
          }
          else if(s[i] == 'G' and s[j] == 'B')
          {
            ans += rcount[s.length()-1] - rcount[j];
            if(2*j-i < s.length())
            {
              if(s[2*j-i] == 'R')ans--;
            }
          }
          else if(s[i] == 'B' and s[j] == 'R')
          {
            ans += gcount[s.length()-1] - gcount[j];
            if(2*j-i < s.length())
            {
              if(s[2*j-i] == 'G')ans--;
            }
          }
          else if(s[i] == 'B' and s[j] == 'G')
          {
            ans += rcount[s.length()-1] - rcount[j];
            if(2*j-i < s.length())
            {
              if(s[2*j-i] == 'R')ans--;
            }
          }
        }
      }
    }

    cout << ans;
    return 0;
}