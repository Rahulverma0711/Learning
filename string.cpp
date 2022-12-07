#include<iostream>
using namespace std;
int main(){

   string s;
   cin>>s;
   int i=0;
   int size=0;
   while(s[i]!='\0'){
    size++;
    i++;
   }
   cout<<size;

    return 0;
}