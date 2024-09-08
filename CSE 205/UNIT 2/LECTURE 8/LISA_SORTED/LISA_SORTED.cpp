// You are using GCC
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void sortedInsert(Node** head_ref, int new_data)
{
    //Type your code here
    struct Node* newNode = new Node;
    newNode->data = new_data;
    newNode->next = nullptr;
    // If the list is empty or the new node's data is less than the head's data
    if (*head_ref == nullptr || (*head_ref)->data >= new_data) {
        newNode->next = *head_ref;
        *head_ref = newNode;
    } else {
        // Traverse the list to find the correct position for the new node
        struct Node* temp = *head_ref;
        while (temp->next != nullptr && temp->next->data < new_data) {
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
}

void printList(Node* head)
{
    //Type your code here
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main()
{
    Node* head = NULL;
    int n, data;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> data;
        sortedInsert(&head, data);
    }

    cin >> data;
    sortedInsert(&head, data);

    printList(head);

    return 0;
}
