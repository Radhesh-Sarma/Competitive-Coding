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
// bool sortbysec(const pair<int,int> &a, 
//               const pair<int,int> &b) 
// { 
//         if(a.f !=b.f)
//         {
//           return (a.f>b.f);
//         }
//         else
//         {
//           return (a.s<b.s);
//         }
   
// } 



int32_t main()
{
IOS
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif


    int n;
    cin>>n;
    int arr[2*n];
    for(int i=0;i<n;i++)
    {
      cin>>arr[i];
    }
    for(int i=n;i<2*n;i++)
    {
      arr[i]=arr[i-n];
    }

    int ans=0;
    int ans1=0;
    bool ok=false;
    for(int i=0;i<2*n-2;i++)
    {
      if(arr[i]==1)
      {
        ok=true;
      }
      if(arr[i]==arr[i+1]&&(arr[i]==1))
      {
          ans1++;
      }
      else
      {
        ans1=1;
      }

      ans=max(ans1,ans);
    }
    if(ok==false)
    {
      cout<<0;
      return 0;
    }
    cout<<ans; 
    return 0;
    
      
    }
    
  

