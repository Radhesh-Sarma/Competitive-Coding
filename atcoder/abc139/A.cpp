#include<bits/stdc++.h>
  using namespace std;
  #define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  #define endl "\n"
  #define int long long
  int32_t main()
  {        

      IOS

      string s,t;
      cin >> s >> t;

      int ans = 0 ;

      for(int i=0;i<3;i++)
      {
        if(s[i]==t[i])
        {
          ans++;
        }
      }

      cout << ans;


    return 0;
 
     }