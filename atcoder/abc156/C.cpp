#include<bits/stdc++.h>
using namespace std;
#define int long long
#define MOD 1000000007

  
int32_t main()
{

int n;
  cin >> n;
  int arr[n+1];
  	
  int sum = 0;
  int squaredsum = 0;
  
  for(int i = 1; i <= n; i++)
  {
    cin >> arr[i];
   sum += arr[i];
    squaredsum += (arr[i]*arr[i]);
  }
  
  int ans = 1e18;

  
  for(int i = 1; i <= 100; i++)
  {
   ans = min(ans,squaredsum + n*i*i - 2*i*sum); 
  }
  cout << ans;
}