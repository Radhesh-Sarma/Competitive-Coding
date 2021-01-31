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
        map<int,int> mp;
       for(int i=0;i<n;i++)
       {
        cin>>arr[i];
        mp[arr[i]]++;
       }

       for(auto i:mp)
       {
        if(i.s>=3)
        {
          cout<<"NO";
          return 0;
        }
        
       }
       cout<<"YES"<<endl;
        vector<int> ans1;
        vector<int> ans2;

       for(auto i:mp)
       {
        if(i.s==1)
        {
          ans1.PB(i.f);
        }
        else
        {
          ans1.PB(i.f);
          ans2.PB(i.f);
        }
       }
        reverse(ans2.begin(),ans2.end());
       cout<<ans1.size()<<endl;
       for(auto i:ans1)
       {
        cout<<i<<" ";
       }

       cout<<endl;
       cout<<ans2.size()<<endl;
       for(auto i:ans2)
       {
        cout<<i<<" ";
       }
    




      return 0;
      }
   

     