#include <iostream>
using namespace std;

struct Node {
    int data;
    struct Node* next;
};

void insertAtEnd(struct Node** head, int data) {
    struct Node* newNode = new Node;
    newNode->data = data;
    newNode->next = nullptr;

    if (*head == nullptr) {
        *head = newNode;
    } else {
        struct Node* temp = *head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void displayList(struct Node* head) {
    if (head == nullptr) {
        cout << "Linked List is empty." << endl;
    } else {
        cout << "Linked List: ";
        while (head != nullptr) {
            cout << head->data << " ";
            head = head->next;
        }
        cout << endl;
    }
}

int main() {
    struct Node* head = nullptr;
    int n;
    while (true) {
        cin >> n;
        if (n < 0) {
            break;
        }
        insertAtEnd(&head, n);
    }

    displayList(head);

    return 0;
}
