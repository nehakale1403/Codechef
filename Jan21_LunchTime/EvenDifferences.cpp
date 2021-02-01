// You have an array consisting of N integers a1,a2...aN. You may perform the following operation zero or more times.

// Choose any index i (1≤i≤N) and set ai:=ai+1
// Determine the minimum number of operations you have to perform so that all pairwise differences in the resulting array are even.
// More formally, in the resulting array it should hold that, for every i and j (1≤i,j≤N), ai−aj is even.

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
