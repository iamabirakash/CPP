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

void deleteNodesInRange(Node** head, int start, int end) {
    //Type your code here
    Node* temp = *head;
    Node* prev = nullptr;
    int position = 1;
    while (temp != nullptr) {
        if (position >= start && position <= end) {
            Node* nodeToDelete = temp;
            if (prev == nullptr) {
                // If the node to be deleted is the head node
                *head = temp->next;
            } else {
                // Skip the node to delete
                prev->next = temp->next;
            }
            // Move to the next node
            temp = temp->next;
            delete nodeToDelete;
        } else {
            // Move both temp and prev pointers forward
            prev = temp;
            temp = temp->next;
        }
        position++;
    }
}

void displayLinkedList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void deleteLinkedList(Node* head) {
    Node* temp;
    while (head != nullptr) {
        temp = head;
        head = head->next;
        delete temp;
    }
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

    int start, end;
    cin >> start;
    cin >> end;

    cout << "Linked List before deletion: ";
    displayLinkedList(head);

    deleteNodesInRange(&head, start, end);

    if (head == nullptr) {
        cout << "Linked List after deletion: all the elements are deleted" << endl;
    } else {
        cout << "Linked List after deletion: ";
        displayLinkedList(head);
    }

    deleteLinkedList(head);

    return 0;
}
