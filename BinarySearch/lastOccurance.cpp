#include<bits/stdc++.h>
using namespace std;
int lastOccurance(int arr[],int start,int end,int data){
   int ans=-1;  
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]>data){
            end=mid-1;
        }else if(arr[mid]<data){
            start=mid+1;
        }else{
            ans=mid;
            start=mid+1;
        }
    }

    return ans;
}
int main(){
    int n,data;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    cin>>data;
    int ans=lastOccurance(arr,0,n-1,data);
    cout<<ans;
}