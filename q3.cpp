#include<bits/stdc++.h>
#include<string>
using namespace std;
void fun(string s,int idx,string asf,vector<int>&container){
	if(idx==s.length()){
		if(asf.length()==0) return;
		int x=stoi(asf);
		container.push_back(x);
		return;
	}
	asf.push_back(s[idx]);
	fun(s,idx+1,asf,container);
	asf.pop_back();

	fun(s,idx+1,asf,container);
	

}
int main(){

    int n,k;
	cin>>n>>k;
	string s=to_string(n);
	vector<int> container;
	fun(s,0,"",container);
	int ans;
	sort(container.begin(),container.end());
	for(auto &x:container){
		if(x>=k){
			ans=x;
			break;
		}
	}
	cout<<ans;
	
}