// You are using GCC
#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

class PriorityQueue {
private:
    int arr[MAX_SIZE];
    int priorities[MAX_SIZE];
    int size;

public:
    PriorityQueue() {
        size = 0;
    }

    bool isEmpty() {
        return (size == 0);
    }

    bool isFull() {
        return (size == MAX_SIZE);
    }

    void enqueue(int element, int priority) {
        //Type your code here
        if(isFull()){
            return;
        }
        arr[size]=element;
        priorities[size]=priority;
        size++;
        for(int i=0;i<size-1;i++){
            for(int j=i+1;j<size;j++){
                if(priorities[i]>priorities[j]){
                    int tempElement = arr[i];
                    arr[i] = arr[j];
                    arr[j] = tempElement;
                    
                    int tempPriority = priorities[i];
                    priorities[i] = priorities[j];
                    priorities[j] = tempPriority;
                }
            }
        }
    }

    void dequeue() {
        //Type your code here
        if(isEmpty()){
            return;
        }
        for(int i=0;i<size-1;i++){
            arr[i] = arr[i+1];
            priorities[i] = priorities[i+1];
        }
        size--;
    }

    void printPriorityQueue() {
        //Type your code here
        cout<<"Priority Queue: ";
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main() {
    PriorityQueue pq;

    int n;

    cin >> n;

    for (int i = 0; i < n; i++) {
        int element, priority;
        cin >> element;
        cin >> priority;
        pq.enqueue(element, priority);
    }

    pq.printPriorityQueue();

    pq.dequeue();

    pq.printPriorityQueue();

    return 0;
}
