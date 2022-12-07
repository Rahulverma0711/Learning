#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,n1;
    cin>>n1;
    n=n1;
    int rev=0;
    while(n>0){
        int ld=n%10;
        rev=rev*10+ld;
        n/=10;
    }
   cout<<rev;
}