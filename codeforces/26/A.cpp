 #include<bits/stdc++.h>

using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define SQ(a) (a)*(a)
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
#define MOD 1000000007
bool isprime[3001];

bool hastwoprimediv(int n)
{
    
    int ans=0;
    
    for(int i=2;i<=n;i++)
    {
        ab:
        
        if(isprime[i]==true)
        {
            if(n%i==0)
            {
                while(1)
                {
                    if(n%i==0)
                    {
                        n=(n/i);
                    }
                    else
                    {
                      
                        ans++;
                        if(ans>2)
                        {
                            return false;
                        }
                        i++;
                       goto ab;
                       
                        
                    }
                }
            }
        }
    }
    
    if(ans==2)
        return true;
    else
        return false;
    
}


int32_t main()
{
	IOS
 
 int N=3000;


memset(isprime,1,sizeof(isprime));
isprime[0]=1;
isprime[1]=1;

for(int i=2;i*i<=N;i++)
{
    if(isprime[i]==true)
    {
        for(int j=i*i;j<=N;j+=i)
        {
            isprime[j]=false;
        }
    }
}
bool ans1[3001];
for(int i=0;i<=5;i++)
{
    ans1[i]=0;
    
}
ans1[6]=1;
ans1[7]=0;
ans1[8]=0;
ans1[9]=0;

for(int i=10;i<=3000;i++)
{
    if(hastwoprimediv(i)==true)
    {
        ans1[i]=1;
    }
    else
    {
        ans1[i]=0;
    }
}

int ans[3001];
ans[0]=0;
for(int i=1;i<=3000;i++)
{
    ans[i]=ans[i-1]+ans1[i];
}


int n;
cin>>n;

cout<<ans[n];

return 0;
 
 
}