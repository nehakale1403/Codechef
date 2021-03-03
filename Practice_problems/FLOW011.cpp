#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    double salary, hra, da;
	    cin>>salary;
	    if(salary<1500){
	        hra = 0.1*salary;
	        da = 0.9*salary;
	    }else{
	        hra = 500;
	        da = 0.98*salary;
	    }
	    std::cout << std::fixed;
	    std::cout<<std::setprecision(2)<<salary+hra+da<<endl;
	}
	return 0;
}
