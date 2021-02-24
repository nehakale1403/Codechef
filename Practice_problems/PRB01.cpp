#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int t;
    cin>>t;
	while(t--){
	    int number, flag=0;
	    cin>>number;
		if(number == 0 || number == 1){
			cout<<"no"<<endl;
		}
		else{
			for(int j = 2; j<=sqrt(number);j++){
				if(number % j == 0){ 
				    flag=1;
				    break;
				}
			}
			
			if (flag == 1) 
			    cout<<"no"<<endl;
			else 
			    cout<<"yes"<<endl;	
			
		}
	}
	return 0;
}