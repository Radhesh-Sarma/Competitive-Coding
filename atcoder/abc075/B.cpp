  //Keep Working Hard
  // I__Like__Food  

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp>

#pragma GCC optimize("O3")
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")

using namespace std;
using namespace __gnu_pbds;

  #define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  #define int long long
  #define endl "\n"
  #define all(v) v.begin(),v.end()
  #define double long double
  #define trace1(x)                cerr<<#x<<": "<<x<<endl
  #define trace2(x, y)             cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
  #define trace3(x, y, z)          cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
  #define trace4(a, b, c, d)       cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl
  #define tracel5(a, b, c, d, e)    cerr<<#a<<": "<<a<<" | "<<#b<< ": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl
  #define trace6(a, b, c, d, e, f) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<endl
  #define cases int testcases;cin>>testcases; while(testcases--)

const int N = 55;

char str[N][N];
int h,w;

int ans(int x,int y)
{
	int dx[] = {-1,0,1};
	int dy []= {-1,0,1};

	int count = 0;

	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			int xx = x + dx[i];
			int yy = y + dy[j];

			if(x == xx and y == yy)continue;

			if(xx >= 1 and xx <= h and yy >= 1 and yy <= w)
			{
				if(str[xx][yy] == '#')count++;
			}

		}
	}

	return count;
}
int32_t main()
{


    IOS

    cin >> h >> w;

    for(int i = 1; i <= h; i++)
    {
    	for(int j = 1; j <= w; j++)
    	{
    		cin >> str[i][j];
    	}
    }

    for(int i = 1; i <= h; i++)
    {
    	for(int j = 1; j <= w; j++)
    	{
    		if(str[i][j] == '.')
    		{
    			str[i][j] = '0' + ans(i,j);
    		}
    		cout << str[i][j];
    	}
    	cout << endl;

    }
    



    return 0;
}


