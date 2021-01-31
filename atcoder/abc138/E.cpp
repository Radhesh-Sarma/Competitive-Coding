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
  #define double long double
  #define trace1(x)                cerr<<#x<<": "<<x<<endl
  #define trace2(x, y)             cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
  #define trace3(x, y, z)          cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
  #define trace4(a, b, c, d)       cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl
  #define trace5(a, b, c, d, e)    cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl
  #define trace6(a, b, c, d, e, f) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<endl
  #define cases int testcases;cin>>testcases; while(testcases--)
  #define MOD 998244353
  #define N 200005
  #define INF 1000000000000
  #define eps 1e-6
  int arr[26];

  set<int> pos[26];

int32_t main()
{

    IOS

  
    string s,t;
    cin >> s >> t;


    for(int i = 0; i < s.length(); i++)
    {
      arr[s[i]-'a']++;
    }

    for(int i = 0; i < t.length(); i++)
    {
      if(arr[t[i] - 'a'] == 0)
      {
        cout << -1;
        return 0;
      }
    }


    for(int i = 0;i < s.length(); i++)
    {
      pos[s[i]-'a'].insert(i);
    }

    int prev = -1;

    int ans = 0;


    for(int i = 0; i < t.length(); i++)
    {
        auto it = pos[t[i]-'a'].upper_bound(prev);
        if(it == pos[t[i]-'a'].end())

        {
          it = pos[t[i]-'a'].begin();
          ans+= (s.length() - prev + *it );
          //trace1(s.length() - prev + *it);

        }
        else
        {
            ans += (*it- prev);
            //trace2(*it,prev);
        }
        prev = *it;
    }
    cout << ans  << endl;


	return 0;
}