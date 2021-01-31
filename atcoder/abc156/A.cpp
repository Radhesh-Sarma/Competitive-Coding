#include<bits/stdc++.h>
using namespace std;
#define int long long
#define MOD 1000000007
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
  const int mod = MOD;
  int a = 1, b = 1;
  
 for(int i = 0; i < r; i++)
 {
   a = ((a%mod)*((n-i)%mod))%mod;
   b = ((b%mod)*((1+i)%mod))%mod;
 }
  
  int ans = ((a%mod)*((modInverse(b)%mod)%mod))%mod;
  
  return ans%mod;
}
  
int32_t main()
{

  int n,r;
  cin >> n >> r;
  
  if(n >=10)
  {
   cout << r; 
    
  }
  else
  {
    cout << r + 1000 - 100*n;
  }
  
  
}