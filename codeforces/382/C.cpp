  //Keep Working Hard
  // I__Like__Food
  #include<bits/stdc++.h>
  #include <ext/pb_ds/assoc_container.hpp> 
  #include <ext/pb_ds/tree_policy.hpp>
  #pragma comment(linker, "/stack:200000000")
  #define rep(i,a,b) for(int i = a; i <=b; i++)
  #define rep2(i,a,b) for(int i = a; i>=b; i--)
  #pragma GCC optimize("O3")
  #pragma GCC optimize("Ofast") 
  #pragma GCC optimize("unroll-loops")
  using namespace std;
  using namespace __gnu_pbds;
  #define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  #define endl "\n"
  #define int long long
  #define all(v) v.begin(),v.end()
  #define PB push_back
  #define MP make_pair
  #define double long double
  #define trace1(x)                cerr<<#x<<": "<<x<<endl
  #define trace2(x, y)             cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
  #define trace3(x, y, z)          cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
  #define trace4(a, b, c, d)       cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl
  #define trace5(a, b, c, d, e)    cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl
  #define trace6(a, b, c, d, e, f) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<endl
  #define cases int testcases;cin>>testcases; while(testcases--)
  #define MOD 998244353
  #define N 100005
  #define INF 1e16
  const double PI = acos(-1);



int32_t main()
{

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin >> n;
    vector<int> v(n);

    for(int i = 0; i < n; i++)
    {
      cin >> v[i];
    }

    sort(all(v));

    set<int> ans;

    if(n == 1)
    {
      cout << -1;
      return 0;
    }
    else if(n == 2)
    {
      int cd = v[1] - v[0];

      if(cd%2 == 0)
      {

        ans.insert((v[1] + v[0])/2);
      }

      ans.insert(v[0] - cd);
      ans.insert(v[1] + cd);

      cout << ans.size() << endl;
      for(auto i : ans)
      {
        cout << i << " ";
      }

      return 0;
    }


    map<int,int> mp;

    set<int> s;

    for(int i = 1; i < v.size(); i++)
    {
      s.insert(v[i]-v[i-1]);
      mp[v[i]-v[i-1]]++;
    }

    if(s.size() > 2)
    {
      cout << 0;
      return 0;
    }
    else if(s.size() == 1)
    {

      set<int> ans;
      int cd = *s.begin();

      ans.insert(v[0]-cd);
      ans.insert(v[n-1] + cd);
      cout << ans.size() << endl;
      
      for(auto i: ans)
      {
        cout << i << " ";
      }
      return 0;
    }



    int cd1 = *s.begin(); s.erase(cd1);int cd2 = *s.begin();

    //trace2(mp[cd1],mp[cd2]);
    if(mp[cd1] != 1 and mp[cd2] != 1)
    {
      cout << 0;
      return 0;
    }

    for(int i = 1; i < v.size(); i++)
    { 
      if((v[i] - v[i-1]) == cd2)
      {
        s.clear();
        bool ok = true;
        vector<int> v1;
        for(int j = 0; j <= i-1; j++)
        {
          v1.push_back(v[j]);
        }
        v1.push_back(v[i-1] + cd1);

        for(int j = i; j < v.size(); j++)
        {
          v1.push_back(v[j]);
        }
        sort(all(v1));

          for(int j = 1; j < v1.size(); j++)
        {
          s.insert(v1[j]-v1[j-1]);
        }
        if(s.size() !=1)
        {
          cout << 0;
          return 0;
        }

        cout << 1 << endl;
        cout << v[i-1] + cd1;
        return 0;
      }
    } 

    cout << 0;


  return 0;
} 