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
  #define mod 1000000007 



  int32_t main()
  {
  IOS
         


          #ifndef ONLINE_JUDGE
         freopen("input.txt", "r", stdin);
         freopen("output.txt", "w", stdout);
          #endif

              

            int n;
            cin>>n;
            int arr[n];
            vector<int> o;
            vector<int> e;
            for(int i=0;i<n;i++)
            {
              cin>>arr[i];
              if(arr[i]%2==0)
              {
                e.PB(arr[i]);
              }
              else
              {
                o.PB(arr[i]);
              }
            }
              sort(o.begin(),o.end());
              sort(e.begin(),e.end());
         int a=abs((int)(e.size()-o.size()));

         if(a==0||a==1)
         {
          cout<<0;
          return 0;
         }

        if(o.size()<e.size())
        {
            int ans=0;
            for(int i=0;i<e.size()-o.size()-1;i++)
            {
              ans+=e[i];
            }
            cout<<ans;
            return 0;
        }
        else
        {
          int ans=0;
            for(int i=0;i<o.size()-e.size()-1;i++)
            {
              ans+=o[i];
            }
            cout<<ans;
            return 0;
        }

      return 0;
      }
   

     