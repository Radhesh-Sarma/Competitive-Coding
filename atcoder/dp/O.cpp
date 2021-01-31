#include <bits/stdc++.h>
using namespace std;
  #define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  #define int long long
  #define endl "\n"
  const int N = 200005;


const int MOD = 1000000007;
int32_t main()
{



    IOS

    
    int n;
    cin >> n;

    vector<vector<int>> arr(n,vector<int>(n));

    vector<int> dp(1<<n);

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)cin >> arr[i][j];
    }


    dp[0] = 1;


    for(int mask = 0; mask < (1<<n)-1; mask++)
    {
        int x = __builtin_popcountll(mask);
        // pairing the xth men with jth women

        for(int j = 0;j < n; j++)
        {
            if((!arr[x][j]) or ((1<<j)&mask))
            {
                // if jth women is already assigned 
                // or if xth men and jth women are not compatible 
                continue;
            }

            int target = (mask |(1 << j));
            // target state is where jth bit is set

            dp[target] += dp[mask];
            dp[target] %= MOD;

        }
    }


    cout << dp[(1<<n)-1]%MOD;


















    
    return 0;
}

