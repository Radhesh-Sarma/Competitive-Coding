 #include<bits/stdc++.h>
  using namespace std;
  #define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  #define endl "\n"
  #define int long long
  #define all(v) v.begin(),v.end()
  #define rep(i,a,b) for(int i = a; i <=b; i++)
  #define rep2(i,a,b) for(int i = a; i>=b; i--)
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
 
int32_t main()
{
       

   #ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("output.txt", "w", stdout);
    #endif
 

     int n;
     cin>>n;

    if(n%4 ==0 )
    {
      cout << "0" << endl;
      cout << n/2 << " ";
      int ans=1;
      for(int i=0;i<n/2;i++)
      {
        cout << ans << " ";
        if(i%2==0)
        {
          ans+=3;
        }
        else
        {
          ans++;
        }
      }
    }
    else if(n%4 == 2)
    {
      cout << "1" << endl;
      cout << n/2 << " ";
      int ans=1;
      for(int i=0;i<n/2;i++)
      {
        cout << ans << " ";
        if(i%2==0)
        {
          ans+=3;
        }
        else
        {
          ans++;
        }
      }
    }
    else if(n%4 ==1)
    {
      cout <<"1" << endl;
      cout << n/2 +1<< " ";
      for(int i = 1 ; i<= (n/4) + 1;i++)
      {
        cout << i << " ";
      }
      for(int i = n;i>=(n-(n/4)+1);i--)
      {
        cout << i << " ";
      }
    }
    else if(n%4 ==3)
    {
      cout <<"0" << endl;
      cout << n/2 << " ";
      for(int i = 1 ; i<= (n/4);i++)
      {
        cout << i << " ";
      }
      for(int i = n;i>=(n-(n/4));i--)
      {
        cout << i << " ";
      }
    }





    return 0;
    
}

