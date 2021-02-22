#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a, b, min, max;
	    cin>>a>>b;
	    if(a>b)
	        min=a;
	    else
	        min=b;
	   
	    max=a+b;
	    cout<<min<<" "<<max<<endl;
	}
	return 0;
}
