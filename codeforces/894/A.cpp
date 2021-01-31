 #include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long 
#define SQ(a) (a)*(a)
#define PB push_back
#define MP make_pair
#define db long double
#define all(a) a.begin(), a.end()
#define trace1(x)                cerr<<#x<<": "<<x<<endl
#define trace2(x, y)             cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
#define trace3(x, y, z)          cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
#define trace4(a, b, c, d)       cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl
#define trace5(a, b, c, d, e)    cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl
#define trace6(a, b, c, d, e, f) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<endl
#define MOD 1000000007


int32_t main()
{
    
    IOS
    
    
    string s;
    cin>>s;
    int ans=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='Q')
        {
            
        
        for(int j=i+1;j<s.length();j++)
        {
            if(s[j]=='A')
            {
                for(int k=j+1;k<s.length();k++)
                {
                    if(s[k]=='Q')
                    {
                        ans++;
                    }
                }
            }
        }
        
        }
    }
    
    cout<<ans;
    return 0;
    
}

