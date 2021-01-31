#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long

int32_t main()
{
    int n;
    cin >> n;
    string s; 
    cin >> s;
    
    map<char,int> mp;
    
    for(int i = 0; i < s.length(); i++)
    {
        mp[s[i]]++;
    }
    
    int a = min({mp['o'],mp['n'],mp['e']});
    mp['o'] -= a;
    mp['e'] -= a;
    
    int b  = min({mp['z'],mp['e'],mp['r'],mp['o']});
    
    while(a--)
    {
        cout << "1 "; 
    }
    
    while(b--)
    {
        cout << "0 ";
    }
    return 0;
}
