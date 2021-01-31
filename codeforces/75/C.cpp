#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define SQ(a) (a)*(a)you
// #define f first
// #define s second
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
int binarysearch(vector<int> arr,int l,int h,int k)
{
  while(l<h)
  {
     int mid=l+(h-l+1)/2;

     if(arr[mid]>k)
     {
      h=mid-1;
     }
     else
     {
      l=mid;
     }
  }
  //trace1(l);
  return l;
 
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
int a,b;
cin>>a>>b;
int c=__gcd(a,b);
vector<int> v;
for(int i=1;i<=sqrt(c);i++)
{
  if(c%i==0)
  {
    if((c/i)!=i)
    {
      v.PB(i);
      v.PB(c/i);
    }
    else
    {
      v.PB(i);
    }
  }
}
sort(v.begin(),v.end());

int q;
cin>>q;
while(q--)
{
  int low,high;
  cin>>low>>high;
  int a=v.size();
  int x=binarysearch(v,0,a-1,low);
  int y=binarysearch(v,0,a-1,high);
  //trace2(x,y);
  if(low>v[a-1] || high<v[0])
  {
    cout<<-1<<endl;
  }
  else if(x!=y)
  {
    cout<<v[y]<<endl;
  }
  else if(v[x]<low)
  {
    cout<<-1<<endl;
  }
  else
  {
    cout<<v[x]<<endl;
  }



}

return 0;
}