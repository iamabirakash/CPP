// You are using GCC
#include <iostream>
using namespace std;

struct Queue {
    int* arr;       // array to store queue elements
    int front;      // front points to the front element in the queue
    int rear;       // rear points to the last element in the queue
    int capacity;   // maximum capacity of the queue
    int size;       // current size of the queue

    Queue(int capacity) {
        this->capacity = capacity;
        arr = new int[capacity];
        front = 0;
        rear = -1;
        size = 0;
    }

    bool isEmpty() {
        return size == 0;
    }

    bool isFull() {
        return size == capacity;
    }

    void enqueue(int item) {
        //Type your code here
        if (isFull()) {
            cout << "Queue is full!" << endl;
            return;
        }
        rear = (rear + 1) % capacity;
        arr[rear] = item;
        size++;
    }

    int dequeue() {
        //Type your code here
        if (isEmpty()) {
            cout << "Queue is empty!" << endl;
            return -1;
        }
        int item = arr[front];
        front = (front + 1) % capacity;
        size--;
        return item;
    }
};
void solve(Queue& q, int k);

void reverseFirstK(Queue& q, int k) {
    //Type your code here
    if (q.isEmpty() || k > q.size || k <= 0) {
        return;
    }
    int temp[100];
    for (int i = 0; i < k; i++) {
        temp[i] = q.dequeue();
    }

    for (int i = k - 1; i >= 0; i--) {
        q.enqueue(temp[i]);
    }

    for (int i = 0; i < q.size - k; i++) {
        q.enqueue(q.dequeue());
    }
}

void solve(Queue& q, int k) {
    if (k == 0) return;
    int e = q.dequeue();
    solve(q, k - 1);
    q.enqueue(e);
}

int main() {
    int N, K;
    cin >> N;
    cin >> K;

    Queue queue(N);

    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;
        queue.enqueue(num);
    }

    reverseFirstK(queue, K);

    for (int i = 0; i < N; i++) {
        cout << queue.dequeue() << " ";
    }
    cout << endl;

    return 0;
}
