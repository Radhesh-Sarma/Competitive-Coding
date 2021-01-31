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



    int32_t main()
  {
    

      IOS

    #ifndef ONLINE_JUDGE
      // for- getting input from input.txt
      freopen("input.txt", "r", stdin);
      // for writing output to output.txt
      freopen("output.txt", "w", stdout);
      #endif 



        string s;
        cin>>s;

        unordered_map<char,int> mp;


        for(int i=0;i<s.length();i++)
        {
          mp[s[i]-'a']++;
        } 


          int a=0;
          int ans=0;
          bool ok=false;
          for(auto i:mp)
          {
            if(i.s&1)
            {
              ans++;
            }
            else
            {
              ok=true;
            }
          }

          if(!ok)
          {
            if(s.length()&1)
            {
              cout<<"First";
            }
            else
            {
              cout<<"Second";
            }
            return 0;
          }
          if(ans==1||ans==0)
          {
            cout<<"First";
            return 0;
          }
          if(ans&1)
          {
            cout<<"First";
          }
          else
          {
            cout<<"Second";
          }


      return 0;
        
      
      
    
  }     