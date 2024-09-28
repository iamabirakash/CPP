// You are using GCC
#include<iostream>
#include<string>
using namespace std;
struct node{
    string name;
    int priority;
    node *next;
}*front=NULL;
void enqueue(){
    node *n=new node;
    cin>>n->name>>n->priority;
    n->next = NULL;
    if(front==NULL){
        front=n;
        return;
    }
    if(front->priority<n->priority){
        n->next=front;
        front=n;
        return;
    }
    node *ptr=front;
    while(ptr->next!=NULL && (ptr->next->priority)>n->priority){
        ptr = ptr->next;
    }
    n->next=ptr->next;
    ptr->next=n;
}
void dequeue(){
    node *ptr = front;
    while(ptr!=NULL){
        cout<<"Treating patient: "<<ptr->name<<" (Severity: "<<ptr->priority<<")\n";
        ptr = ptr->next;
    }
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        enqueue();
    }
    dequeue();
}
