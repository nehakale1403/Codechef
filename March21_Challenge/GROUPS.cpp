#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    string s;
	    int groups=0;
	    cin>>s;
	    if(s[0] == '1'){
	        groups=1;
	    }
	    for(int i=0; i<s.length(); i++){
	        if(s[i]=='1'){
	            if(s[i-1]=='0')
	                groups++;
	        }
	    }
	    cout<<groups<<endl;
	}
	return 0;
}
