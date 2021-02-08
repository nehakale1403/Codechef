#include <iostream>
using namespace std;

int total_mins(int hour, int min, string ampm){
    if(hour == 12){
        if(ampm == "AM"){
            hour = 0;
        }
    }else{
        if(ampm == "PM"){
            hour+=12;
        }
    }
    return((hour*60)+min);
}

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int phour, pmin, n, ptotal;
	    char ch;
	    string ampm;
	    cin>>phour>>ch>>pmin>>ampm;
	    ptotal = total_mins(phour,pmin,ampm);
	    
	    cin>>n;
	    while(n--){
	        int lhour, lmin, rhour,rmin, ltotal, rtotal;
	        char c;
	        string ap1, ap2;
	        cin>>lhour>>c>>lmin>>ap1>>rhour>>c>>rmin>>ap2;
	        
	        ltotal = total_mins(lhour, lmin, ap1);
	        rtotal = total_mins(rhour, rmin, ap2);
	        
	        if((ltotal <= ptotal) && (ptotal<=rtotal)){
	            cout<<"1";
	        }else{
	            cout<<"0";
	        }
	    }
	    cout<<endl;
	}
	return 0;
}
