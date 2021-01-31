#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long

int n, m;
vector<int> adj[200005];
int color[200005];
bool vis[200005];
bool ok = true;
bool dfs(int s)
{
    if(vis[s])
    {
        return 1;
    }
    vis[s] = 1;

    if(color[s] == 0)
    {
        color[s] = 1;
    }
    for(auto i : adj[s])
    {
        if(color[i] == 0)
        {
            if(color[s] == 1)
            {
                color[i] = 2;
            }
            else
            {
                color[i] = 1;
            }
        }
        else if(color[i] == color[s])
        {
            return false;
        }

    }

    bool ans = 1;

    for(auto i : adj[s])
    {
        ans = ans & dfs(i);
    }
    return ans;
}
int32_t main()
{
    IOS

    int n, m;
    cin >> n >> m;
    vector<pair<int, int>>v;

    for(int i = 1; i <= m; i++)
    {
        int x, y;
        cin >> x >> y;
        v.push_back({x, y});
        adj[x].push_back(y);
        adj[y].push_back(x);
    }



    for(int i = 1; i <= n; i++)
    {
        if(!vis[i])
        {
            ok =  dfs(i);
            if(ok == false)
            {
                cout << "NO";
                return 0;
            }
        }
    }

    if(ok == false)
    {
        cout << "NO";
        return 0;
    }


    cout << "YES" << endl;

    for(auto i : v)
    {
        if(color[i.second] == 1)
        {
            cout << "0";
        }
        else if(color[i.second] == 2)
        {
            cout << "1";
        }
    }
    return 0;

}