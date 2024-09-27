// You are using GCC
#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100
#define ALPHABET_SIZE 26

typedef struct Queue {
    int queue[MAX_SIZE];
    int front;
    int rear;
} Queue;

void initializeQueue(Queue* q) {
    q->front = -1;
    q->rear = -1;
}

int isEmpty(Queue* q) {
    return q->front == -1;
}

int isFull(Queue* q) {
    return q->rear == MAX_SIZE - 1;
}

void enqueue(Queue* q, int data) {
    if (isFull(q)) {
        return;
    }

    if (isEmpty(q)) {
        q->front = 0;
    }

    q->rear++;
    q->queue[q->rear] = data;
}

int dequeue(Queue* q) {
    if (isEmpty(q)) {
        return -1; // Assuming -1 as an invalid value for the dequeue operation
    }

    int data = q->queue[q->front];

    if (q->front == q->rear) {
        initializeQueue(q);
    } else {
        q->front++;
    }

    return data;
}

int firstUniqChar(const char* s) {
    //Type your code here
    int freq[ALPHABET_SIZE]={0};
    Queue q;
    initializeQueue(&q);
    for(int i=0;s[i]!='\0';i++){
        int index = s[i]-'a';
        freq[index]++;
        enqueue(&q, i);
        while(!isEmpty(&q) && freq[s[q.queue[q.front]]-'a']>1){
            dequeue(&q);
        }
    }
    if(!isEmpty(&q)){
        return q.queue[q.front];
    }
    return -1;
}

int main() {
    char input[MAX_SIZE];
    scanf("%s", input);

    int result = firstUniqChar(input);
    printf("%d", result);

    return 0;
}
