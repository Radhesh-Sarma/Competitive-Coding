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





    int n;
    cin>>n;
    int arr[n];
    int a=0,b=0,c=0,d=0,e=0,f=0;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]==4)
        {
            a++;
        }
        else if(arr[i]==8)
        {
            b++;
        }
        else if(arr[i]==15)
        {
            c++;
        }
        else if(arr[i]==16)
        {
            d++;
        }
        else if(arr[i]==23)
        {
            e++;
        }
        else if(arr[i]==42)
        {
            f++;
        }


    }      

    int y=min({a,b,c,d,e,f});

     int k=n/6;
  
  
    


    a=0;
    b=0;
    c=0;
    d=0;
    e=0;
    f=0;

    for(int i=0;i<n;i++)
    {
        if(arr[i]==4)
        {
            a++;
        }
        else if(arr[i]==8 and a>=(b+1))
        {
            b++;
        }
        else if(arr[i]==15 and b>=(c+1))
        {
            c++;
        }
        else if(arr[i]==16 and c>=(d+1))
        {
            d++;
        }
        else if(arr[i]==23 and d>=(e+1))
        {
            e++;
        }
        else if(arr[i]==42 and e>=(f+1))
        {
            f++;
        }

    }
 
    cout<<n-6*min({a,b,c,d,e,f})<<endl;


    


    return 0;


   
}   