#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,n1;
    cin>>n;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            if(n/i==i){
                cout<<i<<" ";
            }else{
                cout<<i<<" "<<n/i<<" ";
            }
            
        }
    }
}