#include<bits/stdc++.h>
using namespace std;
void swap(int arr[],int i,int j){
    int t=arr[i];
    arr[i]=arr[j];
    arr[j]=t;
}
int partion(int arr[],int p,int lo,int hi){
    int i=lo,j=lo;
    while(i<=hi){
        if(arr[i]>p){
            i++;
        }else if(arr[i]<p){
            swap(arr,i,j);
            i++;
            j++;
        }
    }
    return j;
}
void print(int arr[],int n){
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void quickSort(int arr[],int lo,int hi){
    if(lo>=hi){
        return;
    }
   int pi=arr[hi];
   int p=partion(arr,pi,lo,hi);
   quickSort(arr,lo,p-1);
   quickSort(arr,p+1,hi);

}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // quickSort(arr,0,n-1);
    
    int pi=partion(arr,arr[n-1],0,n-1);
    // cout<<pi<<endl;
    // print(arr,n);
}