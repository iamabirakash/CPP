// You are using GCC
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void insertNode(struct Node** head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    if (*head == NULL) {
        *head = newNode;
    } else {
        struct Node* temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void deleteNodesInRange(struct Node** head, int start, int end) {
    //Type your code here
    Node* temp = *head;
    Node* prev = nullptr;
    int position = 1;
    while (temp != nullptr) {
        if (position >= start && position <= end) {
            // Node to be deleted
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
    // while(position!=start){
    //     temp = temp->next;
    //     position++;
    // }
    // while(temp != nullptr){
        
    // }
}

void displayLinkedList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void deleteLinkedList(struct Node* head) {
    struct Node* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
}

int main() {
    struct Node* head = NULL;
    int size;

    scanf("%d", &size);

    for (int i = 0; i < size; i++) {
        int value;
        scanf("%d", &value);
        insertNode(&head, value);
    }

    int start, end;
    scanf("%d", &start);
    scanf("%d", &end);

    printf("Linked List before deletion: ");
    displayLinkedList(head);

    deleteNodesInRange(&head, start, end);

    if (head == NULL) {
        printf("Linked List after deletion: all the elements are deleted\n");
    } else {
        printf("Linked List after deletion: ");
        displayLinkedList(head);
    }

    deleteLinkedList(head);

    return 0;
}
