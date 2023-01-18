#include <iostream>
#include<climits>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    long long n;
	    cin>>n;
	    long long a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	  
	        
	    long long   alokFirst = INT_MIN;
	
	
    long long alokSecond = INT_MAX;
	    
	    for(int i=0;i<n;i++){
         
	        if(a[i] >=0 && a[i] < alokSecond)
	            alokSecond = a[i];
	            
	       // calculating maximum for negative elemnts
	        if(a[i] < 0 && a[i] > alokFirst)
	            alokFirst=a[i];
	    }
	  
	    long long answer1=min(alokSecond,abs(alokFirst));
	  
	    cout<<answer1-1<<endl;
	}
	return 0;
}
