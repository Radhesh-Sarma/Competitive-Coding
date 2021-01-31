  #include<bits/stdc++.h>
  using namespace std;
  #define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  #define endl "\n"
  #define int long long
  #define all(v) v.begin(),v.end()
  #define rep(i,a,b) for(int i = a; i <=b; i++)
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
   
   
   
   
   cases
   {
    
    string s;
    cin >> s;
    int l = 0, r = 0, u = 0, d = 0;
    
    for(int i = 0 ;i < s.length(); i++)
    {
        if(s[i] == 'L')
        {
            l++;
        }
        else if(s[i] == 'R')
        {
            r++;
        }
        else if(s[i] == 'U')
        {
            u++;
        }
        else if(s[i] == 'D')
        {
            d++;
        }
    }
    
    int a = min(l,r);
    int b = min(u,d);
    
    
    if(a >= 1 and b >= 1)
    {
        cout << 2*(a+b) << endl;
        for(int i = 0 ; i < a; i ++)
        {
            cout << "L";
        }
         for(int i = 0 ; i < b; i ++)
        {
            cout << "U";
        }
          for(int i = 0 ; i < a; i ++)
        {
            cout << "R";
        }
         for(int i = 0 ; i < b; i ++)
        {
            cout << "D";
        }
        
        cout << endl;
        
    }
    else if(a == 0 and b == 0)
    {
        cout << "0" << endl;
        cout << endl;
    }
    else if(a >= 1 and b == 0)
    {
        cout << "2" << endl << "LR" << endl;
    }
    
    else if(a == 0 and b >= 1)
    {
        cout << "2" << endl << "UD" << endl;
    }
   }
    return 0; 
} 