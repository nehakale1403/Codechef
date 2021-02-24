#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    char i;
	    cin>>i;
	    
	    if(i == 'b' || i == 'B')
	        cout<<"BattleShip"<<endl;
	    else if(i == 'c' || i == 'C')
	        cout<<"Cruiser"<<endl;
	    else if(i == 'd' || i == 'D')
	        cout<<"Destroyer"<<endl;
	    else if(i == 'f' || i == 'F')
	        cout<<"Frigate"<<endl;
	}
	return 0;
}
 