#include <bits/stdc++.h>
using namespace std;

long findGcd(long a, long b){
    if (b == 0)
        return a;
    return findGcd(b, a % b); 
}

int main() {
    
    ios_base::sync_with_stdio(0); 
    cin.tie(0);                   
    cout.tie(0);
    
	int t;
	cin>>t;
	while(t--){
	    long a, b, gcd, lcm, min, max;
	    cin>>a>>b;
	    
	    if(a>b){
	        min=b;
	    }else{
	        min=a;
	    }
	        
	   gcd = findGcd(a, b);
	   // //GCD
	   // for(int i=min; i>=1; i--){
	   //     if((a%i==0) && (b%i==0)){
	   //         gcd=i;
	   //         break;
	   //     }
	   // }
	    
	    //LCM
	    lcm=(a*b)/gcd;
	    
	    cout<<gcd<<" "<<lcm<<endl;
	}
	return 0;
}
