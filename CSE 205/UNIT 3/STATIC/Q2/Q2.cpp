// You are using GCC
#include<iostream>
using namespace std;
struct node {
    int data;
    node *next;
}*top=NULL;

void push(){
    struct node *n = new node;
    cin>>n->data;
    cout<<n->data<<" is pushed onto the stack\n";
    n->next = top;
    top = n;
}
void pop(){
    if(top==NULL){
        cout<<"Stack Underflow\n";
        return;
    }
    struct node *temp = top;
    cout<<temp->data<<" is popped from the stack\n";
    top = top->next;
    delete temp;
}
void display(){
    node *ptr=top;
    if(top==NULL){
        cout<<"Stack is empty\n";
        return;
    }
    cout<<"Elements in the stack: ";
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    cout<<endl;
}
int main(){
    int n=1;
    while(n!=4){
        cin>>n;
        switch(n){
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                cout<<"Exiting the program";
                break;
            default:
                cout<<"Invalid choice\n";
                break;
        }
    }
}
