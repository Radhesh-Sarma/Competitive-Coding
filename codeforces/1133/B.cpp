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
int contotime(string s)
{
  return 600*(s[0]-'0')+60*(s[1]-'0')+10*(s[3]-'0')+(s[4]-'0');
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



int n,k;
cin>>n>>k;
int arr[k]={0};
for(int i=0;i<n;i++)
{
  int x;
  cin>>x;
  arr[(x%k)]++;
}
// for(int i=0;i<k;i++)
// {
//   cerr<<arr[i]<<" ";
// }

int ans=0;
if(arr[0]%2==0)
{
  ans+=arr[0];
}
else
{
  ans+=arr[0]-1;
}


//trace1(ans);
int i=1,j=k-1;

while(i<j)
{
  //trace4(i,arr[i],j,arr[j]);
  ans+=min(arr[i],arr[j])*2;
  i++;
  j--;
}
if(k%2==0)
{
//trace1(arr[k/2]);
  if(arr[k/2]%2==0)
  {
    ans+=(arr[k/2]);
  }
  else
  {
    ans+=(arr[k/2]-1);
  }
}
cout<<ans;

    return 0;
    
}