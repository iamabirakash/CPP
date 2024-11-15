// You are using GCC
#include <stdio.h>

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void maxHeapify(int arr[], int n, int i) {
   //Type your code here
    int largest=i;
    int left=2*i+1;
    int right=2*i+2;
    
    if(left<n && arr[left] > arr[largest])
    largest=left;
    if(right<n && arr[right] > arr[largest])
    largest=right;
    
    if(largest!=i){
        swap(&arr[i],&arr[largest]);
        maxHeapify(arr,n,largest);
    }
}

void buildMaxHeap(int arr[], int n) {
   //Type your code here
   for(int i=n/2-1;i>=0;i--){
       maxHeapify(arr,n,i);
   }
}

void insertIntoMaxHeap(int arr[], int *n, int value) {
    //Type your code here
    arr[*n] = value;
    (*n)++;
    for(int i=*n-1;i!=0 && arr[(i-1)/2]<arr[i];){
        swap(&arr[i],&arr[(i-1)/2]);
        i = (i-1)/2;
    }
}

bool isPrime(int num) {
    //Type your code here
    if(num<=1) return false;
    for(int i=2;i*i<=num;i++){
        if(num%i==0) return false;
    }
    return true;
}

void printMaxHeap(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}

int main() {
    int arr[100];
    int n = 0; 
    int num_elements;

    scanf("%d", &num_elements);

    for (int i = 0; i < num_elements; i++) {
        int value;
        scanf("%d", &value);

        if (isPrime(value)) {
            insertIntoMaxHeap(arr, &n, value);
        } else {
            printf("%d is not a prime number\n", value);
        }
    }

    buildMaxHeap(arr, n);
    printf("Max Heap: ");
    printMaxHeap(arr, n);

    return 0;
}
