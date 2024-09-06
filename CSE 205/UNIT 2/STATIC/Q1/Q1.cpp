// You are using GCC
#include <iostream>
using namespace std;
class Node {
public:
    int data;
    Node* next;
    Node(int data) : data(data), next(nullptr) {}
};
void insertAtBeginning(Node*& head, int newID) {
    // Type your code here
    Node* newNode = new Node(newID);
    newNode->next = head;
    head = newNode;
    
}
void insertAtEnd(Node*& head, int newID) {
    // Type your code here
    Node* newNode = new Node(newID);
    if(head==nullptr){
        head = newNode;
    } else {
        Node* temp = head;
        while(temp->next!=nullptr){
            temp = temp->next;
        }
        temp->next = newNode;
    }
}
void insertAtPosition(Node*& head, int position, int newID) {
    // Type your code here
    Node* newNode = new Node(newID);
    Node* temp = head;
    for(int i=0;i<position-1 && temp!=nullptr;i++){
        temp = temp->next;
    }
    if(temp!=nullptr){
        newNode->next = temp->next;
        temp->next = newNode;
    }
    
}
void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

void freeList(Node* head) {
    Node* temp;
    while (head != nullptr) {
        temp = head;
        head = head->next;
        delete temp;
    }
}

int main() {
    int N;
    cin >> N;

    Node* head = nullptr;
    int bookID;

    for (int i = 0; i < N; i++) {
        cin >> bookID;
        insertAtEnd(head, bookID);
    }

    int newID1, newID2, randomPosition, newID3;
    cin >> newID1;
    cin >> newID2;
    cin >> randomPosition;
    cin >> newID3;

    insertAtBeginning(head, newID1);
    insertAtEnd(head, newID2);
    insertAtPosition(head, randomPosition, newID3);

    printList(head);
    freeList(head);

    return 0;
}
