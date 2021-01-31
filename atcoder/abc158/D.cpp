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
  #define double long double
  #define trace1(x)                cerr<<#x<<": "<<x<<endl
  #define trace2(x, y)             cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
  #define trace3(x, y, z)          cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
  #define trace4(a, b, c, d)       cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl
  #define trace5(a, b, c, d, e)    cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl
  #define trace6(a, b, c, d, e, f) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<endl
  #define cases int testcases;cin>>testcases; while(testcases--)
  #define MOD 1000000007
  #define N 1000001
  




int32_t main()
{



    bool ok = 0;

    string s;
    cin >> s;

    char arr[1000001];

    int start = 500000;
    int end = 500000;

    for(int i = 0 ; i < s.length(); i++)
    {
      arr[end++] = s[i];
    }

    int q;
    cin >> q;

    while(q--)
    {
   //   trace4(ok,start,end,0);
      int x;
      cin >> x;
      if(x == 1)
      {
        ok ^= 1;
      }
      else
      {
        int y;
        cin >> y;
        char ch;
        cin >> ch;
      //  trace1(ch);
        if(y == 1)
        {
          if(ok)
          {
            arr[end++] = ch;
          }
          else
          {
            arr[--start] = ch;
          }
        }
        else
        {
          if(ok)
          {

            arr[--start] = ch;
          }
          else
          {
            arr[end++] = ch;
          } 
        }
      }
      // trace4(ok,start,end,1);
    }

    if(ok == 1)
    {
      end--;
      while(end >= start)
      {
        char ch = (int)arr[end--] ;
        cout << ch;
      }
    }
    else
    {
      while(start <end)
      {
        //trace2(start,(int)arr[start]);
        char ch = (int)arr[start++] ;
        //trace1(ch);
        cout << ch;
      }
    }
 

    return 0;
}