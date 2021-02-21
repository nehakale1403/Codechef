#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, player1, player2, player1total=0, player2total=0,lead, maxLead=0, winner, finalwinner;
	cin>>n;
	
	for(int i=0; i<n; i++){
	    cin>>player1>>player2;
	    player1total+=player1;
	    player2total+=player2;
	    
	    if(player1total>player2total){
	        lead=player1total-player2total;
	        winner=1;
	    }else{
	        lead=player2total- player1total;
	        winner=2;
	    }
	    
	    if(maxLead<lead){
	        maxLead=lead;
	        finalwinner=winner;
	    }
	}
	
	
	cout<<finalwinner<<" "<<maxLead<<endl;
	
	return 0;
}