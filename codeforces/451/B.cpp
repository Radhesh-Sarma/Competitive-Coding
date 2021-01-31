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

int arr[1001];


// bool check(db d)
// {

// }
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
        vector<int> v;

        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            v.PB(x);
        }

        vector<int> v1=v;
        vector<int> v2;

        sort(v1.begin(),v1.end());
        v2=v1;
        reverse(v2.begin(),v2.end());

        if(v==v1)
        {
            cout<<"yes\n1 1";
            return 0;
        }
        else if(v==v2)
        {
            cout<<"yes\n1 "<<n;
            return 0;
        }
            vector<int> v3;

        for(int i=0;i<n-1;i++)
        {
            if(v[i]>v[i+1])
            {
                v3.PB(i);
            }
        }

        int i=v3[0];
        int j=v3[v3.size()-1]+1;

        reverse(v.begin()+i,v.begin()+j+1);
        trace2(i,j);
        if(v==v1)
        {
            cout<<"yes\n"<<i+1<<" "<<j+1;
            return 0;
        }
        
            cout<<"no";


            

return 0;
}