// Only x hours are left for the March Long Challenge to end and Chef is only left with the last problem and he is sure that he can't complete the problem in this much time. As per his experience, he figures out that he needs exactly H hours to solve the problem.

// Now he finally decides to use his special powers which he has gained through several years of intense yoga. He can travel back in time using his concentration. In total his power allows him to travel to N different time zones which are T1,T2,…,TN units of time behind the present time.

// Find whether he can use one of the available time zones to solve the problem and submit it before the contest ends



#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, h, x, answer, flag=0;
	cin>>n>>h>>x;
	int arr[n];
	for(int i=0; i<n; i++)
	    cin>>arr[i];
	  
	for(int i=0; i<n; i++){
	    answer=x+arr[i];
	    if(answer>=h){
	        flag=1;
	        break;
	    }
	}
	if(flag == 1){
	    cout<<"YES"<<endl;
	}else{
	    cout<<"NO"<<endl;
	}
	return 0;
}
