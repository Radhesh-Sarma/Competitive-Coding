#include <bits/stdc++.h>
using namespace std;
  #define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  #define int long long
  #define endl "\n"
  const int N = 50;


int n,a,b;

int fun(int x)
{
  return (a*x)/b - a *(x/b);
}

int32_t main()
{



    IOS

    cin >> a >> b >> n;
    

    cout << fun(min(n,b-1));


    return 0;
}

