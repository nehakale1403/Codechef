#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    long n, x, y, z, max;
	    cin>>n;
	    long arr[n];
	    for(int i=0; i<n; i++){
	        cin>>arr[i];
	    }
	    sort(arr, arr+n);
	    
	    x=arr[0];
	    y=arr[1];
	    z=arr[n-1];
	    max = abs(x-y)+abs(y-z)+abs(z-x);
	    cout<<max<<endl;
	    
	}
	return 0;
}
