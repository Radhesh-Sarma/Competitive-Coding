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

    return a.s>b.s;
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
    
       #ifndef ONLINE_JUDGE
      // for getting input from input.txt
      freopen("input.txt", "r", stdin);
      // for writing output to output.txt
      freopen("output.txt", "w", stdout);
      #endif 

      IOS

        

      cases
      {
      
        int n;
        cin>>n;
        map<int,int> mp;
        int x;
        for(int i=0;i<n;i++)
        { 
            cin>>x;
            mp[x]++;
        }
        priority_queue<int> pq;
        for(auto x:mp)
        {
            pq.push(x.second);
        }
        int last=LLONG_MAX;
        int sum=0;
        while(!pq.empty())
        {
            x=pq.top();
            pq.pop();
            last=min(last-1,x);
            if(last<=0)
            {
                break;
            }
            sum+=last;
        }
        cout<<sum<<endl;

     
      }   

  return 0;
}
