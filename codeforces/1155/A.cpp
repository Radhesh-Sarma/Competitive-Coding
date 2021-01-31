#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"


int32_t main()
{
IOS



    int n;
    cin>>n;
    string s;
    cin>>s;
    bool ok=false;
    for(int i=0;i<s.length()-1;i++)
    {
        int a=s[i];
        int b=s[i+1];
        if(a>b)
        {
            cout<<"YES"<<endl;
            cout<<i+1<<" "<<i+2;
            return 0;
        }
        
    }
    
    cout<<"NO";
          
            
    return 0;
    
      
    }
    