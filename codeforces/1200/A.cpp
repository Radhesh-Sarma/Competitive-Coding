  #include<bits/stdc++.h>
  using namespace std;
  #define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  #define endl "\n"
  #define int long long
  #define all(v) v.begin(),v.end()
  #define rep(i,a,b) for(int i = a; i <=b; i++)
  #define rep2(i,a,b) for(int i = a; i>=b; i--)
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
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    IOS


    int n;
    cin>>n;

    string s;
    cin>>s;

    int left=0;
    int right=9;


    bool occ[10];

    for(int i=0;i<=9;i++)
    {
      occ[i]=false;
    }


    for(int i=0;i<s.length();i++)
    {
      if(s[i]=='L')
      {
        for(int j=0;j<=9;j++)
        {
          if(occ[j]==false)
          {
            occ[j]=true;
            break;
          }
        }
      }
      else if(s[i]=='R')
      {
        for(int j=9;j>=0;j--)
        {
          if(occ[j]==false)
          {
            occ[j]=true;
            break;
          }
        }
      } 
      else
      {
        int x=s[i]-'0';
        occ[x]=false;
      }
    }

    for(int i=0;i<=9;i++)
    {
      cout<<occ[i];
    }



    return 0; 
} 