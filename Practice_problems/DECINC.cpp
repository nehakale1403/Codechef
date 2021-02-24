#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	if(n%4==0){
	    n=n+1;
	}else{
	    n=n-1;
	}
	
	cout<<n<<endl;
	return 0;
}
