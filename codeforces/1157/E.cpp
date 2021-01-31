#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
int32_t main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    multiset<int> mp;
    int x;
    for(int i = 0; i < n; i++)
    {
        cin >> x;
        mp.insert(x);
    }
    for(int i = 0; i < n; i++)
    {
        auto it = mp.lower_bound((n - a[i]) % n);
        if(it != mp.end())
        {
            cout << (a[i] + *it) % n << " ";
            mp.erase(it);
        }
        else
        {
            it = mp.begin();
            cout << (a[i] + *it) % n << " ";
            mp.erase(it);
        }
    }
    return 0;
}