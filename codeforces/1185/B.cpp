    #include<bits/stdc++.h>
    using namespace std;
    #define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    #define endl "\n"
    #define int long long
    #define f first
    #define s second
    #define cases int testcases;cin>>testcases; while(testcases--)
    #define PB push_back
    
    int32_t main()
    {
      


        IOS

        cases
        {
             string a,b;
            cin>>a>>b;
            map<char,int> mp1,mp2;

            if(a[0]!=b[0])
            {
                cout<<"NO"<<endl;
                continue;
            }
            if(a[a.length()-1]!=b[b.length()-1])
            {
                cout<<"NO"<<endl;
                continue;
            }
            if(a.length()>b.length())
            {
                cout<<"NO"<<endl;
                continue;
            }


            string c,d;
            c.PB(a[0]);
            int j=0;

            for(int i=1;i<a.length();i++)
            {
                mp1[a[i]]++;
                if(a[i]!=c[j])
                {
                    c.PB(a[i]);
                    j++;
                }
            }

              d.PB(b[0]);
                    j=0;
            for(int i=1;i<b.length();i++)
            {
                mp2[b[i]]++;
                if(b[i]!=d[j])
                {
                    d.PB(b[i]);
                    j++;
                }
            }

                    bool ok=true;
                for(auto i:mp2)
                {
                    if(i.s<mp1[i.f])
                    {
                        ok=false;
                        break;
                    }
                }

                if(!ok)
                {
                    cout<<"NO"<<endl;
                    continue;
                }
            if(c!=d)
            {
                cout<<"NO"<<endl;
                continue;
            }   
                    j=0;

                for(int i=0;i<b.length();i++)
                {
                    if(a[j]==b[i])
                    {
                        j++;
                    }
                }

                if(j!=a.length())
                {
                    cout<<"NO"<<endl;
                    continue;
                }


                cout<<"YES"<<endl;
            


        }



        return 0;
        


       
    }   