#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll n;
    ll count=0;
    cin>>n;
    string arr[n];
    for(ll i=0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr, arr+n);
    
    string p,q;
    
    for(ll i=0; i<n; i++){
        for(ll j=i+1; j<n; j++){
            p=arr[i];
            q=arr[j];
            //cout<<"Before swapping "<<p<<" "<<q<<endl;
            swap(p[0], q[0]);
            //cout<<"After swapping "<<p<<" "<<q<<endl;
            if(p[0]==q[0]){
                
            }else if(p==q){
                
            }else if((!(binary_search(arr, arr+n, p))) && (!(binary_search(arr, arr+n, q)))){
                swap(p[0], q[0]);
                if((binary_search(arr, arr+n, p)) && (binary_search(arr, arr+n, q))){
                   // cout<<"Counted "<<p<<" "<<q<<endl;
                    count+=2;
                }
                    
            }
        
        }
    }
    cout<<count<<endl;
}

int main() {
    
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin>>t;
    
    while(t--){
        solve();
    }
	
	return 0;
}
