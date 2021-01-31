#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int32_t main()
{
IOS

set<int> s;
int i=1,j=1;
int inf=1000000000;
while(i<inf)
{
    j=1;
    //cout<<i<<" "<<j<<endl;
    while(j<inf)
    {
        if((i*j)<inf)
        {
            s.insert((i*j));
        }
        else
        {
            break;
        }
        j*=3;
    }
    i*=2;
}

int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}

int ggcd=arr[0];
for(int i=1;i<n;i++)
{
    ggcd=__gcd(ggcd,arr[i]);
}

for(int i=0;i<n;i++)
{
    int a=arr[i]/ggcd;
    //cout<<a<<" ";
    if(s.count(a)==0)
    {
        cout<<"No";
        return 0;
    }
    
}
cout<<"Yes";

    return 0;
}