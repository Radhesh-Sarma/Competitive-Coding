#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
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
#define cases int testcases;cin>>testcases; while(testcases--)
#define limit 4294967295
int32_t main()
{
IOS

      

    string str;
    int val=0,x=0;
    stack<long long> stck;
    int n;
    cin>>n;

    for(int i=0;i<n;i++) 
    {
        
        cin>>str;    
        if(str=="for")
         {
            cin>>val;
            int curr=val;
            if (!stck.empty())
             {
                if (stck.top() == -1) 
                {
                    curr=-1;
                } 
                else
                 {
                    curr*=stck.top(); 
                }
            }
            
            if(curr>limit) 
            {
                curr=-1; 
            }
            
            stck.push(curr);
        }
        if (str=="end") 
        {
            stck.pop();
        }
        if (str=="add") 
        {
            if (stck.empty()) 
            {
                x++;
                continue;
            }
            if (stck.top() == -1) 
            {
                cout << "OVERFLOW!!!";
                return 0;
            }
            x+=stck.top();   
        }
    }
    
        if(x>limit)
        {
            cout << "OVERFLOW!!!";
             return 0;
        }
        
    cout<<x;
    
    return 0;
}