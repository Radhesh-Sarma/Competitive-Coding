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



int32_t main()
{


    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    IOS



    string s;
    cin >> s;


    map<int,int> mp;

    for(int i = 0; i < s.size(); i++)
    {
        mp[s[i]-'0']++;
    }


   set<int> ss;

   bool ok = false;
    if(s.size() == 1)
    {
        int sss = s[0] - '0';

        ok = (sss%8 == 0);
    }

    if(s.size() == 2)
    {
        int sss = 10*(s[0]-'0') + (s[1] - '0');
        int ssss = 10*(s[1]-'0') + (s[0] - '0');

        ok = (sss%8 == 0) or (ssss%8 == 0);
    }

   for(int i = 8; i < 1000; i += 8)
   {
        if(ok)break;
        bool ok2 = true;

        int x = i;

        while(x)
        {
            if(x%10 == 0)ok2 = false;
            x /= 10;
        }

        

        if(ok2)
        {
            int a = i%10;
            int b = (i/10)%10;
            int c = (i/100);
            map<int,int> mp1;
            mp1[a]++;
            mp1[b]++;
            mp1[c]++;

            if(mp[a] >= mp1[a] and mp[b] >= mp1[b] and mp[c] >= mp1[c])
            {
                ok = true;
                break;
            }
        }
   }

   if(ok)cout << "Yes";
   else cout << "No";





    return 0;
}
