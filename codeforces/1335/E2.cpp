  //Keep Working Hard
  // I__Like__Food  
  #include<bits/stdc++.h>
  #define rep(i,a,b) for(int i = a; i <=b; i++)
  #define rep2(i,a,b) for(int i = a; i>=b; i--)
  using namespace std;
  #define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  #define endl "\n"
  #define all(v) v.begin(),v.end()
  #define PB push_back
  #define MP make_pair
  #define double long double
  #define f first
  #define s second
  #define trace1(x)                cerr<<#x<<": "<<x<<endl
  #define trace2(x, y)             cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
  #define trace3(x, y, z)          cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
  #define trace4(a, b, c, d)       cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl
  #define trace5(a, b, c, d, e)    cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl
  #define trace6(a, b, c, d, e, f) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<endl
  #define cases int testcases;cin>>testcases; while(testcases--)
  const int N = 200005;

int freq[N][201];
int arr[N];

int32_t main()
{



    cases
    {
      int n;
      cin >> n;
      map<int,int> mp;
      vector<int> v[201];
      int ans = 1;
      for(int i = 1; i <= n; i++)
      {
        cin >> arr[i];
        mp[arr[i]]++;
        v[arr[i]].PB(i);

        for(int j = 1; j <= 200; j++)
        {
          freq[i][j] = freq[i-1][j] + bool(j == arr[i]);
        }
      }

      for(auto i : mp)
      {
        ans = max(ans,i.s);
      }

      for(int i = 1; i <=200; i++)
      {
        if(v[i].size()>1)
        {
          int start = 0;
          int end = v[i].size() - 1;

          int k = 1;

          while(start < end)
          {
            int idx1 = v[i][start];
            int idx2 = v[i][end];

            for(int j = 1; j <= 200; j++)
            {
              if(j != i)ans = max(ans,freq[idx2-1][j] - freq[idx1][j] + 2*k);
            }

            start++;
            end--;
            k++;
          }
        }
      }
      cout << ans << endl;
    }


    return 0;
}