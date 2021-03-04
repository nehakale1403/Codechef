#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    
    if(b==0)
        return a;
    return gcd(b, a%b);
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n, x;
	    cin>>n;
	    int arr[n];
	    for(int i=0; i<n; i++)
	        cin>>arr[i];
	    
	    x=arr[0];
	    
	    for(int i=1; i<n; i++){
	        x=gcd(x, arr[i]);
	    }
	    
	    for(int i=0; i<n; i++){
	        cout<<arr[i]/x<<" ";
	    }
	    cout<<"\n";
	    
	}
	return 0;
}
