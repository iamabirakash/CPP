// You are using GCC
#include<iostream>
using namespace std;
int a[5];
int front = -1;
int rear = -1;

void enqueue(){
    int n;
    cin>>n;
    if(front == (rear+1)%5){
        cout<<"Queue is full. Cannot enqueue.\n";
        return;
    }
    if(front==-1){
        front = 0;
        rear = 0;
    } else if(rear==(5-1)){
        rear = 0;
    } else {
        rear++;
    }
    a[rear] = n;
    cout<<"Helpdesk Ticket ID "<<n<<" is enqueued.\n";
}

void dequeue(){
    if(front == -1){
        cout<<"Queue is empty.\n";
        return;
    }
    cout<<"Dequeued Helpdesk Ticket ID: "<<a[front]<<endl;
    if(front == rear){
        front = -1;
        rear = -1;
    } else if(front == (5-1)){
        front = 0;
    } else {
        front = front + 1;
    }
}

void traverse(){
    if(front == -1){
        cout<<"Queue is empty.\n";
        return;
    }
    int i = front;
    cout<<"Helpdesk Ticket IDs in the queue are: ";
    while(i!=rear){
        cout<<a[i]<<" ";
        if(i==(5-1)){
            i = 0;
        } else {
            i++;
        }
    }
    cout<<a[rear]<<endl;
}
int main(){
    int choice;
    while(1){
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
                    cout<<"Exiting the program\n";
                    exit(0);
            }
        } else {
            cout<<"Invalid option.\n";
        }
    }
    
}
