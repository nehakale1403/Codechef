#include<iostream>
using namespace std;

int main(){
    
    int t;
    cin>>t;
    
    while(t--){
        int n, fact;
        cin>>n;
        fact=n;
        while(--n){
            fact = fact*n;
        }
        cout<<fact<<endl;
        
    }
}