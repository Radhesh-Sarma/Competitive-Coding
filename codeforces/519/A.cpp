#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define SQ(a) (a)*(a)
#define f first
#define s second
#define PB push_back
#define MP make_pair
#define int long long
#define db long double
#define all(a) a.begin(), a.end()
#define Max(x,y,z) max(x,max(y,z))
#define Min(x,y,z) min(x,min(y,z))
#define trace1(x)                cerr<<#x<<": "<<x<<endl
#define trace2(x, y)             cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
#define trace3(x, y, z)          cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
#define trace4(a, b, c, d)       cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl
#define trace5(a, b, c, d, e)    cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl
#define trace6(a, b, c, d, e, f) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<endl
int ans=0;



int32_t main()
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
 #endif
IOS
int x=0,y=0;


for(int i=0;i<8;i++)
{
	for(int j=0;j<8;j++)
	{
		char ch;
		cin>>ch;
		if(ch!='.')
		{
			
		 if(ch=='Q')
			{
				x+=9;

			}
				else	if(ch=='R')
			{
				x+=5;
				
			}

				 else if(ch=='N')
			{
				x+=3;
				
			}

				else if(ch=='B')
			{
				x+=3;
				
			}
				else if(ch=='q')
			{
				y+=9;
				
			}

				else if(ch=='P')
			{
				x+=1;
				
			}
				else	if(ch=='r')
			{
				y+=5;
				
			}

				 else if(ch=='n')
			{
				y+=3;
				
			}

				else if(ch=='b')
			{
				y+=3;
				
			}

				else if(ch=='p')
			{
				y+=1;
				
			}

		}
	}
}



if(x>y)
{
	cout<<"White";

}
else if(x==y)
{
	cout<<"Draw";
}
else
{
	cout<<"Black";

}


#ifndef ONLINE_JUDGE
	cerr << "\n\nTime elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n\n";
#endif
	
return 0;


}