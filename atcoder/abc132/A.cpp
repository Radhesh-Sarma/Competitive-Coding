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
   
    map<char,int> mp;
    string s;
    cin>>s;
    
    for(int i=0;i<s.length();i++)
    {
        mp[s[i]]++;
        
    }
    
    if(mp.size()==2)
    {
        for(auto i:mp)
        {
            if(i.second !=2)
            {
                cout<<"No";
                return 0;
            }
        }
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
        return 0;
    }
    
    
    return 0;
  }           