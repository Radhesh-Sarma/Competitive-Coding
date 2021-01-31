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
int arr[n],left[n];
for(int i=0;i<n;i++)
{
  cin>>arr[i];
  if(i==0)
  {
    left[0]=arr[0];

  }
  else
  {
    left[i]=left[i-1]+arr[i];
  }

}

// for(int i=0;i<n;i++)
// {
//   cerr<<arr[i]<<" ";
// }
// cerr<<endl;

// for(int i=0;i<n;i++)
// {
//   cerr<<left[i]<<" ";
// }
// cerr<<endl;
int right[n];

for(int i=0;i<n;i++)
{
  right[i]=left[n-1]-left[i];
}
reverse(right,right+n);
// for(int i=0;i<n;i++)
// {
//   cerr<<right[i]<<" ";
// }
// cerr<<endl;

int ans=0;

for(int i=0;i<n;i++)
{
  //trace3(i,left[i],n-i-1);
  if(binary_search(right,right+n-i,left[i]))
  {    
    //trace2(left[i],i);
    ans=max(ans,left[i]);
  }

}
cout<<ans;

return 0;

}
