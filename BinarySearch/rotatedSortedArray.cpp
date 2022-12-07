//find the number of time a sorted array is rotated
//2 5 9 10 12 13 17 ->10 12 13 17 2 5 9
                    //    0  1  2  3 4 5 6
//we can observe that the least element's index is the the number of times the array is rotated.

 #include<bits/stdc++.h>
 using namespace std;
 int rotatedSorted(int arr[],int start,int end,int N){

     while(start<=end){
         if(arr[start]<=arr[end]) return start;
         int mid=start+(end-start)/2;
         int next=(mid+1)%N;
         int prev=(mid-1+N)%N;
         if(arr[mid]<=arr[next] && arr[mid]<=arr[prev]){
             return N-mid;
         }else if(arr[start]<arr[mid]){
             start=mid+1;
         }else if(arr[end]>=arr[mid]){
             end=mid-1;
         }
     }
     return -1;


 }
 int main(){
     int n;
     cin>>n;
     int arr[n];
     for(int i=0;i<n;i++){
         cin>>arr[i];
     }
     int ans=rotatedSorted(arr,0,n-1,n);
     cout<<ans;
 }