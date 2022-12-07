#include<iostream>
using namespace std;
int fibo(int n){
    if(n==0)return 0;
    if(n==1)return 1;
    return fibo(n-1)+fibo(n-2);
}
int main(){
    int n;
    cin>>n;
    
    // for(int i=0;i<n;i++){
    //     cout<<fibo(i)<<" ";
    // }
    int prev1=0,prev2=1;
    if(n<1) return 0;
    cout<<prev1<<" ";
    for(int i=1;i<n;i++){
        cout<<prev2<<" ";
        int next=prev1+prev2;
        prev1=prev2;
        prev2=next;
    }

}