#include<bits/stdc++.h>
using namespace std;
#define int long long
#define MOD 1000000007
#define N 200005

int factorial[N];
  int modexp(int x, int y)
{
	int mod = MOD,res = 1;
    x = (x % mod + mod) % mod;
    while(y)
    {
        if(y & 1)res = (res*x) % mod;
        y >>= 1;
        x = ((x%mod)*(x%mod)) % mod;
    }
    return res; 
}
int modInverse(int x)
{
	return modexp(x,MOD-2)%MOD;
}
 
int choose(int n,int r)
{
	int ans = factorial[n]%MOD;
  	ans = ((ans%MOD)*(modInverse(factorial[r])%MOD))%MOD;
  ans = ((ans%MOD)*(modInverse(factorial[n-r])%MOD))%MOD;
  return ans;
}


int32_t main()
{
  
  factorial[0] = 1;
  
  for(int i = 1; i < N; i++)
  {
   factorial[i] = ((factorial[i-1]%MOD)*(i%MOD))%MOD;
  }
  
	int n,k;
  	cin >> n >> k;
  k = min(n-1,k);
  
  int ans = 0;
  
  for(int i = 0; i <=k; i++)
  {
 	ans =( ans%MOD +  ((choose(n,i)%MOD)*(choose(n-1,i)%MOD))%MOD)%MOD;
    
  }
  
  cout << ans;
  
}