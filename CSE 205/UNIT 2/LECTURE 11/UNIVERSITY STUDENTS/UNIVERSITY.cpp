// You are using GCC
#include <iostream>

struct Node {
    int data;
    Node* next;
};

void insertNode(Node*& head, int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = nullptr;

    if (head == nullptr) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void displayList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        std::cout << temp->data << " ";
        temp = temp->next;
    }
    std::cout << std::endl;
}

void splitListByParity(Node* head, Node*& evenHead, Node*& oddHead) {
    //Type your code here
    Node* current = head->next;
    Node* evenTail = nullptr;
    Node* oddTail = nullptr;
    
    while(current!=nullptr){
        if(current->data%2==0){
            if(evenHead == nullptr){
                evenHead = current;
                evenTail = evenHead;
            } else {
                evenTail->next = current;
                evenTail = evenTail->next;
            }
        } else {
            if(oddHead == nullptr){
                oddHead = current;
                oddTail = oddHead;
            } else {
                oddTail->next = current;
                oddTail = oddTail->next;
            }
        }
        current = current->next;
    }
    if(evenTail!=nullptr){
        evenTail->next = nullptr;
    } 
    if(oddTail!=nullptr){
        oddTail->next = nullptr;
    }
}

int main() {
    Node* head = new Node();
    head->next = nullptr;

    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        int data;
        std::cin >> data;
        insertNode(head, data);
    }

    Node* evenHead = nullptr;
    Node* oddHead = nullptr;

    splitListByParity(head, evenHead, oddHead);

    std::cout << "Even List: ";
    displayList(evenHead);

    std::cout << "Odd List: ";
    displayList(oddHead);

    // Free memory
    Node* current = head;
    while (current != nullptr) {
        Node* temp = current;
        current = current->next;
        delete temp;
    }

    return 0;
}
