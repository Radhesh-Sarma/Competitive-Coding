#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
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




    int n;
    cin>>n;

    if(n==2)
    {
        cout<<1;
        return 0;

    }

    if(n==3)
    {
        cout<<1;
        return 0;
    }


    int arr[n+1],arr1[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
        arr1[i]=arr[i];
    }


        int ansindex=-1;

    sort(arr+1,arr+n+1);

    int d=(arr[n]-arr[1])/(n-2);

    set<int> s;

    for(int i=2;i<=n-1;i++)
    {
        s.insert(arr[i+1]-arr[i]);
    }

    if(s.size()==1)
    {
        ansindex=1;
        goto ab;
    }

    s.clear();

    for(int i=1;i<=n-2;i++)
    {
        s.insert(arr[i+1]-arr[i]);
    }

    if(s.size()==1)
    {
        ansindex=n;
        goto ab;
    }

    s.clear();
    for(int i=1;i<=n-1;i++)
    {
        s.insert(arr[i+1]-arr[i]);
    }

    if(s.size()>3)
    {
        cout<<-1;
        return 0;
    }
    if(s.size()==3)
    {
            vector<int> v;

        for(auto i:s)
        {
            v.PB(i);
        }
        sort(v.begin(),v.end());

            if((v[0]+v[1])!=v[2])
            {
                cout<<-1;
                return 0;
            }        
    }
    
    for(int i=1;i<=n-2;i++)
    {
        if(((arr[i]+d)!=arr[i+1]) and (arr[i]+d)==arr[i+2])
        {
            ansindex=i+1;

             goto ab;
        }
    }


    ab:

    if(ansindex==-1)
    {
        cout<<-1;
        return 0;
    }
    for(int i=1;i<=n;i++)
    {
        if(arr1[i]==arr[ansindex])
        {
            cout<<i;
            return 0;
        }
    }

    cout<<-1;
    return 0;
   
}   