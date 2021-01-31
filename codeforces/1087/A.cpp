#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

int32_t main()
{
	IOS
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif



	string input,ans;
    		int k,i,j,a,n;
    	    cin>>input;
    	    ans=input;
    	    n=input.length();
    	    k=n/2-1; 
    	    if(n%2==0)
    	    {
    	    	int i=0,j=n-1,a=0;
    		    while(1)
    		    {
    				ans[a++]=input[j--];
    				ans[a++]=input[i++];
    				if(j==k)
    				{
    					break;
    				}
    	    	}
    	    }
    	    else if(n==1)
    	    {
    	    	cout<<input<<endl;
    	    	return 0;
    	    }
    	    else
    	    {
    	    	k=n/2;
    	    	int i=0,j=n-1,a=0;
    		    while(true)
    		    {
    				ans[a++]=input[i++];
    				ans[a++]=input[j--];
    				if(i==k)
    				{
    					ans[a++]=input[k];
    					break;
    				}
    	    	}
    	    }
    	    reverse(ans.begin(),ans.end());
    	    cout<<ans<<endl;
        	return 0;



}
