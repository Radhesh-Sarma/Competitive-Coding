#include<bits/stdc++.h>
using namespace std;
#define ios ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
#define PB push_back
#define trace1(x)                cerr<<#x<<": "<<x<<endl
#define trace2(x, y)             cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
#define trace3(x, y, z)          cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
#define trace4(a, b, c, d)       cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl
#define trace5(a, b, c, d, e)    cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl
#define trace6(a, b, c, d, e, f) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<endl
#define MOD 1000000009


int32_t main()
{
    
ios 


int n;
cin>>n;
vector<int> s;

for(int i=1;i<=sqrt(n);i++)
{
   if(n%i==0)
   {
       s.PB(i);
       if((n/i)!=i)
        {
            s.PB(n/i);
        }
        
   }
}


sort(s.begin(),s.end(),greater<int>());
vector<int> v;

for(int i=2;i<=sqrt(n);i++)
{
    v.PB(i*i);
}


for(auto i:s)
{
    bool ok=false;
    
   for(auto j:v)
   {
       if(i%j==0)
       {
          ok=true;
          break;
          
       }
   }
   
   if(ok==false)
   {
       cout<<i;
       return 0;
   }

}

return 0;
 
 
}