  #include<bits/stdc++.h>
  using namespace std;
  #define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  #define endl "\n"
  #define int long long

      int a,b,x;
      
       int dig(int n)
       {
              return ((int)(log10(n)) + 1);
       }
       
       int cost(int n)
       {
              return a*n + b*dig(n);
       }
       
       bool fun(int n)
       {
              if(cost(n) <= x)
              {
                     return true;
              }
              else
              {
                     return false;
              }
       }
      
  int32_t main()
  {        
   
    
    IOS
       
       cin >> a >> b >> x;
       
       int l = 1;
       int r = 1000000000;
       
       if(cost(l) > x)
       {
              cout << 0;
       }
       else if(cost(r)<x)
       {
              cout << r;
       }
       else
       {
              while(r-l >1)
              {
                     int mid = l + (r-l)/2;
                     
                     if(fun(mid))
                     {
                            l = mid;
                     }
                     else
                     {
                            r = mid;
                     }
              }
              cout << l;
       }
       
       

    return 0; 
} 