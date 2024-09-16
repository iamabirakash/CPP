// You are using GCC
#include <iostream>

struct Node {
    int data;
    Node* next;
};

void insertNode(Node*& header, int newData) {
    Node* newNode = new Node;
    newNode->data = newData;
    newNode->next = nullptr;

    Node* current = header;
    while (current->next != nullptr) {
        current = current->next;
    }

    current->next = newNode;
}

void displayList(const Node* header) {
    Node* current = header->next;

    while (current != nullptr) {
        std::cout << current->data << " ";
        current = current->next;
    }

    std::cout << std::endl;
}

void deleteNodeAtPosition(Node*& header, int position) {
    //Type your code here
    Node* current = header;
    Node* nextNode;
    int cnt = 1;
    while(cnt<position){
        current = current->next;
        cnt++;
    }
    nextNode = current->next;
    current->next = nextNode->next;
    delete nextNode;
}

void deleteList(Node*& header) {
    Node* current = header;
    Node* nextNode;

    while (current != nullptr) {
        nextNode = current->next;
        delete current;
        current = nextNode;
    }

    header = nullptr;
}

int main() {
    Node* header = new Node;
    header->next = nullptr;

    int newData;
    int listSize;
    std::cin >> listSize;

    for (int i = 0; i < listSize; i++) {
        std::cin >> newData;
        insertNode(header, newData);
    }

    std::cout << "Linked List before deletion: ";
    displayList(header);

    int position;
    std::cin >> position;

    deleteNodeAtPosition(header, position);

    std::cout << "Linked List after deletion: ";
    displayList(header);

    deleteList(header);

    return 0;
}
