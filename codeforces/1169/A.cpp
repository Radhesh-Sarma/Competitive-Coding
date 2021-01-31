      #include<bits/stdc++.h>
      using namespace std;
      #define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
        #define endl "\n"
         #define PB push_back
      #define MP make_pair
         #define int long long 


      int32_t main()
      {
      IOS
  
  #ifndef ONLINE_JUDGE  
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif

               
               int n,a,x,b,y;
               cin>>n>>a>>x>>b>>y;


               bool ok=false;


               int i=a;
               int j=b;


                while(1)
                {

                  if(i==j)
                  {

                    ok=true;
                    break;
                  }
                  if(i==x)
                  {
                    break;
                  }
                  if(j==y)
                  {
                    break;
                  }


                  i++;
                  j--;
                  if(j==0)
                  {
                    j=n;
                  }
                  if(i==n+1)
                  {
                    i=1;
                  }
                }

                if(ok)
                {
                  cout<<"YES";
                }
                else
                {
                  cout<<"NO";
                }

    return 0;
            
      }

          
        

               