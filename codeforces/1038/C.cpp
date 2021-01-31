#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
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

  
int32_t main()
{
IOS

   

        int n;
        cin>>n;
        int a[n],b[n];

        for(int i=0;i<n;i++)
        {
          cin>>a[i];
        }

        for(int i=0;i<n;i++)
        {
          cin>>b[i];
        }


        sort(a,a+n,greater<int>());
        sort(b,b+n,greater<int>());
        int i=0;
        int j=0;
          int score1=0,score2=0;
          int k=0;

                  
            while(k<2*n)
            {
              k++;
                //trace5(k,i,a[i],j,b[j]);
              if(k%2)
              {

                if(a[i]>=b[j] && i<n)
                {
                  score1+=a[i];
                  i++;
                }
                else
                {
                  if(j<n)
                   {

                    j++;
                  }
                  else
                    {
                      score1+=a[i];
                      i++;
                    }


                }
              }
              else
              { 
                  if(b[j]>=a[i] && j<n)
                  {
                    score2+=b[j];
                    j++;
                  }
                  else
                  {
                    if(i<n)
                         i++;
                    else
                    {
                      score2+=b[j];
                      j++;
                    }   
                  }
              }

                //trace2(score1,score2);
            }



              
        cout<<score1-score2;
         return 0;
    
      
}

    
  

    