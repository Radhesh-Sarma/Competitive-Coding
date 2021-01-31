#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int32_t main()
{

IOS


int n,m;
cin>>n>>m;
if((m>=(n-1))&&(m<=(2*n+2)))
{
 
if((n-1)==m||(n==m))
{
    int k=min(n,m);
    for(int i=0;i<k;i++)
    {
        cout<<"01";
    }
    if((n-1)==m)
    {
        cout<<0;
    }
    
    return 0;
}

if((m==(2*n))||(m==(2*n+1))||(m==(2*n+2)))
{
      int k=min(n,m);
    for(int i=0;i<k;i++)
    {
        cout<<"110";
    }
    if(m==(2*n+1))
    {
        cout<<"1";
    }
    if(m==(2*n+2))
    {
        cout<<"11";
    }
    
}
else
{
    int k=m-n;
    for(int i=0;i<k;i++)
    {
        cout<<"110";
    }
    for(int i=0;i<(2*n-m);i++)
    {
        cout<<"10";
    }
    
    
    
}


}
else
{
    cout<<-1;
    return 0;
}
    return 0;
    
    
}