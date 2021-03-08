#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n], flag=1, count=0;
	    for(int i=0; i<n; i++)
	        cin>>arr[i];
	        
	    
	    sort(arr, arr+n);
	    
	    for(int i=0; i<n; i++){
	        if(arr[i]>i+1){
	            flag=2;
	            break;
	        }
	            
	        count+=(i+1-arr[i]);
	    }
	    
	    if(flag==2){
	        cout<<"Second"<<endl;
	    }else{
	        if(count%2 == 0)
	            cout<<"Second"<<endl;
	        else
	            cout<<"First"<<endl;   
	    }
	        
	    
	}
	return 0;
}
