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

         int mini(int x,int y)
         {
            if(x<=y)
            {
               return x;
            }
            return y;
         }

      int32_t main()
      {
      IOS
              #ifndef ONLINE_JUDGE
             freopen("input.txt", "r", stdin);
             freopen("output.txt", "w", stdout);
              #endif    



             int a,b,c;
             cin>>a>>b>>c;
             int k=mini(a/3,mini(b/2,c/2));

             a=a-k*(3);
             b=b-k*(2);
             c=c-k*(2);

             int ans=7*k;

             int e=0,f=0,g=0;

             int food[]={1,2,3,1,3,2,1};
             vector<int> answer;

             for(int i=0;i<=6;i++)
             {
               int x=a,y=b,z=c;
                  int ans1=0;

               for(int j=i;j<=i+6;j++)
               {
                  

                     if(food[j%7]==1)
                     {
                        if(x>=1)
                        {

                           ans1++;
                           x--;

                        }
                        else
                        {
                           goto ab;

                        }
                     }
                     else if(food[j%7]==2)
                     {
                               if(y>=1)
                        {

                           ans1++;
                           y--;

                        }
                        else
                        {
                           goto ab;
                           
                        }
                     }
                     else if(food[j%7]==3)
                     {
                            if(z>=1)
                        {

                           ans1++;
                           z--;

                        }
                        else
                        {
                           goto ab;
                           
                        }
                     }

                    
               }

                ab:

                     answer.PB(ans1);
             }

                     sort(answer.begin(),answer.end());
       
                     ans+=answer[6];

                     cout<<ans;
          return 0;
          
            
      }

          
        

         