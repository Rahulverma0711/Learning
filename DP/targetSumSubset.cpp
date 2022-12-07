#include<bits/stdc++.h>
using namespace std;
bool targetSum(int i,int ssf,int target,vector<int>&arr){
    if(i==arr.size()){
        if(ssf==target) return true;
        return false;
    }
    return targetSum(i+1,ssf+arr[i],target,arr) || targetSum(i+1,ssf,target,arr);
}
int main(){
    int n,tar;
    cin>>n;
    vector<int>arr(n);
    for(auto &x:arr) cin>>x;
    cin>>tar;

    bool ans=targetSum(0,0,tar,arr);
    cout<<ans;
    return 0;
  

}