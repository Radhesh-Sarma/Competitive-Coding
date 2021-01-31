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
       freopen("input.txt", "r", stdin);
       freopen("output.txt", "w", stdout);
        #endif



        int n;
        cin>>n;
        int arr[n],pre1[n],pre2[n];

        for(int i=0;i<n;i++)
        {
          cin>>arr[i];
          if(i==0)
          {
            pre1[i]=arr[i];
          }
          else
          {
            pre1[i]=pre1[i-1]+arr[i];
          
          }
        }

        sort(arr,arr+n);
        for(int i=0;i<n;i++)
        {
          if(i==0)
          {
            pre2[i]=arr[i];
          }
          else
          {
            pre2[i]=pre2[i-1]+arr[i];
          }
        }

        int q;
        cin>>q;
        while(q--)
        {
          int x,l,r;
          cin>>x>>l>>r;
          if(x==1)
          {
            if(l>1)
              cout<<pre1[r-1]-pre1[l-2];
            else
              cout<<pre1[r-1];
            
          }
          else
          {
            if(l>1)
              cout<<pre2[r-1]-pre2[l-2];
            else
              cout<<pre2[r-1];
          }
          cout<<endl;
        }
    return 0;
    
      
    }
    
  

  