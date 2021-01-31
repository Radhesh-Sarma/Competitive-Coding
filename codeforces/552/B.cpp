#include<bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mp make_pair
#define int long long
#define db double
#define pb push_back
#define ld long double
int32_t main()
{
    #ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
 #endif

    IOS
    
   int n;
   cin>>n;

int arr[11];
arr[0]=0;
arr[1]=n;
arr[2]=n-9+arr[1];
arr[3]=arr[2]+n-99;
arr[4]=arr[3]+n-999;
arr[5]=arr[4]+n-9999;
arr[6]=arr[5]+n-99999;
arr[7]=arr[6]+n-999999;
arr[8]=arr[7]+n-9999999;
arr[9]=arr[8]+n-99999999;
arr[10]=arr[9]+n-999999999;
int y=n;
int count=0;
while(y)
{
    count++;
    y=y/10;

 
}

cout<<arr[count];


   return 0;

}