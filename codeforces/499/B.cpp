#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define SQ(a) (a)*(a)you
#define f first
#define s second
#define int long long
#define PB push_back
#define MP make_pair
#define db long double
#define all(a) a.begin(), a.end()
#define trace1(x)                cerr<<#x<<": "<<x<<endl
#define trace2(x, y)             cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
#define trace3(x, y, z)          cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
#define trace4(a, b, c, d)       cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl
#define trace5(a, b, c, d, e)    cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl
#define trace6(a, b, c, d, e, f) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<endl
#define cases int testcases;cin>>testcases; while(testcases--)

int arr[1001];


// bool check(db d)
// {

// }
int32_t main()
{
  IOS
  

  #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif
    



            int n,m;
            cin>>n>>m;
            map<string,string> mp1;
            set<string > s1,s2;
            while(m--)
            {
                string a,b;
                cin>>a>>b;
                mp1[a]=b;
                s1.insert(a);
                s2.insert(b);
                
            }

            for(int i=0;i<n;i++)
            {
                string s;
                cin>>s;
                if(s1.count(s)==1)
                {
                    string ss=mp1[s];
                    if(s.length()<=ss.length())
                    {
                        cout<<s<<" ";
                    }
                    else
                    {
                        cout<<ss<<" ";
                    }
                }
                else
                {
                    for(auto i:mp1)
                    {
                        if(i.second==s)
                        {
                            string ss=i.f;
                            if(ss.length()<=s.length())
                            {
                                cout<<ss<<" ";
                            }
                            else
                            {
                                cout<<s<<" ";
                            }
                        }
                    }
                }
            }
                  

            

return 0;
}