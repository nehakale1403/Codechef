#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int w1, w2, x1, x2, m, diff, lb, ub;
	    cin>>w1>>w2>>x1>>x2>>m;
	    diff = w2-w1;
	    lb=m*x1;
	    ub=m*x2;
	    if((lb<=diff) && (ub>=diff))
	        cout<<'1'<<endl;
	    else
	        cout<<"0"<<endl;
	}
	return 0;
}
