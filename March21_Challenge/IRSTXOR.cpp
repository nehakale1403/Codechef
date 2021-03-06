// You are given an integer C. Let d be the smallest integer such that 2d is strictly greater than C.

// Consider all pairs of non-negative integers (A,B) such that A,B<2d and A⊕B=C (⊕ denotes the bitwise XOR operation). Find the maximum value of A⋅B over all these pairs.

#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	int t;
	cin>>t;
	while(t--){
	    int c, d, i=0, p, max=0, prod, pp;
	    cin>>c;
	    while(1){
	        p=pow(2, i);
	        if(p>c){
	            d=i;
	            break;
	        }
	        i++;
	    }
	    
	    for(int a=p; a>0; a--){
	        for(int b=p; b>0; b--){
	            pp=a^b;
	            if(pp == c){
	                prod=a*b;
	                if(max<prod)
	                    max=prod;
	            }
	        }
	    }
	    cout<<max<<endl;
	}
	return 0;
}
