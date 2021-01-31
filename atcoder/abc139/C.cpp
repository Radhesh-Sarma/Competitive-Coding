#include<bits/stdc++.h>
  using namespace std;
  #define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  #define endl "\n"
  #define int long long
  int32_t main()
  {        

      IOS

    int n;
    cin>>n;
    int h[n];
    for(int i = 0;i < n;i++)
    {
      cin >> h[i];
    }

    int ans=0;
    int ans1=0;

    for(int i = 0;i < n-1;i++)
    {
      //cerr << i << ans << ans1 <<endl;
      if(h[i] >= h[i+1])
      {
        ans1++;
      }
      else
      {

        ans=max(ans1,ans);
         ans1=0;
      }
    }
    ans=max(ans,ans1);
    cout<<ans;

    return 0;
 
     }