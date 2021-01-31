#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
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
int lcm(int a,int b)
{
   return (a*b)/(__gcd(a,b));
}


int32_t main()
{
IOS




        #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);
       freopen("output.txt", "w", stdout);
        #endif

  
       cases
       {


         int n;
         cin>>n;


         {
            set<int> one;
            int arr[n];
            int largest=-1;
            int smallest=1e8;

            for(int i=0;i<n;i++)
            {
               cin>>arr[i];
               one.insert(arr[i]);
               smallest=min(smallest,arr[i]);
               largest=max(largest,arr[i]);
            
            }

                  int a;

               if(n>=2)
                      a=lcm(arr[0],arr[1]);
                else
                     a=arr[0];   

            for(int i=0;i<n;i++)
            {
               a=lcm(a,arr[i]);
            }

               int number;

            if(a==largest)
            {
               number=smallest*a;
            }
            else
            {
               number=a;
            }

               bool ok=true;

            
            for(int i=0;i<n;i++)
            {
               if(!(one.find(number/arr[i])!=one.end()))
               {
                  trace3(i,arr[i],number);
                  ok=false;
                  break;
               }
            }


            if(ok==false)
            {

               cout<<"-1";
            }
            else
            {

               set<int> two;
               for(int i=2;i<=sqrt(number);i++)
               {
                  if(number%i == 0)
                  {
                     two.insert(i);
                     if((number/i)!=i)
                     {
                        two.insert(number/i);
                     }
                  }
               }

               if(one==two)
               {
                  cout<<number;
               }
               else
               {
                  cout<<"-1";
               }
            }

         }

         cout<<endl;
       }



    return 0;
    
      
}

    
  

  