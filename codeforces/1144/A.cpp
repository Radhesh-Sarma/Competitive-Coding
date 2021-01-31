  #include<bits/stdc++.h>
  using namespace std;
  #define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  #define endl "\n"
  #define cases int testcases;cin>>testcases; while(testcases--)


  int32_t main()
  {
  IOS
         


              
              cases
              {

                    string s;
                    cin>>s;
                    sort(s.begin(),s.end());
                      bool ok1=true,ok2=true;

                    for(int i=0;i<s.length()-1;i++)
                    {
                        if(s[i]==s[i+1])
                        {
                            ok1=false;
                            break;
                        }
                        int a=s[i];
                        int b=s[i+1];
                        if((b-a)!=1)
                        {
                          ok2=false;
                        }
                    }
                    if(ok1&&ok2)
                    {
                      cout<<"Yes"<<endl;
                    }
                    else
                    {
                      cout<<"No"<<endl;
                    }

                  
            
              }


      return 0;
      }
   

     