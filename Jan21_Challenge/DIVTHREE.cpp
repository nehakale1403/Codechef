#include <iostream>
using namespace std;

int main() {
	
	int t, n, k, d, total_ques, avg_per_day;
	cin>>t;
	for(int i=0; i<t; i++){
	    
	    cin>>n>>k>>d;
	    int a[n]={0};
	    total_ques=0;
	    for(int j=0; j<n; j++){
	        cin>>a[j];
	        total_ques+=a[j];
	        
	    }
	    avg_per_day=total_ques/k;
	  
	    if(avg_per_day<d){
	        cout<<avg_per_day<<endl;
	    }else{
	        cout<<d<<endl;
	    }
	    
	}
	return 0;
}
