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

    vector<int> v;

    int sum = 0;

    bool ok = false;
    for(int i = 1; i <= n; i++)
    {
      int x;
      cin >> x;
      sum += x;

      v.PB(x);
      if(x == 0) ok = true;
        
    }

    if(!ok)
    {
      cout << -1;
      return 0;
    }

    ok = false;

    sort(all(v),greater<int>());

    vector<int> one;
    vector<int> two;



    for(int i = v.size()-1; i >=0; i--)
    {
      if(v[i]%3 == 1)one.PB(i);
      else if(v[i]%3 == 2)two.PB(i);
    }





    set<int> nt;

    if(sum %3 == 0)
    {
      if(sum == 0)
      {
        cout << 0;
        return 0;
      }
      for(auto i:v)
      {
        cout << i;
      }
      return 0;
    }
    else if(sum %3 == 1)
    {
      if(one.size() > 0)
      {
        nt.insert(one[0]);
        ok = true;
      }
      else if(two.size() > 1)
      {
        nt.insert(two[0]);
        nt.insert(two[1]);
        ok = true;
      }
    }
    else
    { 
      if(two.size() > 0)
      {
        nt.insert(two[0]);
        ok = true;
      }
      else if(one.size() > 1)
      {
        nt.insert(one[0]);
        nt.insert(one[1]);
        ok = true;
      }
    }


    if(ok)
    {

      for(int i = 0 ; i < v.size(); i++)
      {
        if(nt.count(i))
        {
          sum -=v[i];
        }
      }


      if(sum == 0)
      {
        cout << 0;
      }
      else
      {
        for(int i = 0 ; i < v.size(); i++)
      {
        if(!nt.count(i))
        {
          cout << v[i];
        }
      }
      }
    }
    else
    {
      cout << -1;
      return 0;
    }



  return 0;
} 