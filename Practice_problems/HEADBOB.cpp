#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n, flag=0;
	    cin>>n;
	    string s;
	    cin>>s;
	    
	    for(int i=0; i<n; i++){
	        if(s[i]=='Y'){
	            flag=1;
	            break;
	        }
	        if(s[i]=='I'){
	            flag=2;
	            break;
	        }
	    }
	    
	    if(flag==1){
	        cout<<"NOT INDIAN"<<endl;
	    }else if(flag==2){
	        cout<<"INDIAN"<<endl;
	    }else{
	        cout<<"NOT SURE"<<endl;
	    }
	    
	}
	return 0;
}
