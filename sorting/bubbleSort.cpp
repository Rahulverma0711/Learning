#include<bits/stdc++.h>
using namespace std;
void swap(int arr[],int i,int j){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;

}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
for(int i=1;i<=n-1;i++){
    for(int j=0;j<n-i;j++){
        if(arr[j]>arr[j+1]){
            swap(arr,j,j+1);
        }
    }
}
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    return 0;
}