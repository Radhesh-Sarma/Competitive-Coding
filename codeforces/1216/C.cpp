  #include<bits/stdc++.h>
  using namespace std;
  #define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  #define endl "\n"
  #define all(v) v.begin(),v.end()
  #define int long long
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
   
bool fun(int x1,int y1,int x2,int y2,int t1,int t2)
{
   if(t1>x2 or t1<x1 or t2<y1 or t2>y2)
   {
      return false;
   }
   return true;
}
  int32_t main()
  {         
   
   int arr[12];
   for(int i=0;i<12;i++)
   {
      cin>>arr[i];
      arr[i]*=2;
   }
   
   for(int i = arr[0];i<=arr[2];i++)
   {
      if(!fun(arr[4],arr[5],arr[6],arr[7],i,arr[1]) and !fun(arr[8],arr[9],arr[10],arr[11],i,arr[1]))
      {
         cout<<"YES";
         return 0;
      }
   }
   
      for(int i = arr[0];i<=arr[2];i++)
   {
      if(!fun(arr[4],arr[5],arr[6],arr[7],i,arr[3]) and !fun(arr[8],arr[9],arr[10],arr[11],i,arr[3]))
      {
         cout<<"YES";
         return 0;
      }
   }
   
   for(int i = arr[1];i<=arr[3];i++)
   {
 if(!fun(arr[4],arr[5],arr[6],arr[7],arr[0],i) and !fun(arr[8],arr[9],arr[10],arr[11],arr[0],i))
      {
         cout<<"YES";
         return 0;
      }
   }
   
   
   for(int i = arr[1];i<=arr[3];i++)
   {
 if(!fun(arr[4],arr[5],arr[6],arr[7],arr[2],i) and !fun(arr[8],arr[9],arr[10],arr[11],arr[2],i))
      {
         cout<<"YES";
         return 0;
      }
   }
   
   cout << "NO" ;
      return 0;
  }    