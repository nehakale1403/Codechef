#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void hits(){
    int n;
    cin>>n;
    long long weight[n], jumps[n], curr_pos[n], copy[n];
    
    for(int i=0;i<n; i++){
        cin>>weight[i];
    }
    for(int i=0; i<n; i++){
        cin>>jumps[i];
    }
    
    for(int i=0; i<n; i++){
        copy[i] = weight[i];
        curr_pos[i] = i;
    }
    
    if(n==2){
        if(weight[0]>weight[1]){
            if(jumps[0] == 1)
                cout<<"2"<<endl;
            else
                cout<<"1"<<endl;
        }
        else{
            cout<<"0"<<endl;
        }
    }
    else if(n==3){
        sort(copy, copy+n);
        int k=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(copy[i] == weight[j]){
                    curr_pos[k] = j;
                    k++;
                }
            }
        }
        
        for(int i=0; i<n; i++){
            copy[i] = curr_pos[i];
        }
        int count = 0;
        while(curr_pos[1]<=curr_pos[0]){
            ++count;
            curr_pos[1]+=jumps[copy[1]];
        }
        while(curr_pos[2]<=curr_pos[0] || curr_pos[2]<= curr_pos[1]){
            ++count;
            curr_pos[2]+=jumps[copy[2]];
        }
        cout<<count<<endl;
    }
    else{
        sort(copy, copy+n);
        int k=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(weight[j]==copy[i]){
                    curr_pos[k]=j;
                    k++;
                }
            }
        }
        
        for(int i=0; i<n; i++){
            copy[i] = curr_pos[i];
        }
        
        int count = 0;
        while(curr_pos[1]<=curr_pos[0]){
            ++count;
            curr_pos[1]+=jumps[copy[1]];
        }
        while(curr_pos[2]<=curr_pos[0] || curr_pos[2]<=curr_pos[1]){
            ++count;
            curr_pos[2]+=jumps[copy[2]];
        }
        while(curr_pos[3]<=curr_pos[0] || curr_pos[3]<=curr_pos[1] || curr_pos[3]<=curr_pos[2]){
            ++count;
            curr_pos[3]+=jumps[copy[3]];
        }
        cout<<count<<endl;
    }
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    hits();
	}
	return 0;
}
    