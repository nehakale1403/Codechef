#include <bits/stdc++.h>
#include<string.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n, k;
	    cin>>n>>k;
	    int marks[k];
	    
	    for(int i=0; i<k; i++)
	        cin>>marks[i];
	    
	    for(int i=0; i<n; i++){
	        string str;
	        long long total=0;
	        cin>>str;
	        
	        for(int j=0; j<k; j++){
	            if(str[j]=='1')
	                total+=marks[j];
	        }
	        cout<<total<<endl;
	    }
	}
	return 0;
}
