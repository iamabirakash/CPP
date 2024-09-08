// You are using GCC
#include <iostream>
using namespace std;
struct Node {
    int data;
    struct Node* next;
};
void insertAtBeginning(struct Node** head, int data) {
    struct Node* newNode = new Node;
    newNode->data = data;
    newNode->next = *head;
    *head = newNode;
    cout << "Node inserted" << endl;
}
void displayList(struct Node* head) {
    cout << "Linked List: ";
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}
int main() {
    struct Node* head = nullptr;
    int choice;
    do {
        int n;
        cin >> n;
        insertAtBeginning(&head, n);
        cin >> choice;
    } while (choice == 0);

    displayList(head);
    cout << "Node ended" << endl;

    return 0;
}
