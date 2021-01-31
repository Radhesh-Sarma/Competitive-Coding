#include<bits/stdc++.h>
  using namespace std;
  #define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  #define endl "\n"
  #define int long long
  int32_t main()
  {        
  



      int a,b;
 
      cin>>a>>b;
      if(b==1)
      {
        cout<< 0;
      }
      else if(a>=b)
      {
        cout<<1;
      }
      else
      {

        int ans = (b-1)/(a-1);

        if((b-1)%(a-1)!=0)
        {
          ans++;
        }

        cout<<ans<<endl;
      }
 
    return 0;
 
     }