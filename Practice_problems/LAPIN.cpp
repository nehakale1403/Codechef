#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    string s, s1, s2;
	    int len, i, j;
	    cin>>s;
	    len = s.length();
	    for(i=0; i<len/2; i++){
	        s1.push_back(s[i]);
	    }
	    
	    if(len%2 == 0){
    	    for(j=i; j<len; j++){
    	    s2.push_back(s[j]);
    	    }
	    }else{
	        for(j=i+1; j<len; j++){
	        s2.push_back(s[j]);
	        }
	    }
	    
	    sort(s1.begin(), s1.end());
	    sort(s2.begin(), s2.end());
	    
	    if(s1==s2)
	        cout<<"YES"<<endl;
	    else
	        cout<<"NO"<<endl;
	}
	return 0;
}
