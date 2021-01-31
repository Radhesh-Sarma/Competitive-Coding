#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
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

int visited[500001];
vector<int> adj[500001];
int answer[500001];
int ctr=1;
void dfs(int s)
{
   visited[s]=ctr;

   for(int i=0;i<adj[s].size();i++)
   {
      if(!visited[adj[s][i]])
      {
         dfs(adj[s][i]);
         visited[adj[s][i]]=ctr;
      }
   }

}

int32_t main()
{
IOS
        #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);
       freopen("output.txt", "w", stdout);
        #endif    



       int n,m,k;
       cin>>n>>m;

       for(int i=0;i<m;i++)
       {
        cin>>k;

        if(k!=0)
        {
         int arr[k];

         for(int j=0;j<k;j++)
         {
            cin>>arr[j];
         }

         for(int j=0;j<k-1;j++)
         {
            adj[arr[j]].PB(arr[j+1]);
            adj[arr[j+1]].PB(arr[j]);
         }


        }

       }


       for(int i=1;i<=n;i++)
       {
         if(!visited[i])
         {
            ctr++;
            dfs(i);
         }
       }

       for(int i=1;i<=n;i++)
       {
         answer[visited[i]]++;
       }

       for(int i=1;i<=n;i++)
         {
            cout<<answer[visited[i]]<<" ";
         }


    return 0;
    
      
}

    
  

   