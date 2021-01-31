#include <bits/stdc++.h>
using namespace std;
  #define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  #define int long long
  #define endl "\n"
  const int N = 200005;

int32_t main()
{



    IOS

    

    int n,k;
    cin >> n >> k;

    set<int> s;


    for(int i = 1; i <= k; i++)
    {
      int d;
      cin >> d;

      for(int i = 1;i <= d; i++)
      {
        int x;
        cin >> x;
        s.insert(x);
      }


    }

    int ans = 0;

    for(int i = 1; i <=n; i++)
      {
        if(!s.count(i))ans++;
      }

      cout << ans;  

















    
    return 0;
}

