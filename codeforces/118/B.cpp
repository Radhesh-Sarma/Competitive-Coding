#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl "\n"
#define SQ(a) (a)*(a)
#define f first
#define s second
#define PB push_back
#define MP make_pair
#define db long double
#define all(a) a.begin(), a.end()
#define cases int testcases;cin>>testcases; while(testcases--)
#define trace1(x)                cerr<<#x<<": "<<x<<endl
#define trace2(x, y)             cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
#define trace3(x, y, z)          cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
#define trace4(a, b, c, d)       cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl
#define trace5(a, b, c, d, e)    cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl
#define trace6(a, b, c, d, e, f) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<endl
#define MOD 1000000007
int32_t main()
{
  IOS
   int n;

    cin >> n;

    for (int i=0; i<=n; i++)
    {
        int c=0;
        for (int j=i; j<n; j++)
        {
            cout << " " << " ";
        }
        for (int j=0; j<=i; j++)
        {
            if (c+1==2*i+1)
                cout << j << endl;
            else
                cout << j << " ";
            c++;
        }
        for (int j=i-1; j>=0; j--)
        {
            if (c+1==2*i+1)
                cout << j << endl;
            else
                cout << j << " ";
            c++;
        }
    }
    for (int i=n-1; i>=0; i--)
    {
        int c=0;
        for (int j=i; j<n; j++)
        {
            cout << " " << " ";
        }
        for (int j=0; j<=i; j++)
        {
            if (c+1==2*i+1)
                cout << j << endl;
            else
                cout << j << " ";
            c++;
        }
        for (int j=i-1; j>=0; j--)
        {
            if (c+1==2*i+1)
                cout << j << endl;
            else
                cout << j << " ";
            c++;
        }
    }


return 0;


}