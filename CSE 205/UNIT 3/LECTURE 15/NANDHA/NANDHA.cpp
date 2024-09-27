// You are using GCC
#include<iostream>
using namespace std;
int a[20];
int top=-1;
void pop(){
    if(top==-1){
        cout<<"Stack is empty\n";
        return;
    }
    --top;
}
int main(){
    int n;
    cin>>n;
    if(n==0){
        cout<<"Stack is empty\n";
        return 0;
    } else {
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            a[++top]=x;
        }
        
    }
    for(int i=n-1;i>=0;i--){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    if(top!=-1){
        cout<<"Top element is "<<a[top];
    } else {
        cout<<"Stack is empty\n";
    }
    cout<<endl;
    pop();
    for(int i=n-2;i>=0;i--){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    if(top!=-1){
        cout<<"Top element is "<<a[top];
    } else {
        cout<<"Stack is empty\n";
    }
    // for(int i=n-2;i>=0;i--){
    //     cout<<a[i]<<" ";
    // }
    // cout<<endl;
    // if(top!=-1){
    //     cout<<"Top element is "<<a[top];
    // }
}
