#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n, k, max_left=0, coins_left=0;
	    cin>>n>>k;
	    for(int i=k; i>0; i--){
	        coins_left=n%i;
	        if(coins_left>max_left){
	            max_left=coins_left;
	        }
	    }
	    cout<<max_left<<endl;
	}
	return 0;
}
