#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
#include<utility>
#include<map>
#include<queue>
#include <cstdlib>
#include <climits>
#include <iomanip>
#include<iostream>
#include <sstream>  // for string streams
#include <string>  // for string
#include <stack> 
#include <cmath>
  #pragma comment(linker, "/STACK:2000000")
#pragma comment(linker, "/HEAP:2000000")
  #pragma GCC optimize ("-O3")
  using namespace std;
  #define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  #define endl "\n"
  #define int long long
  #define all(v) v.begin(),v.end()
  #define rep(i,a,b) for(int i = a; i <=b; i++)
  #define rep2(i,a,b) for(int i = a; i>=b; i--)
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
  #define MOD 1000000007
  void printprecise(double l,int precision) 
  {
    std::cout << std::fixed;
    std::cout << std::setprecision(precision);
    std::cout << l;
}

vector<bool> primes;
void sieve(int n)
{
  bool prime[n+1];
  memset(prime,true,sizeof(prime));
  prime[0] = false;
  prime[1] = false;

  for(int p = 2;p*p <= n; p++)
  {
    if(prime[p])
    {
      for(int i = p*p; i<= n; i+=p )
      {
        prime[i] = false;
      }
    }
  }

  for(int i = 0;i<=n;i++)
  {
    primes.PB(prime[i]);
  }
}
void multiply(vector<vector<int> > &a, vector<vector<int> > &b,int mod,vector<vector<int> > &temp)
{
    assert(a[0].size()==b.size());
    int i,j;
    for(i=0;i<a.size();i++)
    {
        for(j=0;j<b[0].size();j++)
        {
            temp[i][j]=0;
            for(int p=0;p<a[0].size();p++)
            {
                temp[i][j]=(temp[i][j]+1LL*a[i][p]*b[p][j])%mod;
            }
        }
    }
}
void MatExpo(vector<vector<int> > &arr,int power,int mod)
{
    int i,j,k;
    vector<vector<int> >temp,temp2,temp3;
    vector<int> init(arr[0].size());
    for(i=0;i<arr.size();i++){temp.push_back(init);}
    temp3=temp;
    temp2=temp;
    for(i=0;i<arr.size();i++)temp3[i][i]=1;
    while(power>0)
    {
        if(power&1)
        {
            multiply(arr,temp3,mod,temp);
            swap(temp3,temp);
        }
        multiply(arr,arr,mod,temp2);
        swap(arr,temp2);
        power>>=1;
    }
    swap(arr,temp3);
}
int fastExpo(long long a,long long n, int mod)
{
    a%=mod;
    if(n==2)return a*a%mod;
    if(n==1)return a;
    if(n&1)return a*fastExpo(fastExpo(a,n>>1,mod),2,mod)%mod;
    else return fastExpo(fastExpo(a,n>>1,mod),2,mod);
}
int isPrime(int n){
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
long long C(int n, int r) {
    if(r>n-r) 
        r=n-r;
    long long ans=1;
    for(int i=1;i<=r;i++){
        ans*=n-r+i;
        ans/=i;
    }
    return ans;
}
int32_t main()
{
       

 
  
     int a,b;
     cin >> a >> b;
     int d = __gcd(a,b);
     int ans = 0;
  
     for(int i = 1;i <= sqrt(d);i++)
     {
      if(d%i ==0)
      {
        if(i == d/i)
        {
          if(isPrime(i))
          {
            ans++;
          }
        }
        else
        {
         if(isPrime(i))
          {
            ans++;
          }
          if(isPrime(d/i))
          {
            ans++;
          } 
        }
      }
     }

     cout << 1 + ans ;


    return 0;
}