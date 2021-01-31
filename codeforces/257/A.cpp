//AUTHOR:Radhesh Sarma
//INSTITUTION:BITS Pilani Hyderabad Campus

#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define SQ(a) (a)*(a)
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define int long long

#define MOD 1000000007


int32_t main()
{


#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
 #endif
IOS

    int n,m,k,i;

    cin>>n>>m>>k;
    int arr[n];

    for(i=0;i<n;i++)
    	{
    		cin>>arr[i];
    	}

    sort(arr,arr+n,greater<int>());

    int flag=k;

    if(flag>=m)
    {
        cout<<0;
        return 0;
    }

    for(i=0;i<n;i++)
    {
        flag+=arr[i]-1;

        if(flag>=m)
        {
        		break;
       	}

    }


    if(i==n)
    {
   		cout<<-1;
   	}

    else 
    {
    	cout<<i+1;
    }

#ifndef ONLINE_JUDGE
	cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n\n";
#endif
	
return 0;


}




