#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
#define all(v) v.begin(),v.end()
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
#define mod 1000000007

int n,m,k;
bool vis[1005];
vector<int> adj[1005];
set<int> gov;

int order=0;

void dfs(int s)
{
    if(vis[s])
    {
        return;
    }

    vis[s]=1;
    order++;
    
    gov.insert(s);

    for(auto &i:adj[s])
    {
        if(!vis[i])
        {
            dfs(i);
        }
    }
}
int32_t main()
{
  
         #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
    #endif

    IOS


    int n,m;
    cin>>n>>m;
    int arr[n+1],pre[n+1];

    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
        if(i==1)
        {
            pre[i]=arr[i];
        }
        else 
        {
            pre[i]=pre[i-1]+arr[i];
        }
    }



    for(int i=1;i<=n;i++)
    {
        if(pre[i]<=m)
        {
            cout<<"0 ";
        }
        else
        {
            vector<int>v;
            for(int j=1;j<=i-1;j++)
            {
                v.PB(arr[j]);
            }
            sort(all(v));

            reverse(all(v));
            int sum=0;
            int ans=0;

            for(int k=0;k<v.size();k++)
            {
                ans++;
                sum+=v[k];
                if(pre[i]-sum<=m)
                {
                    cout<<ans<<" ";
                    break;
                }
            }
        }
    }

    return 0;
    


   
}   