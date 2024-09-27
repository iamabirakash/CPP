// You are using GCC
#include<iostream>
using namespace std;
int a[10],top=-1,end=-1;
void push(){
    int n;
    cin>>n;
    a[++top]=n;
    
}
void pop(){
    if(top==-1){
        cout<<"Stack is empty\n";
    }
    a[top--];
}
void isfull(){
    if(top==9){
        cout<<"Stack is full!\n";
    } else {
        cout<<"Stack is not full\n";
    }
}
void isempty(){
    if(top==-1){
        cout<<"Stack is empty!\n";
    } else {
        cout<<"Stack is not empty\n";
    }
}
int main(){
    int choice = 1;
    while(1){
        cin>>choice;
        switch(choice){
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                isfull();
                break;
            case 4:
                isempty();
                break;
            case 5:
                return 0;
            default:
                cout<<"Invalid choice";
        }
    }
}
