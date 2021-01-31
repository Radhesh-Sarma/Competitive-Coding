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
const int N = 100005;
#define eps 1e-6
#define MOD 1000000007

int p[N];
int ok[N];
int ok2[N];


  int32_t main() 
  {
    IOS


        int n,m;
        cin >> n >> m;

  

        int ans1 = 0,ans2 =0;

       
       vector<pair<int,string>> v;

       for(int i = 1; i <= m; i++)
       {
       		int x;
        	string str;
        	cin >> x >> str;
        	v.PB(MP(x,str));
        	if(str == "AC")
        	{
        		ok2[x] = true;
        	}

       }


        for(int i = 0; i <= m-1; i++)
        {
        	int x;
        	string str;
        	x = v[i].first;
        	str = v[i].second;

        	if(ok[x] or !ok2[x])
        	{
        		continue;
        	}
        	else if(str == "WA")
        	{
        		ans2++;
        	}
        	else
        	{
        		ans1++;
        		ok[x] = true;
        	}
        }

        cout << ans1 << " " << ans2;

    return 0;
      }
        