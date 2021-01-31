#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"


int32_t main()
{
IOS



          int n,x,y;
          cin>>n>>x>>y;
          string s;
            cin>>s;
            int ans=0;
           string ss;
           
           for(int i=n-x;i<s.length();i++)
           {
               ss.push_back(s[i]);
           }
                
             
                
                for(int i=0;i<ss.length()-1-y;i++)
                {
                    if(ss[i]!='0')
                    {
                        ans++;
                    }
                }
          
                for(int i=ss.length()-y;i<ss.length();i++)
                {
                    if(ss[i]!='0')
                    {
                        ans++;
                    }
                }
                
                
                if(ss[ss.length()-y-1]!='1')
                {
                    ans++;
                }
                
            cout<<ans;
    return 0;
    
    
      
    }
    