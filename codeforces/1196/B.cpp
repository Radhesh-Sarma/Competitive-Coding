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

      cases
      {
     


          int n,k;
          cin>>n>>k;
          int arr[n],pre[n];
          int odds=0;

          for(int i=0;i<n;i++)
          {
            cin>>arr[i];
            if(arr[i]%2==1)
            {
              odds++;
            }
            if(i==0)
            {
              pre[i]=arr[i];
            }
            else
            {
              pre[i]=pre[i-1]+arr[i];
            }
          }


          if(k>odds or (odds-k)%2==1 or (pre[n-1]%2==1 and k%2==0) or (pre[n-1]%2==0 and k%2==1))
          {
            cout<<"NO"<<endl;
          }
          else
        {
          cout<<"YES"<<endl;

          int j=odds-k;
          
          if(k==1)
          {
            cout<<n<<endl;
            continue;
          }
          vector<int> answer;
          for(int i=0;i<n;i++)
          {
            if(k==1)
              {
                break;
              }
            if(arr[i]%2==1)
            {

            
              if(j<=0)
              {
                answer.PB(i+1);
                odds--;
                k--;
              }
              else
              {
                j--;
              }
            }
          }


          if(answer[answer.size()-1]!=n)
          {

            answer.PB(n);
          }
          
      

          for(auto i:answer)
          {
            cout<<i<<" ";
          }
          cout<<endl;


        }


      }

    return 0;      
} 