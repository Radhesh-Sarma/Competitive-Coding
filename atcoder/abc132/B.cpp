  #include<bits/stdc++.h>
  using namespace std;
  #define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  #define endl "\n"
  #define int long long
  #define db long double
  #define PB push_back
  int32_t main()
  {         
    
    
    IOS
   
    
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    int ans=0;
    for(int i=1;i<n-1;i++)
    {
        vector<int> v;
        v.PB(arr[i]);
        v.PB(arr[i-1]);
        v.PB(arr[i+1]);
        sort(v.begin(),v.end());
        if(v[1]==arr[i])
        {
            ans++;
        }
    }
    
    cout<<ans;
    return 0;
  }           