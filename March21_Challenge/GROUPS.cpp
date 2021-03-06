// There are N seats in a row. You are given a string S with length N; for each valid i, the i-th character of S is '0' if the i-th seat is empty or '1' if there is someone sitting in that seat.

// Two people are friends if they are sitting next to each other. Two friends are always part of the same group of friends. Can you find the total number of groups?


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
