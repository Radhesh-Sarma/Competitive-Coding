#include <bits/stdc++.h>
using namespace std;
  #define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  #define int long long
  #define endl "\n"
  const int N = 200005;

int32_t main()
{



    IOS

    


    int n;
    cin >> n;

    vector<int> v(n);
    map<int,int> mp;


    for(int i = 0; i < n; i++)
    {
      cin >> v[i];
      mp[i+v[i]]++;
    }

    int ans =0;

    for(int i = 0; i< n; i++)
    {
      ans += mp[i-v[i]];
    }

    cout << ans;







    
    return 0;
}

