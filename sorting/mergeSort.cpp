#include<bits/stdc++.h>
using namespace std;
vector<int> merge(vector<int>&A,vector<int>&B){
    int n=A.size();
    int m=B.size();
    int i=0,j=0,k=0;
    vector<int> ans(n+m);
    while(i<n && j<m){
        if(A[i]<B[j]){
            ans[k]=A[i];
            i++;
            k++;
        }else{
            ans[k]=B[j];
            j++;
            k++;
        }
    }
    while(i<n){
        ans[k]=A[i];
        i++;
        k++;
    }
    while(j<m){
        ans[k]=B[j];
        j++;
        k++;
    }
    return ans;
}
vector<int> mergeSort(vector<int>&arr,int s,int e){
    if(s==e){
        vector<int>bans;
        bans.push_back(arr[s]);
        return bans;
    }
    int mid=(s+e)/2;
    vector<int>a=mergeSort(arr,s,mid);
    vector<int>b=mergeSort(arr,mid+1,e);
    return merge(a,b);
}
int main(){
    int n,m;
    cin>>n;
    vector<int>arr1(n);
    for(auto &x:arr1) cin>>x;
    
    // cin>>m;
    // vector<int>arr2(m);
    
   
    // for(auto &x:arr2) cin>>x;
    // sort(arr1.begin(),arr1.end());
    // sort(arr2.begin(),arr2.end());

    vector<int>ans=mergeSort(arr1,0,n-1);
    for(auto &x:ans) cout<<x<<" ";

}