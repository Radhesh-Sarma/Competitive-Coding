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


    cases 
    {

      int n,m,k;
      cin>>n>>m>>k;
      int h[n+1];

      for(int i=1;i<=n;i++)
      {
        cin>>h[i];
      }

      int blocks=m;
      bool ok=true;
      for(int i=1;i<=n-1;i++)
      {
        if(abs(h[i]-h[i+1])<=k)
        {
          blocks+=(h[i]-max(h[i+1]-k,0LL));
        }
        else
        {
          if(h[i]<=h[i+1])
          {
            if(blocks>=1)
            {
              if(blocks>=(h[i+1]-h[i]-k))
              {
                blocks-=(h[i+1]-h[i]-k);
              }
              else
              {
                ok=false;
                break;
              }
            }
            else
            {
              ok=false;
              break;
            }

          }
          else if(h[i]>h[i+1])
          {
            blocks+=(h[i]-max(0LL,h[i+1]-k));
          }
        }
      }

      if(ok)
      {
        cout<<"YES";
      }
      else
      {
        cout<<"NO";
      }

      cout<<endl;
    }



    return 0; 
} 