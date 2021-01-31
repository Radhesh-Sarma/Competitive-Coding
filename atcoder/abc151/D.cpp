#include<bits/stdc++.h>  
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
#define all(v) v.begin(),v.end()
#define rep(i,a,b) for(int i = a; i <=b; i++)
#define rep2(i,a,b) for(int i = a; i>=b; i--)
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
#define INF 2000000000
const double PI = acos(-1);
const int N = 25;
#define eps 1e-6
#define MOD 1000000007

	int h,w;

	bool vis[N][N];
	int dist[N][N];
	char arr[N][N];
	void bfs(int x,int y)
	{
		queue<pair<int,int>> q;
		q.push(MP(x,y));
		vis[x][y] = true;
		dist[x][y] = 0;

		  while(! q.empty())
	      {
	        pair<int,int>  k = q.front();
	        q.pop();
	
			vector<pair<int,int>> v;
			v.PB(MP(k.first+1,k.second));
			v.PB(MP(k.first-1,k.second));
			v.PB(MP(k.first,k.second+1));
			v.PB(MP(k.first,k.second-1));
		
	        for(pair<int,int> i:v)
	        {	
	        	int a = i.first;
	        	int b = i.second;
	        	if(a <1 or a > h or b  < 1 or b > w)
	        	{
	        		continue;
	        	}
	        	if(arr[a][b] == '#')
	        	{	
	        		continue;
	        	}

	          if(!vis[a][b])
	          {
	            vis[a][b] = 1;
	            dist[a][b] = dist[k.first][k.second] + 1;
	            q.push(MP(a,b));
	          }
	        }



	      }
	}
		
	
	   

  int32_t main() 
  {
    IOS

  
        
        cin >> h >> w;

        
        for(int i = 1; i <= h; i++)
        {
        	for(int j = 1; j <= w; j++)
        	{
        		cin >>arr[i][j];
        	}
        }

     
        //bfs(3,1);


        //  for(int i = 1; i <= h; i++)
        // {
        // 	for(int j = 1; j <= w; j++)
        // 	{
        // 		cout << dist[i][j] << " ";
        // 	}
        // 	cout << endl;
        // }

      int ans1 = 0;

      for(int i = 1; i <= h; i++)
      {
      	for(int j = 1; j <= w; j++)
      	{
      		if(arr[i][j] == '#')
      		{
      			continue;
      		}
      		bfs(i,j);

      		int ans = 0;

    		  for(int xx = 1; xx <= h; xx++)
   			   {
     			 	for(int yy = 1; yy <= w; yy++)
     			 	{
     			 		ans = max(ans,dist[xx][yy]);
     			 		vis[xx][yy] = false;
     			 		dist[xx][yy] = 0;
     			 	}
     		   }
     		   ans1 = max(ans1,ans);
      	}
      }

      	cout << ans1;

    return 0;
      }
        