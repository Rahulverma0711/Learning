#include<bits/stdc++.h>
using namespace std;
int ceil(int arr[],int start,int end,int data){
    int ans=0;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==data){
            return arr[mid];
        }else if(arr[mid]>data){
            end=mid-1;
        }else if(arr[mid]<data){
            ans=arr[mid];
            start=mid+1;
        }
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int data;
    cin>>data;
    int ans=ceil(arr,0,n-1,data);
    cout<<ans;
}