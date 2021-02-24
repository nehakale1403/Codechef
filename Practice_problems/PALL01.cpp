#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n, rev=0, num;
	    cin>>n;
	    num=n;
	    while(num!=0){
	        rev = (rev*10) + (num%10);
	        num=num/10;
	    }
	    
	    if(rev == n){
	        cout<<"wins"<<endl;
	    }else{
	        cout<<"loses"<<endl;
	    }
	}
	return 0;
}
