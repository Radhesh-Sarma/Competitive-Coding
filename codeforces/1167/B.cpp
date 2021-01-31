#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f first
#define s second

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

  int query(int a,int b)
 {
    cout<<"? "<<a<<" "<<b<<endl;
    int x;
    cin>>x;
    return x;
}
int32_t main()
{
IOS

   


       set<int> v={ 4, 8, 15, 16, 23, 42};

        set<int> v1;



       int a=query(1,2);
       int b=query(2,3);

     

          int ans[6];
        for(auto i:v)
        {
          if(a%i==0 && b%i==0)
          {
            v1.insert(i);
          }
        }


      for(auto i:v1)
      {
        
        if(v.find(a/i)!=v.end())
        {
          if(v.find(b/i)!=v.end())
          {
           
              ans[0]=a/i;
              ans[1]=i;
              ans[2]=b/i;

              if(i==(a/i)||(i==(b/i))||(a/i)==(b/i))
              {
                continue;
              }
              else
              {
                break;
              }
          }
        }
      }







          set<int> v2;

        int c=query(4,5);
        int d=query(5,6);


        for(auto i:v)
        {
          if(c%i==0 && d%i==0)
          {
            v2.insert(i);
          }
        }




      for(auto i:v2)
      {
        if(v.find(c/i)!=v.end())
        {
          if(v.find(d/i)!=v.end())
          {
              ans[3]=c/i;
              ans[4]=i;
              ans[5]=d/i;
              if(i==(c/i)||(i==(d/i))||(c/i)==(d/i))
              {
                continue;
              }
              else
              {
                break;
              }
          }
        }
      }

      cout<<"! ";
      for(auto i:ans)
      {
        cout<<i<<" ";
      }


         return 0;
    
      
}

    
  

   