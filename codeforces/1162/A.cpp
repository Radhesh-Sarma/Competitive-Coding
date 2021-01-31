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
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif



         int n,h,m;
         cin>>n>>h>>m;


         int arr[n+1]={0};
         for(int i=1;i<=n;i++)
         {
            arr[i]=h;
         }

         while(m--)
         {
            int l,r,x;
            cin>>l>>r>>x;
            for(int i=l;i<=r;i++)
            {
               arr[i]=min(arr[i],x);
            }
         }


         int ans=0;

         for(int i=1;i<=n;i++)
         {
            ans+=(arr[i]*arr[i]);
         }
         cout<<ans;  


         
              
    return 0;
            
      }

          
        

               