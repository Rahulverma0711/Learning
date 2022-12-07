#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[],int start,int end,int data){
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==data){
            return mid;
        }else if(arr[mid]>data){
            start=mid+1;
        }else {
            end=mid-1;
        }
    }
    return -1;
}
double esp=1e-6;
int main(){
    double n;
    cin>>n;
    double start=1,end=n,mid;
    while(end-start>esp){
       mid=start+(end-start)/2;
       if(mid*mid<n){
           start=mid;
       }else{
             end=mid;
       } 
    }
    cout<<start<<" "<<end;


}