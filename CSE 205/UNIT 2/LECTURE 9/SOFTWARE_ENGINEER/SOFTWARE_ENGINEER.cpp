#include <iostream>
using namespace std;
// Define the structure for a node in the linked list
struct Node {
    int data;
    Node* next;
};
// Function to insert a node at the end of the linked list
void insertAtEnd(Node** head, int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = NULL;

    if (*head == NULL) {
        *head = newNode;
    } else {
        Node* temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}
// Function to swap every two adjacent nodes in the linked list
void swapAdjacentNodes(Node** head) {
    if (*head == NULL || (*head)->next == NULL) {
        return;
    }
    Node* current = *head;
    while (current != NULL && current->next != NULL) {
        // Swap the data of the current node and the next node
        int temp = current->data;
        current->data = current->next->data;
        current->next->data = temp;

        // Move to the next pair of nodes
        current = current->next->next;
    }
}
// Function to print the linked list
void printList(Node* head) {
    if (head == NULL) {
        cout << "Linked List is empty" << endl;
    } else {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
}

int main() {
    Node* head = NULL;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int data;
        cin >> data;
        insertAtEnd(&head, data);
    }
    cout << "Before swapping: ";
    printList(head);

    swapAdjacentNodes(&head);

    cout << "After swapping: ";
    printList(head);

    return 0;
}
