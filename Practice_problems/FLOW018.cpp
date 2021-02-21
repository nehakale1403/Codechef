#include <iostream>
using namespace std;

void solve(int n){
    int fact=1;
    for(int i=2; i<=n; i++){
        fact=fact*i;
    }
    cout<<fact<<endl;
}

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int n;
	    cin>>n;
	    solve(n);
	}
	return 0;
}
