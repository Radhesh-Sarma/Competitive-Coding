#include <bits/stdc++.h>
using namespace std;
  #define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds; 
  #define int long long
  #define endl "\n"
  const int N = 200005;
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>



int32_t main()
{



    IOS

    int h1,m1,h2,m2,k;
    cin >> h1 >> m1 >> h2 >> m2 >> k;


    int x = k/60;
    int y = k%60;


    h2-=x;
    m2 -= y;

    if(m2 < 0)
    {
    m2 += 60;
         h2--;
    }


    if(h2 > h1)
    {
        cout << (h2-h1-1)*60 + 60-m1 + m2;
    }
    else if(h2 == h1)
    {
        cout << max(0LL,m2-m1);
    }
    else
    {
        cout << 0;
    }
 




    return 0;
}