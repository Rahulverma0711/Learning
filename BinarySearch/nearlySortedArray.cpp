#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[],int start,int end,int data,int N){
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==data){
            return mid;
        }else if(mid+1<N && arr[mid+1]==data){
              return mid+1;
        }else if(mid-1>=0 && arr[mid-1]==data){
            return mid-1;
        }
        else if(arr[mid]>data){
            end=mid-2;
        }else {
            start=mid+2;
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
    int ans=binarySearch(arr,0,n-1,data,n);
    cout<<ans;
}