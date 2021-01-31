#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
#define f first
#define s second
#define PB push_back
#define MP make_pair
#define db long double
#define trace1(x)                cerr<<#x<<": "<<x<<endl
#define trace2(x, y)             cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
#define trace3(x, y, z)          cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
#define trace4(a, b, c, d)       cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl
#define trace5(a, b, c, d, e)    cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl
#define trace6(a, b, c, d, e, f) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<endl
#define cases int testcases;cin>>testcases; while(testcases--)

int32_t main()
{
  
  

  #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
    #endif

       
      int n;
      cin>>n;
      int arr[n];

      for(int i=0;i<n;i++)
      {
        cin>>arr[i];
      }


      int i=0;
      int j=n-1;

      vector<char> v;
      int k=-1;


      while(i<=j)
      {

        
            if(k==-1)
            {
                if(arr[i]<arr[j])
                {
                    v.PB('L');
                    k=i;
                    i++;
                }
                else
                {
                    v.PB('R');
                    k=j;
                    j--;
                }
            }
            else
            {
                if(arr[k]<arr[i] && arr[k]<arr[j])
                {
                    if(arr[i]<arr[j])
                    {
                        v.PB('L');
                        k=i;
                        i++;
                    }
                    else
                    {
                        v.PB('R');
                        k=j;
                         j--;
                    }
                } 
                else if(arr[k]>arr[i] && arr[k]<arr[j])
                {
                     v.PB('R');
                     k=j;
                     j--;
                }  
                else if(arr[k]<arr[i] && arr[k]>arr[j])
                {
                     v.PB('L');
                        k=i;
                        i++;
                } 
                else
                {
                    break;
                } 

            }
      }

      cout<<v.size()<<endl;
      for(auto i:v)
      {
        cout<<i;
      }

    return 0;
   
}   