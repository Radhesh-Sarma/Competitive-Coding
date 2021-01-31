#include <bits/stdc++.h>
using namespace std;
  #define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  #define int long long
  #define endl "\n"
  #define all(v) v.begin(),v.end()
  #define double long double
  #define trace1(x)                cerr<<#x<<": "<<x<<endl
  #define trace2(x, y)             cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
  #define trace3(x, y, z)          cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
  #define trace4(a, b, c, d)       cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl
  #define trace5(a, b, c, d, e)    cerr<<#a<<": "<<a<<" | "<<#b<< ": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl
  #define trace6(a, b, c, d, e, f) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<endl
  #define cases int testcases;cin>>testcases; while(testcases--)
  const int N = 200005;

   int zero,one,two;

int32_t main()
{


    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    IOS



    string s;
    cin >> s;

    int sum = 0;


    for(int i = 0;i < s.size(); i++)
    {
        int x = s[i] - '0';
        sum += x%3;

        if(x % 3 == 0)zero++;
        else if(x%3 == 1)one++;
        else two++;
    }

    sum %= 3;

    if(sum == 0)
    {
        cout << 0 << endl;
        return 0;
    }

   if(sum == 1)
   {
        if(one> 0 and s.size() - 1 != 0)
        {
            cout << 1 << endl;
            return 0;
        }

        if(two > 1 and s.size() - 2 != 0)
        {
            cout << 2 << endl;
            return 0;
        }

        cout << -1 << endl;
   }

   if(sum == 2)
   {
        if(two > 0 and s.size() - 1 != 0)
        {
            cout << 1 << endl;
            return 0;
        }
        if(one > 1 and s.size() - 2 != 0)
        {
            cout << 2 << endl;
            return 0;
        }
        cout << -1 << endl;
   }







    return 0;
}
