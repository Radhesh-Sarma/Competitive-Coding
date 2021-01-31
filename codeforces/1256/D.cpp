  //Keep Working Hard
  // I__Like__Food
  #include<bits/stdc++.h>
  #include <ext/pb_ds/assoc_container.hpp> 
  #include <ext/pb_ds/tree_policy.hpp>
  #pragma comment(linker, "/stack:200000000")
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
  #define MOD 1000000007
  #define N 200005
  #define INF 1000000000000000

int32_t main()
{

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif


    cases
    {

      int n,k;
      cin >> n >> k;

      int m = k;

      set<int> ss;

      string s;
      cin >> s;

      int z = 0;
      while(s[z] == '0')z++;



      int i = 0;
      while(s[i] == '0')
        {ss.insert(i);
          i++;
        }
      for(; i < s.length(); i++)
      {

        if(s[i] == '0')
        {
          if( i -z<= m)
          {

            m-=(i-z);

            ss.insert(i);
            z++;

          }
          else
          {
            break;
          }
        }
      }

  

      string ans;

      for(int i = 0; i < ss.size(); i++)
      {
        ans.push_back('0');
      }

      for(int i = 0; i < s.size(); i++)
      {
        if(!ss.count(i))
        {
          ans.push_back(s[i]);
        }

      }



      if(m > 0)
      {
        int pos = -1;
        for(int i = ss.size(); i < ans.size(); i++)
        {
          if(ans[i] == '0')
            {
              pos = i;
              break;
            } 
        }


        int j = pos;
        while(j>=1 and m >0)
        {
          swap(ans[j],ans[j-1]);
          j--;
          m--;
        }
      }
      cout << ans << endl;





    }
  return 0;
}