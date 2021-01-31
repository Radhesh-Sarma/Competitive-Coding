    #include<bits/stdc++.h>
    using namespace std;
    #define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    #define endl "\n"
    #define int long long


    int32_t main()
    {

        IOS


        int n,m;
        cin>>n>>m;
        int arr[n+1];
        
      
        for(int i=1;i<=n;i++)
        {
            cin>>arr[i];
        }
        int now=0;
        int freq[101]={0};

        for(int i=1;i<=n;i++)
        {
            now+=arr[i];
            if(now<=m)
            {
                cout<<"0 ";
            }
            else
            {
                int t=now;
                int ans=0;
                for(int j=100;j>=1;j--)
                {
                    if(t-j*freq[j]>m )
                    {   
                        t-=j*freq[j];
                        ans+=freq[j];

                    }
                    else
                    {   
                        ans+=(t-m)/j;
                        if((t-m)%j !=0)
                        {
                            ans++;
                        }
                        cout<<ans<<" ";
                        break;
                    }
                }
            }
            freq[arr[i]]++;
        }



        return 0;
        


       
    }   