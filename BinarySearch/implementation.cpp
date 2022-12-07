#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[],int start,int end,int data){
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==data){
            return mid;
        }else if(arr[mid]>data){
            end=mid-1;
        }else {
            start=mid+1;
        }
    }
    return -1;
}
int main(){
    int n,data;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    cin>>data;
    int ans=binarySearch(arr,0,n-1,data);
    cout<<ans;
}