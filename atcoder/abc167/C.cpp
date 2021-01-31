#include <bits/stdc++.h>
using namespace std;
  #define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
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


#define N 100005

int32_t main()
{



    IOS


    int n,m,x;
    cin >> n >> m >> x;


    int arr[n][m];
    int cost[n];




    for(int i = 0; i < n; i++)
    {
      cin >> cost[i];

      for(int j = 0; j < m; j++)
      {
        cin >> arr[i][j];
      }
    }


    // for(int i = 0; i < n; i++)
    // {
    //   for(int j = 0; j < m; j++)
    //   {
    //     cout << arr[i][j] << " " ;
    //   }
    //   cout << endl;
    // }


    // for(int i = 0; i < n; i++)
    // {
    //   cout << cost[i] << endl;
    // }


    
    int mincost = 1e9;

    for(int mask = 0; mask < (1 << (n)); mask++)
      {
        bool ok = true;
        int maskcost = 0;

        vector<int> v(m,0);

        for(int j = 0; j < n; j++)
        {
          if(mask&(1 << j))
          {
            maskcost += cost[j];

            for(int k = 0; k < m; k++)
            {
             // if(mask == 3)trace3(j,k,arr[j][k]);
              v[k] += arr[j][k];
            }
          }
        }

        for(int i = 0; i < m; i++)
        {
          //trace3(mask,i,v[i]);;

          if(v[i] < x)
          {
            ok = false;
          //  break;
          }
        }

        if(ok)
        {
          mincost = min(maskcost,mincost);
        }
      }


      if(mincost == 1e9)
      {
        mincost = -1;
      }


        cout << mincost << endl;
      

   
    return 0;
}