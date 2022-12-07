#include<iostream>
using namespace std;
class Stack{
    public:
    int top;
    int size;
    int *arr;
    Stack(int s){
        this->top=-1;
        this->size=s;
        this->arr =new int[size];
    }
    void push(int val){
        if(top>=size-1){
            cout<<"Stack OverFlow\n";
            return;
        }
        top++;
        arr[top]=val;


    }
    void pop(){
        if(top==-1){
            cout<<"Stack underflow\n";
            return;
        }
        top--;
    }
    int peek(){
       if(top==-1){
        cout<<"NO data present\n";
        return 0;
       }
       else return arr[top];
    }
    void print(){
        for(int i=top;i>=0;i--){
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
        return;
    }
    bool isEmpty(){

        if(top==-1) return true;
        else return false;
    }




};
int main(){
    Stack st(5);
    st.push(1);
    st.pop();
    
    
    
   
    return 0;
}