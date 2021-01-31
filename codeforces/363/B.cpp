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
int mod = 1e9+7;
int m=1000000;
bool isPowerOfTwo (int x) 
{ 
  
  return x && (!(x&(x-1))); 
}
unsigned countBits(unsigned int number) 
{       
      
      return (int)log2(number)+1; 
}
bool sortbysec(const pair<int,int> &a, 
              const pair<int,int> &b) 
{ 
    return (a.second < b.second); 
} 
int gcd(int a,int b)
{
	return __gcd(a,b);
}
bool isPrime(int n)
{
    if(n < 2)
        return 0;
    if(n < 4)
        return 1;
    if(n % 2 == 0 or n % 3 == 0)
        return 0;
    for(int i = 5; i*i <= n; i += 6)
        if(n % i == 0 or n % (i+2) == 0)
            return 0;
    return 1;
}
int C(int n, int r) {
    if(r > n - r) r = n - r;
   		int ans = 1;
    int i;

    for(i = 1; i <= r; i++) {
        ans *= n - r + i;
        ans /= i;
    }

    return ans;
}
int modexpo(int x,int p)
{
    int res = 1;
    x = x%mod;
    while(p)
    {
        if(p%2)
        {
            res = res * x;
        }
        p >>= 1;
        x = x*x % mod;
        res %= mod;
    }
    return res;
}
int binarysearch(int arr[],int l,int h,int val)
{

	if(l>h)
	{
		return -1;
	}
	if(arr[0]>val)
	{
		return -1;
	}
	else if(arr[h]<val)
	{
		return -1;
	}
	else
	{
		int mid=l+(h-l)/2;
		if(arr[mid]==val)
		{
			return mid;
		}
		else if(arr[mid]<val)
		{
			return binarysearch(arr,mid+1,h,val);
		}
		else
		{
			return binarysearch(arr,l,mid-1,val);
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

 
 int n,k;
 cin>>n>>k;
 if(n==k)
 {
 	cout<<1;
 	return 0;

 }
 int arr[n];
 for(int i=0;i<n;i++)
 {
 	cin>>arr[i];
 }

 int pre[n];
 pre[0]=arr[0];
 for(int i=1;i<n;i++)
 {
 	pre[i]=pre[i-1]+arr[i];
 }

 
 int ans=pre[k-1];
map<int,int> mp;
mp[ans]=1;

 for(int i=0;i+k<n;i++)
 {
 	int a=(pre[k+i]-pre[i]);
 	
 	mp[a]=i+2;
 	ans=min(ans,a);
 	
 }
 cout<<mp[ans];
return 0;
}