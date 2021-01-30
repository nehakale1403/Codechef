#include <iostream>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	
	while(t--){
	    int a,b,c, max=NULL, rem1, rem2, total=0;
	    cin>>a>>b>>c;
	    
	    if(a>=b && a>=c){
	        max = a;
	        rem1=b;
	        rem2=c;
	    }else if(b>=c){
	        max = b;
	        rem1 = a;
	        rem2 = c;
	    }else{
	        max = c;
	        rem1 = a;
	        rem2 = b;
	    }
	        
        total = rem1 + rem2;
        if(total == max)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
	        
	}
	return 0;
}
