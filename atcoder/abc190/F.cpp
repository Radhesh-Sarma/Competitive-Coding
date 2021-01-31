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

  vector<int> v1;

int getSum(int BITree[], int index) 
{ 
  int sum = 0;
  while (index > 0)
  { 
    sum += BITree[index]; 
    index -= index & (-index); 
  } 
  return sum; 
}

void updateBIT(int BITree[], int n, int index, int val) 
{ 
  while (index <= n)
  { 
    BITree[index] += val; 
    index += index & (-index); 
  } 
} 

void convert(int arr[], int n) 
{ 

  int temp[n]; 
  for (int i = 0; i < n; i++) 
    temp[i] = arr[i]; 
  sort(temp, temp + n); 
  for (int i = 0; i < n; i++)
  { 
    arr[i] = lower_bound(temp, temp + n, 
            arr[i]) - temp + 1; 
  } 
} 

int getInvCount(int arr[], int k, int n) 
{ 
  int invcount = 0;

  convert(arr, n); 


  int BIT[n + 1]; 
  for (int i = 1; i <= n; i++) 
    BIT[i] = 0; 

  for (int i = k - 1; i >= 0; i--) { 

    invcount += getSum(BIT, arr[i] - 1); 

    updateBIT(BIT, n, arr[i], 1); 
  } 

  int ans = invcount; 
  int i = 0, j = k, icnt = 0, jcnt = 0; 
  while (j <= n - 1) { 

    icnt = getSum(BIT, arr[i] - 1); 
    updateBIT(BIT, n, arr[i], -1); 
    jcnt = getSum(BIT, n) - getSum(BIT, arr[j]); 
    updateBIT(BIT, n, arr[j], 1); 

    invcount = invcount - icnt + jcnt; 

    v1.push_back(invcount);

    ans = ans + invcount; 
    i++, j++; 
  } 
  return ans; 
} 


int32_t main()
{


    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    IOS



    int n;
    cin >> n;

    int v[2*n];

    for(int i = 0; i < n; i++)
    {
    	cin >> v[i];
    }

    for(int i = n; i < 2*n; i++)
    {
    	v[i]= v[i-n];
    }


    getInvCount(v, n, 2*n);

    cout << v1.back() << endl;

    for(int i = 0; i < v1.size()-1; i++)
    {
    	cout << v1[i] << endl;
    }



    return 0;
}
