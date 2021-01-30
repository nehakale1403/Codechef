#include <iostream>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	
	while(t--){
	    int n, even=0, odd=0;
	    cin>>n;
	    int arr[n]={0};
	    for(int i=0; i<n; i++){
	        cin>>arr[i];
	    }
	    
	    for(int i=0; i<n; i++){
	        if(arr[i]%2 == 0)
	            even+=1;
	        else
	            odd+=1;
	    }
	    
	    if(even>odd)
	        cout<<odd<<endl;
	    else
	        cout<<even<<endl;
	}
	return 0;
}
