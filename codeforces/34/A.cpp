#include <iostream>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main() {
	IOS
	
	
	int n;
	cin>>n;
	int arr[n];
	
	for(int i=0;i<n ;i++)
	{
	    cin>>arr[i];
	}
	
	int ans1=1,ans2=n;
	
	int ans=abs(arr[n-1]-arr[0]);
	for(int i=0;i<n-1;i++)
	{
	    if(ans>abs(arr[i+1]-arr[i]))
	    {
	        ans=abs(arr[i+1]-arr[i]);
	        ans1=i+1;
	        ans2=i+2;
	        
	    }
	}
	
	cout<<ans1<<" "<<ans2;
	
	return 0;
}