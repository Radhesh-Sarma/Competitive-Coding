#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define SQ(a) (a)*(a)you
#define f first
#define s second
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

bool isprime(int n)
{
  if(n<=1)
  {
    return false;
  }
  if(n==2||n==3)
  {
    return true;
  }
  if(n%2==0||n%3==0)
  {
    return false;
  }
  for(int i=5;i<=sqrt(n);i+=2)
  {
    if(n%i==0)
    {
      return false;
    }
  }
  return true;
}
int32_t main()
{
  IOS
  
  #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif


int b,k;
cin>>b>>k;
int arr[k];
int numbofodds=0;
for(int i=0;i<k;i++)
{
  cin>>arr[i];
  if((arr[i]%2) ==1 && (i<(k-1))) 
  {
    numbofodds++;
  }
}

if(b%2==0)
{
  if((arr[k-1]%2)==0)
  {
    cout<<"even";
  }
  else
  {
    cout<<"odd";
  }
}
else 
{

if(numbofodds%2==0)
{

  if((arr[k-1]%2)==0)
  {
    cout<<"even";
  }
  else
  {
    cout<<"odd";
  }
}

else
{
if((arr[k-1]%2)==0)
  {
    cout<<"odd";
  }
  else
  {
    cout<<"even";
  }
}

}
return 0;

}