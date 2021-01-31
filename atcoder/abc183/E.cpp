#include <bits/stdc++.h>
using namespace std;
  #define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  #define int long long
  #define endl "\n"
  #define all(v) v.begin(),v.end()
  #define double long double
  #define trace1(x)                cerr<<#x<<": "<<x<<endl
  #define trace2(x, y)             cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
  #define trace3(x, y, z)          cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
  #define trace4(a, b, c, d)       cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl
  #define trace5(a, b, c, d, e)    cerr<<#a<<": "<<a<<" | "<<#b<< ": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl
  #define trace6(a, b, c, d, e, f) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<endl
  #define cases int testcases;cin>>testcases; while(testcases--)
  const int N = 2005;
  #define rep(i, x, y)   for (__typeof(x) i = x; i <= y; i ++)
  #define repi(i, x, y)  for (__typeof(x) i = x; i >= y; i --)


int dp[N][N];
char arr[N][N];
    int diagprefix[N][N];

    int h,w;

const int mod = 1000000007;


int32_t main()
{


    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    IOS




    cin >> h >> w;


    for(int i = 1; i <= h; i++)
    {
        for(int j = 1; j <= w; j++)
        {
            cin >> arr[i][j];
        }
    }

    dp[1][1] = 1;


    vector<int> vprefix(w+1);
  



    for(int i = 1; i <= h; i++)
    {
        vector<int> hprefix(w+1);

        for(int j = 1; j <= w; j++)
        {
           

            if(arr[i][j] == '#')
            {
                // trace2(i,j);

                dp[i][j] = 0;
                hprefix[j] = 0;
                vprefix[j] = 0;

                continue;
            }


            dp[i][j] += hprefix[j-1]%mod;
            dp[i][j]%=mod;

            // if(i == 2)trace2(j,vprefix[j]);

            dp[i][j] += vprefix[j]%mod;
            dp[i][j] %= mod;
            // if(i == 2 and j == 1 )trace3(dp[i][j],vprefix[j],hprefix[j-1]);

            dp[i][j] += diagprefix[i-1][j-1]%mod;
            dp[i][j] %=mod;

            // vprefix[j] += dp[i][j]%mod;

            // dp[i][j] %= mod;
            hprefix[j] += (hprefix[j-1]%mod + dp[i][j]%mod)%mod;
            hprefix[j] %= mod;


            

            vprefix[j] += (dp[i][j]%mod)%mod;
            // if(i == 1 and j == 1)trace2(dp[i][j],vprefix[j]);

            diagprefix[i][j] = (diagprefix[i-1][j-1]%mod + dp[i][j]%mod)%mod;
            diagprefix[i][j] %= mod;


            
        }
        // if(i == 1)
        // {
        //     for(auto kk : vprefix)
        //     {
        //         trace1(kk);

        //     }
        // }
    }


    // for(int i = 1; i <= w; i++)
    // {
    //     trace2(i,vprefix[i]);
    // }


    // for(int i = 1; i <= h; i++)
    // {
    //     for(int j = 1; j <= w; j++)
    //     {
    //         cerr << dp[i][j] << " ";
    //     }

    //     cerr << endl;
    // }
    

    cout << dp[h][w]%mod << endl;

    // for(int i = 1; i <= w; i++)
    // {
    //     cout << vprefix[i] << endl;
    // }

    return 0;   
}
