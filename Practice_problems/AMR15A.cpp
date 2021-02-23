#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, oddcount=0, evencount=0;
	cin>>n;
	
	for(int i=0; i<n; i++){
	    int t;
	    cin>>t;
	    if(t%2==0){
	        evencount++;
	    }else{
	        oddcount++;
	    }
	}
	
	if(evencount>oddcount){
	    cout<<"READY FOR BATTLE"<<endl;
	}else{
	    cout<<"NOT READY"<<endl;
	}
	return 0;
}
