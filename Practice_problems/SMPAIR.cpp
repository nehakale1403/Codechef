#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n, one, two, i;
	    cin>>n;
	    int arr[n];
	    for(int i=0; i<n; i++)
	        cin>>arr[i];
	        
	    sort(arr, arr+n);
	    one=arr[0];
	    i=1;
	    while(arr[0]==arr[i])
	        i++;
	    
	    two=arr[i];
	    cout<<one+two<<endl;
	    
	}
	return 0;
}
