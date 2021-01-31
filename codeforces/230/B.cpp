#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    bool prime[1000001];
    
    memset(prime,true,1000001);
    
    prime[0]=prime[1]=false;

    for(int i=2;i*i<1000001;i++)
    {
        if(prime[i]==true)
        {
            for(int j=i*i;j<=1000001;j=j+i)
            {
                prime[j]=false;
            }
        }
    }
    
    
    ll t,y;
    cin>>t;
    
    while(t>0)
    {
        ll x;
        cin>>x;
        
        
        if(ceil(sqrt(x))==floor(sqrt(x)))
        {
       
                    ll y=sqrt(x);
                   
                    
                    
                    
                    if(prime[y]==true)
                    
                    {
                        cout<<"YES"<<endl;
                    }
                    
                    else
                    {
                        cout<<"NO"<<endl;
                        
                    }
                    
        
        }
        
        else
        {
            cout<<"NO"<<endl;
            
            
        }
        
        
        t--;
    }
    return 0;
}