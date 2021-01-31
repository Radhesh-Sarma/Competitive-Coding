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
  
  int points[205];
  
  int32_t main()
  {        
   
    
    IOS

    int n,k;
    cin >> n >> k;
    
    vector<pair<int,int> > v;               
    
    for(int i = 0; i < n;i++)
    {
        int l,r;
        cin >> l >> r;
        points[l]++;
        points[r+1]--;
        v.PB(MP(l,r));
    }
    for(int i = 1 ; i < 205; i++)
    {
        points[i] += points[i-1];
    }
    vector<bool> ans(n);
    for(int i = 0 ; i < n;i++)ans[i]=0;
    
    for(int i = 0 ; i < 205; i++)
    {
        while(points[i]>k)
        {
            int ansl = -1, ansr = -1, ansi = -1;
            for(int j = 0; j < n; j++)
            {

                if((i >= v[j].f and i <= v[j].s) and (!ans[j]) )
                {
                    if((ansr  < v[j].s ) or (ansi == -1))
                    {
                        ansi = j;
                        ansl = v[j].f;
                        ansr = v[j].s;
                    }
                }
                
            }
            
            ans[ansi] = 1;
            
            for(int z = ansl; z <= ansr; z++)
            {
                points[z]--;
            }
        }
    }
    
   
    int sum = 0;
    
    for(int i = 0 ; i < n; i++)
    {
        if(ans[i])
            {
                sum++;
                         
            }
    }
        
        cout << sum << endl;
        
        for(int i = 0 ; i < n; i++)
    {
        if(ans[i])
            {
                cout << 1+i << " ";
                         
            }
    }
    
    return 0; 
} 