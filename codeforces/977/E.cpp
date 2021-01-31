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

int n,m;
bool vis[200005];
vector<int> adj[200005];
 int ans=0;
 int ans2=0;
 vector<int> v2;

void dfs(int s)
{
    
    if(vis[s])
    {
        return;
    }
    
    ans2+=(adj[s].size());
    ans++;
    vis[s]=1;

    for(auto &i:adj[s])
    {
        if(!vis[i])
        {
           dfs(i);
        }
    }
}

bool dfs2(int s,int deg)
{
    if(vis[s])
    {
        return true;
    }
    vis[s]=1;

    int ans=true;
    for(auto &i:adj[s])
    {
        if(adj[i].size() != (deg))
        {
            return false;
        }
        ans=ans and dfs2(i,deg);

    }

    return ans;
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


    
    cin>>n>>m;

    for(int i=1;i<=m;i++)
    {
        int x,y;
        cin>>x>>y;
        adj[x].PB(y);
        adj[y].PB(x);
    }



    vector<pair<int,int>> v;

    for(int i=1;i<=n;i++)
    {
        if(!vis[i])
        {
        v2.PB(i);
        dfs(i);
        v.PB(MP(ans,ans2/2));
        ans=0;
        ans2=0;

        }

    }   
        for(int i=0;i<200005;i++)
        {
            vis[i]=0;
        }
    int answer=0;
    int j=1;
    for(auto i:v)
    {
      
       if((i.f)==i.s)
       {
          
          if(dfs2(v2[j-1],2))
            {
                answer++;
            }

       }
       j++;
    }


    cout<<answer;

    return 0;


   
}   