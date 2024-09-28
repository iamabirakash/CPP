// You are using GCC
#include <iostream>
using namespace std;
struct Node {
    int pages;
    Node* next;
};

struct Queue {
    Node* front;
    Node* rear;
};

void initializeQueue(Queue* q) {
    q->front = nullptr;
    q->rear = nullptr;
}

bool isEmpty(Queue* q) {
    return q->front == nullptr;
}

void enqueue(Queue* q, int pages) {
    //Type your code here
    Node* newNode = new Node;
    newNode->pages = pages;
    newNode->next = nullptr;
    if(isEmpty(q)){
        q->front = newNode;
        q->rear = newNode;
    } else {
        q->rear->next = newNode;
        q->rear = newNode;
    }
}

bool dequeue(Queue* q, int& pages) {
    //Type your code here
    if(isEmpty(q)){
        return false;
    }
    Node* temp = q->front;
    pages = temp->pages;
    q->front = q->front->next;
    if(q->front==nullptr){
        q->rear = nullptr;
    }
    delete temp;
    return true;
}

void display(Queue* q) {
    //Type your code here
    if(isEmpty(q)){
        cout<<"Queue is empty"<<endl;
        return;
    }
    Node* current = q->front;
    cout<<"Print jobs in the queue: ";
    while(current!=nullptr){
        cout<<current->pages<<" pages";
        current = current->next;
    }
    cout<<endl;
}

int main() {
    Queue q;
    int option;
    int pages;

    initializeQueue(&q);

    while (true) {
        if (!(cin >> option)) {
            break;
        }

        if (option == 0) {
            cout << "Exiting the program" << endl;
            return 0;
        }

        switch (option) {
            case 1:
                if (!(cin >> pages)) {
                    break;
                }
                enqueue(&q, pages);
                cout << "Print job with " << pages << " pages is enqueued" << endl;
                break;

            case 2:
                if (dequeue(&q, pages)) {
                    cout << "Processing print job: " << pages << " pages" << endl;
                } else {
                    cout << "Queue is empty" << endl;
                }
                break;

            case 3:
                display(&q);
                break;

            default:
                cout << "Invalid option" << endl;
                break;
        }
    }

    return 0;
}
