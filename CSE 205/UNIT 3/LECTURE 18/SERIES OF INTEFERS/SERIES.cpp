// You are using GCC
#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

class Queue {
private:
    int arr[MAX_SIZE];
    int frontIdx;
    int rearIdx;
    int count;

public:
    Queue() {
        frontIdx = -1;
        rearIdx = -1;
        count = 0;
    }

    bool isEmpty() {
        return count == 0;
    }

    bool isFull() {
        return count == MAX_SIZE;
    }

    void enqueue(int element) {
        //Type your code here
        if (isFull()) {
            cout << "Queue is full, cannot add element." << endl;
            return;
        }
        if (frontIdx == -1) {  // First insertion
            frontIdx = 0;
        }
        rearIdx = (rearIdx + 1) % MAX_SIZE;
        arr[rearIdx] = element;
        count++;
        
    }

    void dequeue() {
        //Type your code here
        if (isEmpty()) {
            cout << "Queue is empty, cannot dequeue." << endl;
            return;
        }
        frontIdx = (frontIdx + 1) % MAX_SIZE;
        count--;
        if (count == 0) {  // Reset queue when empty
            frontIdx = -1;
            rearIdx = -1;
        }
    }

    int front() {
        if (isEmpty()) {
            return -1;
        }

        return arr[frontIdx];
    }
    friend int findQueueSum(Queue& q);
};

int findQueueSum(Queue& q) {
    //Type your code here
    int sum = 0;
    if (q.isEmpty()) {
        return 0;
    }
    int idx = q.frontIdx;
    for (int i = 0; i < q.count; i++) {
        sum += q.arr[idx];
        idx = (idx + 1) % MAX_SIZE;
    }
    return sum;    
}

int main() {
    Queue q;
    int n;

    cin >> n;

    for (int i = 0; i < n; i++) {
        int element;
        cin >> element;
        q.enqueue(element);
    }

    if (q.isEmpty()) {
        cout << "Queue is empty." << endl;
        // cout << 0 << endl;
    } else {
        int sum = findQueueSum(q);
        cout << sum << endl;
    }

    return 0;
}
