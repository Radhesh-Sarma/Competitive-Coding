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

    IOS



    int n;
    cin >> n;

    vector<int> v(n);

    for(int i = 0; i < n; i++)cin >> v[i];



    int money = 1000;


    stack<int> q;

    int buy = 0,sell = 0;

    int stocks = 0;

    for(int i = 0; i < n; i++)
    {
      // if(i == 4)
      // {
      //   trace2(q.front(),v[i]);
      // }
    //  trace1(i);
     // trace3(1,money,stocks);

      if(q.empty())
      {
        q.push(v[i]);
        buy = v[i];
        int k = money/buy;
        stocks += k;
        money-=k*buy;
      }
      else if(q.top() <=v[i])
      {
        q.push(v[i]);
      }
      else
      {
        sell = q.top();
      //  trace1(sell);
        money += sell*stocks;
       // trace1(money);
        stocks = 0;
        while(!q.empty())q.pop();

        q.push(v[i]);
        buy = v[i];
       // trace1(buy);
        int k = money/buy;
        stocks += k;
        money-=k*buy;

       // trace2(stocks,money);
      }
     // trace3(2,money,stocks);
    }

    if(!q.empty())
    {
      money += v[v.size()-1]*stocks;
    }

    cout << money;








    return 0;
}
