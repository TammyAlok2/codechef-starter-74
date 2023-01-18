#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,p;
	int i,count=0;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr1[n];
	    int arr2[n];
	    for(i=0;i<n;i++)
	    {
	        cin>>arr1[i];
	    }
	     for(i=0;i<n;i++)
	    {
	        cin>>arr2[i];
	    }
	    
	   int newarr[n];
for(i=0;i<n;i++)
{
 newarr[i]=arr1[i]+arr2[i];
	}
	int max =0;
	for(int i=0;i<n;i++)
	{
	    if(arr1[max]<arr1[i])
	    {
	        max=i;
	    }
	    if(arr1[max]==arr1[i])
	    {
	        if(newarr[i]>newarr[max]){
	            max=i;
	        }
	    }
	}
	cout<<max+1<<endl;
	}
	return 0;
}
