#include <iostream>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main() {
	IOS
	int n;
	cin>>n;
	int arr[n];
	int sum=0;
	
	for(int i=0;i<n;i++)
	{
	    cin>>arr[i];
	    sum+=arr[i];
	}
	
	int count=0;
	for(int i=1;i<=5;i++)
	{
	    if(((sum+i)%(n+1))==1)
	        count++;
	}
	
	cout<<5-count;
	
	return 0;
}