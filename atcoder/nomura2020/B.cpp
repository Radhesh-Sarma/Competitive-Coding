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


    string s;
    cin >> s;

    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == '?')cout << 'D';
        else cout << s[i];
    }
    




    return 0;
}