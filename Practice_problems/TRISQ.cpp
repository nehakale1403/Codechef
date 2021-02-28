#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        if(n<4){
            cout<<"0"<<endl;
        }else{
            n=n-2;
            n=n/2;
            cout<<(n*(n+1))/2<<endl;
        }
    }
}