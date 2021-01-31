#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    
    
    if(abs(a-c)<=d)
    {
        cout<<"Yes"<<endl;
        return 0;
        
    }
    else if(abs(a-b)<=d&&abs(b-c)<=d)
    {
        cout<<"Yes"<<endl;
        return 0;
        
    }
    
    cout<<"No";
    
    return 0;
}