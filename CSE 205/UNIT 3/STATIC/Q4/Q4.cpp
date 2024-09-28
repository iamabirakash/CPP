// You are using GCC
#include<iostream>
using namespace std;
int front=-1,cap=5;
int rear=-1;
int a[5];
void enqueue(){
    int item;
    cin>>item;
    if(front==(rear+1)%cap){
        cout<<"Queue is full. Cannot enqueue.\n";
        return;
    }
    if(front==-1){
        front=0;
        rear=0;
    } else if(rear==cap-1){
        rear = 0;
    } else rear += 1;
    a[rear] = item;
    cout<<"Customer ID "<<item<<" is enqueued\n";
    
}
void dequeue(){
    if(front==-1){
        cout<<"Queue is empty\n";
        return;
    }
    cout<<"Dequeued customer ID: "<<a[front]<<endl;
    if(front==rear){
        front=-1;
        rear=-1;
    } else if(front==cap-1){
        front = 0;
    } else {
        front++;
    }
}
void traverse(){
    int i = front;
    if(front==-1){
        cout<<"Queue is empty\n";
        return;
    }
    cout<<"Customer IDs in the queue are: ";
    while(i!=rear){
        cout<<a[i]<<" ";
        if(i==cap-1){
            i = 0;
        } else {
            i++;
        }
    }
    cout<<a[rear];
    cout<<endl;
}
int main(){
    int choice=0;
    while(choice!=4){
        cin>>choice;
        if(choice>=1 && choice<=4){
            switch(choice){
                case 1:
                    enqueue();
                    break;
                case 2:
                    dequeue();
                    break;
                case 3:
                    traverse();
                    break;
                case 4:
                    // cout<<"Exiting the program\n";
                    break;
            }
        } else {
            cout<<"Invalid option\n";
        }
    }
}
