#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>ans;
void printSubsequence(int idx,vector<int>&arr,int asf){
    if(idx>=arr.size()){
        cout<<asf<<"\n";
        return;
    }
    asf+=arr[idx];
    printSubsequence(idx+2,arr,asf);
    asf-=arr[idx];
    printSubsequence(idx+1,arr,asf);

}
int main(){

    int n;
    cin>>n;
    vector<int>arr(n);
    for(auto &x:arr) cin>>x;
    vector<int>asf;
    printSubsequence(0,arr,0);
    
    return 0;
}