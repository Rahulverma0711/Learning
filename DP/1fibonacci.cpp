#include<bits/stdc++.h>
using namespace std;
int fibo1(int n){
    if(n<=1) return n;
    return fibo1(n-1)+fibo1(n-2);
}

// ---------------------------------------------------
int fibo2(int n,vector<int>& dp){
    if(n<=1) return n;
    if(dp[n]!=-1) return dp[n];
    return dp[n]=fibo2(n-1,dp)+fibo2(n-2,dp);
}

// -----------------------------------------------
int fibo3(int n){
    
    vector<int>dp(n+1);
   
    for(int i=0;i<=n;i++){
        if(i<=1) dp[i]=i;
        else dp[i]=dp[i-1]+dp[i-2];
    }
    return dp[n];
}

// -------------------------------
int fibo4(int n){
    int prev2=0,prev=1;
    if(n==0) return prev2;
    if(n==1) return prev;

    for(int i=2;i<=n;i++){
        int curr=prev2+prev;
        prev2=prev;
        prev=curr;
    }
    return prev;
}
int main(){
    int n;
    cin>>n;
    vector<int> dp(n+1,-1);
   
    cout<<fibo4(6);
    
    return 0;
}