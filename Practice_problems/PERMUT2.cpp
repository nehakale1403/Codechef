#include <bits/stdc++.h>
using namespace std;

int main() {
	while(1){
	    int n, flag=1;
	    cin>>n;
	    int arr[n];
	    if(n==0)
	        break;
	        
	    for(int i=1; i<=n; i++)
	        cin>>arr[i];
	        
	    int inverse[n];
	    for(int i=1; i<=n; i++)
	        inverse[arr[i]] =i;
	   
	    for(int i=1; i<=n; i++){
	        if(arr[i] != inverse[i]){
	            flag=0;
	            break;
	        }
	    }
	    if(flag==0){
	        cout<<"not ambiguous"<<endl;
	    }
	    else{
	        cout<<"ambiguous"<<endl;
	    }
	    
	    
	    
	}
	return 0;
}
