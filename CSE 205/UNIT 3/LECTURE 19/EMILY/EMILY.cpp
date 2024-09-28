// You are using GCC
#include <iostream>
#include <stdlib.h>

struct Node {
    int data;
    Node* next;
    Node* prev;
};

struct Deque {
    Node* front;
    Node* rear;
    int size;
};

void initDeque(Deque* deque) {
    deque->front = NULL;
    deque->rear = NULL;
    deque->size = 0;
}

bool isEmpty(Deque* deque) {
    return deque->size == 0;
}

void pushBack(Deque* deque, int data) {
    //Type your code here
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = deque->rear;
    
    // If deque is empty
    if (isEmpty(deque)) {
        deque->front = deque->rear = newNode;
    } else {
        deque->rear->next = newNode;
        deque->rear = newNode;
    }
    
    deque->size++;
}

int getSize(Deque* deque) {
    //Type your code here
    return deque->size;
}

int main() {
    Deque myDeque;
    initDeque(&myDeque);
    int num;
    while (1) {
        std::cin >> num;
        if (num == -1)
            break;
        pushBack(&myDeque, num);
    }
    int count = getSize(&myDeque);
    std::cout << count;
    return 0;
}
