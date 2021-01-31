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
  for(int i=5;i<=sqrt(n);i++)
  {
    if((n%i)==0)
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
    
int n;
cin>>n;

if(isprime(n))
{
  cout<<1<<endl<<n;
  return 0;
}
else
{

int i;
for(i=n-2;i>=1;i--)
{
  if(isprime(i))
  {
    
    break;
  }
}

int k=n-i;
if(isprime(k))
{
  trace2(i,k);
  cout<<2<<endl<<i<<" "<<k;
  return 0;
}
for(int l=2;l<=k;l++)
{
  if(isprime(l)&&isprime(k-l))
  {
    cout<<3<<endl<<i<<" "<<l<<" "<<k-l;
    return 0;
  }
}




}

return 0;
}