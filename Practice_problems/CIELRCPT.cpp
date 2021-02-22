#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int p, a;
	    cin>>p;
        
        a=p/2048;
        p=p%2048;
        
        while(p!=0){
            a=a+(p%2);
            p=p/2;
        }
        cout<<a<<endl;
	}
	
	return 0;
}
