#include <bits/stdc++.h>
using namespace std;
  #define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  #define int long long
  #define endl "\n"
  const int N = 200005;

int32_t main()
{


    IOS

    


    int n,m;
    cin >> n >> m;

    vector<int> h(n);

    for(int i = 0; i < n; i++)cin >> h[i];


    set<int> s;

    for(int i = 1; i <= n; i++)s.insert(i);


    for(int i = 1; i <= m; i++)
    {
      int x,y;
      cin >> x >> y;

      if(h[x-1] <=h[y-1])
      {
        s.erase(x);
      }

      if(h[y-1] <=h[x-1])
      {
        s.erase(y);
      }
    }



    cout << s.size();






    
    return 0;
}

