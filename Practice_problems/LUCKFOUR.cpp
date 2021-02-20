#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    
    while(t--){
        int n, count=0, key;
        cin>>n;
        
        while(n>3){
            key=n%10;
            if(key==4)
                count++;
            
            n=n/10;
        }
        cout<<count<<endl;
    }
	return 0;
}
