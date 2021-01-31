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

const double EPS = 1e-8;

double fun(int x1,int y1,int x2,int y2,int x3,int y3)
{
    int sum = x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y2);

    return (double ) abs(sum) / 2.0;
}
int32_t main()
{


    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    IOS


    
    vector<int> v1,v2;

    int n;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        int x,y;
        cin >> x >> y;
        v1.push_back(x);
        v2.push_back(y);
    }

    bool ok = false;

    for(int i = 0; i < n; i++)
    {
        if(ok)break;
        for(int j = i + 1; j < n; j++)
        {
            if(ok)break;
            for(int k = j + 1; k < n; k++)
            {
                if(fun(v1[i],v2[i],v1[j],v2[j],v1[k],v2[k]) == 0)
                {
                    ok = true;
                    break;
                }
            }
        }
    }


    if(ok)cout << "Yes";
    else cout << "No";






    return 0;
}
