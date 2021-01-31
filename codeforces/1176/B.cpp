#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int unsigned long long
#define all(v) v.begin(),v.end()
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
#define mod 1000000007


int32_t main()
{
  
    IOS

  #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
    #endif




    cases
    {



      
            int n;
            cin>>n;
            int ans=0,ans1=0,ans2=0;

            for(int i=0;i<n;i++)
            {
                int x;
                cin>>x;
                if(x%3==0)
                {
                    ans++;
                }
                else if(x%3==1)
                {
                    ans1++;
                }
                else if(x%3==2)
                {
                    ans2++;
                }
            }

            int a=min(ans1,ans2);
            ans+=a;
            ans1-=a;
            ans2-=a;
            ans+=(ans1/3 + ans2/3);
            cout<<ans<<endl;


    }


    return 0;


   
}   