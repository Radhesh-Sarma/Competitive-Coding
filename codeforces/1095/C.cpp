#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define SQ(a) (a)*(a)
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
#define MOD 1000000009
bool isPowerOfTwo (int x) 
{ 
  
  return x && (!(x&(x-1))); 
}
unsigned countBits(unsigned int number) 
{       
      
      return (int)log2(number)+1; 
} 
int popcount(int n)
{
	int ans=0;
	while(n)
	{
		ans++;
		n=(n)&(n-1);
	}
	return ans;

}
int32_t main()
{
	IOS
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif

int n,k;
cin>>n>>k;


if(n==k)
{
    cout<<"YES"<<endl;

    while(k--)
    {
        cout<<1<<" ";
    }
    return 0;

}
if(k==1)
{
    if(isPowerOfTwo(n))
    {
        cout<<"YES"<<endl;
        cout<<n;
        return 0;

    }
    else
    {
        cout<<"NO"<<endl;
        return 0;
        
    }
}

int a=__builtin_popcount(n);
if(k>=a&&k<=n)
{
	cout<<"YES"<<endl;
	vector<int> ans;

for(int i=countBits(n);i>=0;i--)
{

	if (n & (1 << (i - 1))) 
	{
		ans.PB(1 << (i - 1));
	}
}



int i=0;

while(1)
{
	if(ans.size()==k)
	{
		for(auto i:ans)
		{
			cout<<i<<" ";
		}
		return 0;
	}
	else
	{
		if(ans[i]>1)
		{


		int a=ans[i];
	    ans[i]=ans[i]/2;
	    
		ans.PB(a/2);
		}
		else
		{
			i++;
		}


	}
}

}
else
{
	cout<<"NO";
	return 0;

}


return 0;




}