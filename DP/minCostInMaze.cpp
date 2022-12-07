#include<bits/stdc++.h>
using namespace std;
int n,m;
//recursion 
int minCost(int r,int c,vector<vector<int>>&arr,int n,int m){
  if(r>=n || c>=m) return INT_MAX-1;
  if(r==n-1 && c==m-1) return arr[r][c];
  
  int right=minCost(r,c+1,arr,n,m);
  int down=minCost(r+1,c,arr,n,m);
  return min(right,down)+arr[r][c];
  
}
//memoization
int minCostMemo(int r,int c,vector<vector<int>>&arr,int n,int m,vector<vector<int>>&dp){
  if(r>=n || c>=m) return INT_MAX-1;
  if(r==n-1 && c==m-1) return arr[r][c];
  if(dp[r][c]!=-1)return dp[r][c];

  int right=minCostMemo(r,c+1,arr,n,m,dp);
  int down=minCostMemo(r+1,c,arr,n,m,dp);
  return dp[r][c]=min(right,down)+arr[r][c];
  
}
int main(){
    
    cin>>n>>m;
    vector<vector<int>> arr(n,vector<int>(m));

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
   vector<vector<int>>dp(n,vector<int>(m)); 
//    int ans=minCostMemo(0,0,arr,n,m,dp);
//    cout<<ans;
for(int i=n-1;i>=0;i--){
    for(int j=m-1;j>=0;j--){
        if(i==n-1 && j==m-1){
            dp[i][j]=arr[i][j];
        }else if(i==n-1){
             dp[i][j]=dp[i][j+1]+arr[i][j];
        }else if(j==m-1){
            dp[i][j]=dp[i+1][j]+arr[i][j];
        }else{
            dp[i][j]=min(dp[i][j+1],dp[i+1][j])+arr[i][j];
        }
    }
    
}


cout<<dp[0][0];

   return 0;

}