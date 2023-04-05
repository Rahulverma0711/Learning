#include<bits/stdc++.h>
using namespace std;
int rec(int n){
    if(n==0){
        return 1;
    }
   int step1=0,step2=0; 
   if(n>=1) step1=rec(n-1);
   if(n>=2) step2=rec(n-2);
   return step1+step2;

    
}
int memo(int n,vector<int> &dp){
    if(n==0){
        return dp[n]=1;
    }
    if(dp[n]!=-1){
        return dp[n];
    }

    int step1=0,step2=0;
    if(n>=1) step1=memo(n-1,dp);
    if(n>=2) step2=memo(n-2,dp);
    dp[n]=step1+step2;

    return dp[n];
}
int tab(int n){
    vector<int> dp(n+1);

    dp[0]=1;
    for(int i=1;i<=n;i++){
        if(i==1) dp[i]=dp[i-1];
        else dp[i]=dp[i-1]+dp[i-2];

    }
    return dp[n];

}
int spaceOpt(int n){
    int prev2=0,prev=1;
    for(int i=1;i<=n;i++){
        int curr=prev2+prev;
        prev2=prev;
        prev=curr;
    }
    return prev;
}
int main(){
    int n;
    cin>>n;
    vector<int>dp(n+1,-1);
    // cout<<memo(n,dp);
    cout<<spaceOpt(n);
    return 0;
}