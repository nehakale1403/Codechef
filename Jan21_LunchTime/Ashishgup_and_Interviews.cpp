#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int n, sum=0;
	    cin>>n;
	    int arr[n];
	    
	    for(int i=0; i<n; i++){
	        cin>>arr[i];
	        sum+=arr[i];
	    }
	    
	    if(sum%2 == 0)
	        cout<<"1"<<endl;
	    else
	        cout<<"2"<<endl;
	}
	return 0;
}
