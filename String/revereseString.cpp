#include<bits/stdc++.h>
using namespace std;
void reverse(string s){
    string str="";
    vector<string>v;
    for(int i=0;i<s.length();i++){
        if(s[i]==' '){
            v.push_back(str);
            str="";
        }else{
            str+=s[i];
        }
    }
    v.push_back(str);
    // for(auto &x:v) cout<<x<<endl;
    for(int i=v.size()-1;i>=0;i--){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return;
}
void mkcap(string s){
    string str="";
    vector<string>v;
    vector<string>ans;
    for(int i=0;i<s.length();i++){
        if(s[i]==' '){
            v.push_back(str);
            str="";
        }else{
            str+=s[i];
        }
    }
    for(int i =0;i<v.size();i++){
        string s=v[i];
        s[0]=toupper(s[0]);
        ans.push_back(s);
    }
    string res="";
    for(auto &x:ans) {
        res+=x;
        res+=" ";
    }
    cout<<endl;
    return;
}
void count(string s,string s1){
   int cnt=0;
   for(int i=0;i<=s.length()-s1.length();i++){
       if(s.substr(i,s1.length())==s1){
           cnt++;
       }
   }
   cout<<cnt;

}
bool isAnagram(string s1,string s2){
    unordered_map<char,int>mp;
    for(int i=0;i<s1.length();i++){
        mp[s1[i]]++;
    }

    for(int i=0;i<s2.length();i++){
        if(mp.find(s2[i])!=mp.end()){
            mp[s2[i]]--;
        }else {
            return false;
        }
    }

    for(auto x:mp){
        cout<<x.first<<endl;

        if(x.second!=0) return false;
    }
  return true;
}
void deleteduplicate(string s){
    unordered_map<char,int>mpp;
    set<char>v;
    for(int i=0;i<s.length();i++){
        v.emplace(s[i]);
        mpp[s[i]]++;
    }
    // for(auto x:mpp) cout<<x.first<<"->"<<x.second<<endl;
    string ans="";
    for(int i=0;i<s.length();i++){
        if(mpp[s[i]]>0){
            mpp[s[i]]=0;
            ans+=s[i];

        }
    }
    cout<<ans;

}
void fun(string s){
    vector<string>v;
    string str="";
    for(int i=0;i<s.length();i++){
        if(s[i]==' '){
            v.push_back(str);
            str="";
        }
        else{str+=s[i];}
    }
    v.push_back(str);
    int fans=0;
    string res="";
    map<char,int>mp;
    for(int i=0;i<v.size();i++){
        string t=v[i];
        mp.clear();
        
        
        for(int i=0;i<t.length();i++){
           mp[t[i]]++;
        }
        for(auto x:mp){
           cout<<x.first<<"->"<<x.second<<" ";
        }
        cout<<endl;
       
        int tans=0;
        for(auto x:mp){
            if(x.second>fans){
                fans=x.second;
                res=v[i];
            }
        }
        

    }
    cout<<res<<endl;
}

void fun2(string s){
    
}
int main(){
 string b="121";
 int a=to_int(b);
  cout<<a;

}
   
  
    
