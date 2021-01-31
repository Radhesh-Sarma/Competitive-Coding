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

 vector<vector<int>> t;

int fun(vector<int> &v)
{
    int time = 0;


    time += t[0][v[0]-1];
    

    time += t[v[v.size()-1]-1][0];

    for(int i = 0; i + 1< v.size(); i++)
    {
        time += t[v[i]-1][v[i+1]-1];
        // trace4(i,v[i]-1,v[i+1]-1,t[v[i]-1][v[i+1]-1]);
    }

    return time;
}
int32_t main()
{


    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    IOS



    vector<int> v;


    int n, k;
    cin >> n >> k;


   

    for(int i = 0; i < n; i++)
    {
        vector<int> v1;
     

        for(int j = 0; j < n; j++)
        {
               int x;
        cin >> x;
            v1.push_back(x);
        }

        t.push_back(v1);
    }


    vector<int> v1 ;

   

    for(int i = 2; i <= n; i++)
    {
        v1.push_back(i);
    }

    int ans = 0;

    if(fun(v1) == k)ans++;

    while(next_permutation(all(v1)))if(fun(v1) == k)ans++;


    cout << ans;





    return 0;
}
