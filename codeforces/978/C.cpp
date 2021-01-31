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
int binarysearch(int pre[],int l,int h,int k)
{
  while(l<h)
  {
    int mid=l+(h-l)/2;

    if(pre[mid]>=k)
    {
      h=mid;
    }
    else
    {
      l=mid+1;
    }
  }
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


int n,q;
cin>>n>>q;
int arr[n],pre[n];
for(int i=0;i<n;i++)
{
  cin>>arr[i];
  if(i==0)
  {
    pre[i]=arr[i];
  }
  else
  {
    pre[i]=pre[i-1]+arr[i];
  }
}

for(int i=0;i<n;i++)
{
  trace1(pre[i]);
}

while(q--)
{
  int x;
  cin>>x;
  int ans=binarysearch(pre,0,n-1,x)+1;
  int ans2;
  if(ans==1)
  {
    ans2=x;
  }
  else
      ans2=x-pre[ans-2];

  cout<<ans<<" "<<ans2<<endl;


}

return 0;
}