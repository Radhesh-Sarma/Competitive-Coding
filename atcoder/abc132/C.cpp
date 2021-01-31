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
    vector<int> v;
    int k=-1;
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        k=max(k,x);
        v.PB(x);
    }
    
    sort(v.begin(),v.end());
    int ans=0;
    for(int i=1;i<=k;i++)
    {
        int l=upper_bound(v.begin(),v.end(),i)-v.begin();
        int g=n-l;
        
        //cout<<l<<" "<<g<<endl;
        if(l==g)
        {   
            ans++;
        }
        else if(l>g)
        {
            break;
        }
    }
    cout<<ans;
    return 0;
  }           