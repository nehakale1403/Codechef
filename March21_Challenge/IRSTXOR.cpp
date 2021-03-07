#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	int t;
	cin>>t;
	while(t--){
	    long c, d, lower_limit, higher_limit,a,b;
	    cin>>c;
	    d=(log(c)/log(2))+1;
	    
	    lower_limit=pow(2, d-1);
	    higher_limit=pow(2, d)-1;
	    a = higher_limit- lower_limit;
	    b=a^c;
	    cout<<a*b<<endl;
	}
	return 0;
}
//different logic
// while(1){
	   //     p=pow(2, i);
	   //     if(p>c){
	   //         d=i;
	   //         break;
	   //     }
	   //     i++;
	   // }
	    
	   // for(int a=p; a>0; a--){
	   //     for(int b=p; b>0; b--){
	   //         pp=a^b;
	   //         if(pp == c){
	   //             prod=a*b;
	   //             if(max<prod)
	   //                 max=prod;
	   //         }
	   //     }
	   // }
	   
