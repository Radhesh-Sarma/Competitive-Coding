  #include<bits/stdc++.h>
  using namespace std;
  #define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  #define endl "\n"
  #define int long long
  #define all(v) v.begin(),v.end()
  #define f first
  #define s second
  #define PB push_back
  #define MP make_pair
  #pragma comment(linker, "/STACK:2000000")
  #pragma comment(linker, "/HEAP:2000000")
  #define db long double
  #define trace1(x)                cerr<<#x<<": "<<x<<endl
  #define trace2(x, y)             cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
  #define trace3(x, y, z)          cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
  #define trace4(a, b, c, d)       cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl
  #define trace5(a, b, c, d, e)    cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl
  #define trace6(a, b, c, d, e, f) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<endl
  #define cases int testcases;cin>>testcases; while(testcases--)
  #define MOD 1000000007
  
  

  int32_t main()
  {        
   
    
    IOS

   
        
    
       cases
       {
           int n;
           cin >> n;
           vector<int> v;
            
        int k = n;
        while(k>0)
        {
            v.PB(k%3);
            k/=3;
        }
        
        reverse(all(v));
        
        // for(auto i : v)
        // {
        //     cout << i ; 
        // }
        
        int twopos = -1;
        for(int i = 0;i < v.size(); i++)
        {
            if(v[i] == 2)
            {
                twopos = i;
                break;
            }
        }
        
      
        if(twopos == -1)
        {
           
        }
         else
         {
               
         int zeropos = -1;
         for(int i = twopos -1; i>=0;i--)
         {
             if(v[i]==0)
             {
                 zeropos = i;
                 break;
             }
         }
         
         
         if(zeropos == -1)
         {
                
                vector<int> v2;
                
           
              v2.PB(1);
             for(int i = 0 ; i < v.size();i++)
             {
                 v2.PB(0);
             }
             
             v = v2;
             
             
             
         }
         else
         {
             v[zeropos] = 1;
             for(int i = zeropos +1 ; i < v.size(); i++)
             {
                 v[i] = 0;
             }
            
         }
         
         }
         
         
         int p = 1;
         int ans = 0;
         reverse(all(v));
         for(int i = 0;i < v.size(); i++)
         {
                ans += v[i] * p;
                p*=3;
         }
    
              cout << ans << endl;
       }
        
        
        
    return 0; 
} 