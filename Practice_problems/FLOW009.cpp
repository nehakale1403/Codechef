#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    double qty, price, total, n;
	    cin>>qty>>price;
	    if(qty<=1000){
	        total = qty*price;
	    }else{
	        n = qty*price;
	        total = n - 0.1*n;
	    }
	    std::cout << std::setprecision(6) << std::fixed;
	    cout<<total<<endl;
	}
	return 0;
}
