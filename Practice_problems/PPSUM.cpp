#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int d, n, total=0;
	    cin>>d>>n;
	    for(int i=1; i<=d; i++){
	        total=0;
	        for(int j=1; j<=n; j++){
	            total=total+j;
	        }
	        n=total;
	    }
	    cout<<total<<endl;
	}
	return 0;
}
