#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int n, k, minus1_cnt=0, flag=0, flag2=0;
	    cin>>n>>k;
	    int arr[n]={0};
	    
	    for(int i=0; i<n; i++){
	        cin>>arr[i];
	        if(arr[i]==-1)
	            minus1_cnt+=1;
	        
	        if(arr[i]>k)
	            flag=1;
	       
	        if(arr[i]>1)
	            flag2=1;
	    }
	    
	    
	    
	    if(minus1_cnt > (n/2)){
	        cout<<"Rejected"<<endl;
	    }else if(flag==1){
	        cout<<"Too Slow"<<endl;
	    }else if(flag2==0 && minus1_cnt==0){
	        cout<<"Bot"<<endl;
	    }else{
	        cout<<"Accepted"<<endl;
	    }
	    
	}
	return 0;
}
