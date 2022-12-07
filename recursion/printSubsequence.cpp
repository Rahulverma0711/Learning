#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>ans;
void printSubsequence(int idx,vector<int>&arr,vector<int>&asf){
    if(idx>=arr.size()){
        ans.push_back(asf);
        return;
    }
    asf.push_back(arr[idx]);
    printSubsequence(idx+2,arr,asf);
    asf.pop_back();
    printSubsequence(idx+1,arr,asf);

}
int main(){

    int n;
    cin>>n;
    vector<int>arr(n);
    for(auto &x:arr) cin>>x;
    vector<int>asf;
    printSubsequence(0,arr,asf);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}