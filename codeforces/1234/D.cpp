  #include<bits/stdc++.h>
    using namespace std;
    #define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    #define endl "\n"
  int32_t main()
  {
        
      IOS
      string s;
      cin >> s;
      vector<set<int>> v(26);

      for(int i = 0;i < s.length(); i++)
      {
         v[s[i]-'a'].insert(i+1);
      }
    
      int t;
      cin >> t;
      while(t--)
      {
        int x;
        cin >> x;
        if(x == 1)
        {
          int temp;
          char ch;
          cin >> temp >> ch;

          v[s[temp-1]-'a'].erase(temp);
          s[temp-1] = ch;
          v[s[temp-1]-'a'].insert(temp);
        }
        else
        {
          int y, z;
          cin >> y >> z;
          int ans= 0;

          for(int i = 0;i < 26; i++)
          {
            auto it = v[i].lower_bound(y);
            if(it != v[i].end())
            {
              if(*it <= z)
              {
                ans++;
              }
            }
          }
          cout << ans << endl;
        }

      }

      
      return 0;
  }