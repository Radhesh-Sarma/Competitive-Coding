#include <bits/stdc++.h>
using namespace std;
  #define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  #define int long long
  #define endl "\n"
  const int N = 200005;

int32_t main()
{



    IOS

    


    int x;
    cin >> x;

    vector<pair<int,int>> v;

    for(int i = -5000; i<= 5000; i++)
    {
      int x = i*i*i*i*i;
      //cout << i*i*i*i*i << endl;
      v.push_back(make_pair(x,i));
    }

    sort(v.begin(),v.end());

    for(int i = 0; i < v.size(); i++)
    {
      for(int j = i +1; j < v.size(); j++)
      {
        if(v[j].first-v[i].first == x)
        {
          cout <<  v[j].second << " " << v[i].second;
          return 0;
        }
      }
    }







    
    return 0;
}

