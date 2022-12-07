#include<bits/stdc++.h>
using namespace std;
class node{
    public:
     int data;
     node* left;
     node* right;

     node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
     }

};

node* createTree(node* root){
    int d;
    cout<<"Enter the data"<<endl;
    cin>>d;
    
    if(d==-1) return NULL;
    root=new node(d);

    cout<<"Enter the data to be entered in left of"<<d<<endl;
    root->left=createTree(root->left);
    cout<<"Enter the data to be entered in right of"<<d<<endl;
    root->right=createTree(root->right);
  return root;
}
int main(){
    node* root=NULL;
    createTree(root);
    return 0;
}