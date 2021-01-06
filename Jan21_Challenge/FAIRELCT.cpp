#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int t;
    cin>>t;
    while(t--){
        
        int n, m;
        cin>>n>>m;
        int a[n];
        int b[m];
        for(int i=0; i<n; i++)
            cin>>a[i];
        for(int j=0; j<m; j++)
            cin>>b[j];
        
        int sum_a, sum_b, temp, swap=0;
        int flag = 0;
        
        sum_a = accumulate(a, a+n, 0);
        sum_b = accumulate(b, b+m, 0);
        
        while(sum_a<= sum_b){
            
            sort(a, a+n);
            sort(b, b+m);
            if(a[0] < b[m-1]){
                //swapping
                swap++;
                temp = a[0];
                a[0] = b[m-1];
                b[m-1] = temp;
            }
            else if(a[0] >=b[m-1]){
                flag=1;
                cout<<"-1"<<endl;
                break;
            }
            
            sum_a = accumulate(a, a+n, 0);
            sum_b = accumulate(b, b+m, 0);
            
        }
        if(flag == 0)
            cout<<swap<<endl;
    }
    return 0;
}