// You are using GCC
#include <iostream>
using namespace std;

/* Linked list node */
struct Node {
    char data;
    struct Node* next;
};

// Function to reverse a linked list
Node* reverseLinkedList(Node* head) {
    //Type your code here
    Node* prev = NULL;
    Node* current = head;
    Node* next = NULL;
    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    return prev;
}

// Function to check if a linked list is a palindrome
bool isPalindrome(Node* head) {
    //type your code here
    if (head == NULL || head->next == NULL) return true;
    // Step 1: Find the middle of the linked list
    Node* slow = head;
    Node* fast = head;
    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }
    // Step 2: Reverse the second half of the linked list
    Node* secondHalf = reverseLinkedList(slow);
    Node* firstHalf = head;

    // Step 3: Compare the first half and the reversed second half
    Node* tempSecondHalf = secondHalf;
    while (tempSecondHalf != NULL) {
        if (firstHalf->data != tempSecondHalf->data) {
            return false;
        }
        firstHalf = firstHalf->next;
        tempSecondHalf = tempSecondHalf->next;
    }
    // Step 4: Restore the second half back (optional)
    // reverseLinkedList(secondHalf);

    return true;
}

// Function to create a new node in the linked list
Node* newNode(char key) {
    Node* temp = new Node;
    temp->data = key;
    temp->next = NULL;
    return temp;
}

// Function to create a linked list based on user input
Node* createLinkedList() {
    Node* head = NULL;
    Node* tail = NULL;
    char val;
    while (true) {
        cin >> val;
        if (val == '$') {
            break;
        }

        Node* newNode = new Node;
        newNode->data = val;
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    return head;
}

int main() {
    Node* head = createLinkedList();

    bool palindrome = isPalindrome(head);
    if (palindrome) {
        cout << "The linked list is a palindrome" << endl;
    } else {
        cout << "The linked list is not a palindrome" << endl;
    }

    return 0;
}
