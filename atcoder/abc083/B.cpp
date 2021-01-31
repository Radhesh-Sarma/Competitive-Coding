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
  #define db long double
  #define trace1(x)                cerr<<#x<<": "<<x<<endl
  #define trace2(x, y)             cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
  #define trace3(x, y, z)          cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
  #define trace4(a, b, c, d)       cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl
  #define trace5(a, b, c, d, e)    cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl
  #define trace6(a, b, c, d, e, f) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<endl
  #define cases int testcases;cin>>testcases; while(testcases--)
  #define MOD 1000000007
      string s;

  int gcd(int a,int b)
  {
    if(b==0)
    {
      return a;
    }
    return gcd(b,a%b);
  }

  bool sortbysec(const pair<int,int> &a,const pair<int,int> &b)
  {

    if(a.s==b.s)
    {
      return a.f<b.f;
    }
    return a.s<b.s;
  }

  bool vis[10000][10000];

  int n;
  int currx=0,curry=0;

  void dfs(int x,int y,bool dir,int idx)
  {

    if(idx==n)
    {
      return;
    }

    currx=x;
    curry=y;

      vis[x][y]=1;
      if(s[idx]=='F')
      {
        if(dir==0)
        {
          currx++;
        }
        else
        {
          curry++;
        }

        dfs(currx,curry,dir,idx+1);
        return;
      }
      else
      {
        dfs(currx,curry,!dir,idx+1);
        dfs(currx,curry,dir,idx+1);
        
          return;
      } 

      return;
  }


  int digsum(int n)
  {
    int ans=0;
    while(n)
    {
      ans+=(n%10);
      n/=10;
    }

    return ans;
  }
  int32_t main()
  {         
    

      IOS

        
        
      int n,a,b;
      cin>>n>>a>>b;
      
      int ans=0;

      for(int i=1;i<=n;i++)
      {
        int x=digsum(i);
        if(x>=a and x<=b)
        {
          ans+=i;
        }
      }

      cout<<ans;


      return 0;
  }           