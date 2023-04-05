#include<bits/stdc++.h>
using namespace std;
int solve(vector<int>&arr,int n){
    if(n==1){
        return abs(arr[n]-arr[n-1]);
    }
    int step1=solve(arr,n-1)+abs(arr[n-1]-arr[n]);
    int step2=solve(arr,n-2)+abs(arr[n-2]-arr[n]);
    int ans= min(step1,step2);
    cout<<ans;
    return ans;


}
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
   int ans=solve(v,n-1);
   cout<<ans;
   //rahul 

    return 0;
}