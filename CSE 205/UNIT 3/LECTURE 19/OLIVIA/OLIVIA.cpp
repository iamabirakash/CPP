// You are using GCC
#include <iostream>
#include <unordered_set>

struct Node {
    int data;
    Node* next;
};

struct Deque {
    Node* front;
    Node* rear;
};

void initDeque(Deque* deque) {
    deque->front = nullptr;
    deque->rear = nullptr;
}

bool isEmpty(Deque* deque) {
    return deque->front == nullptr;
}

void pushBack(Deque* deque, int data) {
    //Type your code here
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = nullptr;
    
    if (isEmpty(deque)) {
        deque->front = deque->rear = newNode;
    } else {
        deque->rear->next = newNode;
        deque->rear = newNode;
    }
}

int popFront(Deque* deque) {
    //Type your code here
    if (isEmpty(deque)) {
        std::cout << "Deque is empty!" << std::endl;
        return -1;
    }
    
    Node* temp = deque->front;
    int data = temp->data;
    
    deque->front = deque->front->next;
    
    if (deque->front == nullptr) {
        deque->rear = nullptr;  // If deque becomes empty
    }
    
    delete temp;
    return data;
}

int main() {
    Deque myDeque;
    initDeque(&myDeque);
    int num;
    while (true) {
        std::cin >> num;
        if (num == -1)
            break;
        pushBack(&myDeque, num);
    }

    std::unordered_set<int> uniqueElements;
    Node* current = myDeque.front;
    while (current != nullptr) {
        if (uniqueElements.find(current->data) == uniqueElements.end()) {
            uniqueElements.insert(current->data);
            std::cout << current->data << " ";
        }
        current = current->next;
    }

    std::cout << std::endl;

    return 0;
}
