  //Keep Working Hard
  // I__Like__Food  

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp>

#pragma GCC optimize("O3")
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")

using namespace std;
using namespace __gnu_pbds;

  #define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  #define int long long
  #define endl "\n"
  #define all(v) v.begin(),v.end()
  #define double long double
  #define trace1(x)                cerr<<#x<<": "<<x<<endl
  #define trace2(x, y)             cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
  #define trace3(x, y, z)          cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
  #define trace4(a, b, c, d)       cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl
  #define tracel5(a, b, c, d, e)    cerr<<#a<<": "<<a<<" | "<<#b<< ": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl
  #define trace6(a, b, c, d, e, f) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<endl
  #define cases int testcases;cin>>testcases; while(testcases--)
  const int N = 27;

const int INF = (1LL << 30) - 1;
int dp[N][N];

int32_t main()
{


    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    IOS


    for(int i = 0; i < 26; i++)
    {
    	for(int j = 0; j < 26; j++)
    	{
    		dp[i][j] = INF;
    	}
    }



    string s,t;
    cin >> s >> t;

    if(s.length() != t.length())
    {
      cout << -1;
      return 0;
    }



    int n;
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
      char ch1,ch2;
      int x;
      cin >> ch1 >> ch2 >> x;
      dp[ch1-'a'][ch2-'a'] = min(x,dp[ch1-'a'][ch2-'a'] );

      
    }


    for(int k = 0; k < 26; k++)
    {
      for(int i = 0; i < 26; i++)
      {
        for(int j =0; j < 26; j++)
        {
          dp[i][j] = min(dp[i][j],dp[i][k] + dp[k][j]);
        }
      }
    }






    string ans;

    int money = 0;

    for(int i = 0; i < s.length(); i++)
    {
    	if(s[i] == t[i])
    	{
    		ans.push_back(s[i]);
    		continue;
    	}
      
      int source = s[i]-'a';
      int dest = t[i] - 'a';
      int mincost = min(dp[source][dest],dp[dest][source]);
     // trace1(mincost);
      //cout << source << ": " << dest << endl;

      int ch ;

      if(dp[source][dest] <= dp[dest][source])
      {
      	ch = t[i]-'a';
      }
      else
      {
      	ch = s[i]-'a';
      }

      for(int i =0; i < 26; i++)
      {
        if(mincost > dp[source][i] + dp[dest][i])
          {
            mincost = dp[source][i] + dp[dest][i];
            ch = i;
          }
      }

    //  trace3(i,mincost,ch);;

      ans.push_back('a' + ch);

      money += mincost;
      if(mincost == INF)
      {
        cout << -1;
        return 0;
      }

    }

    cout << money << endl;

    cout << ans << endl;









    return 0;
}

