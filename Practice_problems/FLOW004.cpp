#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    
    while(t--){
        int n,first, last;
        cin>>n;
        last = n%10;
        while(n>=10){
            n=n/10;
        }
        first=n;
        
        cout<<(first+last)<<endl;
        
    }
	return 0;
}
