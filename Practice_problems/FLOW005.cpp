#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n, count=0;
	    cin>>n;
	    count = count+(n/100);
	    n=n%100;
	    count = count+(n/50);
	    n=n%50;
	    count = count+(n/10);
	    n=n%10;
	    count = count+(n/5);
	    n=n%5;
	    count = count+(n/2);
	    count = count+(n%2);
	    
	    cout<<count<<endl;
	    
	}
	return 0;
}
