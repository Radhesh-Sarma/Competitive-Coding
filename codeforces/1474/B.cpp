#include <bits/stdc++.h>
using namespace std;
  #define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  #define int long long
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
  const int N = 200005;


const int M = 10000020;
bool comp[M];   // composite

void sieve(bool comp[M])
{
    comp[0] = comp[1] = 1;
    for(int i = 0; i*i < M; i++)
    {
        if(comp[i])
            continue;
        for(int j = i+i; j < M; j += i)
            comp[j] = 1;
    }
}


int32_t main()
{


    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    IOS
     sieve(comp);

    vector<int> v;

    for(int i = 1; i < M; i++)
    {
    	if(!comp[i])v.push_back(i);
    }

   


    cases 
    {
    	int n;
    	cin >> n;

    	vector<int> v1;

    	int i = 0;

		int prev ;
    	while(i < v.size())
    	{
    		
    		if(v1.size())prev = v1.back();
    		else prev=  1;

    		if(v[i] - prev >= n)v1.push_back(v[i]);

    		i++;

    		if(v1.size() == 2)break;

    	}

 

    	cout << (v1[0] * v1[1]) << endl;


    }







    return 0;
}
