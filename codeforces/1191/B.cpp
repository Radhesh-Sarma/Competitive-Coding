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
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout); 
    #endif
    IOS
    string a,b,c;
    cin>>a>>b>>c;
    set<string> se;
    se.insert(a);
    se.insert(b);
    se.insert(c);
    int ans1=se.size()-1;
    set<char>se2;
    se2.insert(a[1]);
    se2.insert(b[1]);
    se2.insert(c[1]);
    int ans2=2;
    if(se2.size()==1)
    {
      vector<int> v;
      v.PB(a[0]-'0');
      v.PB(b[0]-'0');
      v.PB(c[0]-'0');
      sort(all(v));
     if((v[1]==(v[0]+1)) and (v[2]==(v[1]+1)))
     {
        ans2=min(0LL,ans2);
     } 
     if(v[1]==(v[0]+1))
     {
      ans2=min(1LL,ans2);
     }
     if(v[2]==(v[1]+1))
     {
      ans2=min(1LL,ans2);
     }
     if(v[1]==(v[0]+2))
     {
      ans2=min(ans2,1LL);
     }
     if(v[2]==(v[1]+2))
     {
      ans2=min(ans2,1LL);
     }
    }
    else if(se2.size()==2)
    {
      vector<int> v;
      v.PB(a[0]-'0');
      v.PB(b[0]-'0');
      v.PB(c[0]-'0');
      int d=abs(v[1]-v[0]);
      int e=abs(v[2]-v[0]);
      int f=abs(v[2]-v[1]);
      if(a[1]==b[1] and (d==1 or d==2))
      {
        ans2=min(ans2,1LL);
      }
      else if(b[1]==c[1] and (f==1 or f==2))
      {
        ans2=min(ans2,1LL);
      }
      else if(a[1]==c[1] and (e==1 or e==2))
      {
        ans2=min(ans2,1LL);
      }
    }
    cout<<min(ans1,ans2);
    return 0;       
} 