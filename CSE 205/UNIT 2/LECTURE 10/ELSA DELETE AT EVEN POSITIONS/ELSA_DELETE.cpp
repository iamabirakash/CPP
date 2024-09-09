// You are using GCC
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void insertNode(Node** head, int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = nullptr;

    if (*head == nullptr) {
        *head = newNode;
    } else {
        Node* temp = *head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void deleteEvenPositionNodes(Node** head) {
    //Type your code here
    if(*head==NULL){
        return;
    }
    Node* temp = *head;
    Node* prev = nullptr;
    int position = 1;

    while (temp != nullptr) {
        if (position % 2 == 0) {
            Node* curr = temp;
            prev->next = temp->next;
            delete curr;
            temp = prev->next;
        } else {
            prev = temp;
            temp = temp->next;
        }
        position++;
    }
    
    // Node* temp = *head;
    // while(temp->next != nullptr) {
    //     Node* curr = temp->next;
    //     temp->next = temp->next->next;
    //     delete curr;
    //     temp = temp->next;
    // }
}
void displayLinkedList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;
    int size;

    cin >> size;

    for (int i = 0; i < size; i++) {
        int value;
        cin >> value;
        insertNode(&head, value);
    }

    cout << "Original Linked List: ";
    displayLinkedList(head);

    deleteEvenPositionNodes(&head);

    cout << "Final Linked List: ";
    displayLinkedList(head);

    Node* temp = head;
    while (head != nullptr) {
        head = head->next;
        delete temp;
        temp = head;
    }

    return 0;
}
