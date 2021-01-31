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
       

      
      cases
      {
        int h,n;
        cin >> h >> n;
        int arr[n+1];

        rep(i,1,n)
        {
          cin >> arr[i];
        }

        int lvl = h;
        int ans = 0;
        int j = 2;
          int c = 50;

        while(lvl>2 and j<=n)
        {
        
          if(lvl == arr[j] + 1)
          {
            if(j == n)
            {
              ans++;
              lvl-=2;
            }
            else if(arr[j+1] < lvl -2)
            {
              ans++;
              lvl-=2;
            }
            else if(arr[j+1] == lvl-2)
            {
              lvl-=2;
            }

            while(j<=n and arr[j] >= lvl)
            {
              j++;
            }
          }
          else
          {
            lvl = arr[j] + 1;
          }
        }

        cout << ans << endl;
    }
    return 0;


}

