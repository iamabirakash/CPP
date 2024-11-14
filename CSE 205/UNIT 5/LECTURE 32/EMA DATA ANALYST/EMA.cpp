// You are using GCC
#include<iostream>
using namespace std;
void swap(int arr[], int a, int b) {
    //Type your code here
    int temp = a;
    a = b;
    b = temp;
}

void maxHeapify(int arr[], int n, int i) {
    //Type your code here
    int largest = i;
    int left = 2*i+1;
    int right = 2*i+2;
    if(left<n && arr[left]>arr[largest]){
        largest = left;
    }
    if(right<n && arr[right]>arr[largest]){
        largest = right;
    }
    if(largest!=i){
        swap(arr[i],arr[largest]);
        maxHeapify(arr,n,largest);
    }
}

void buildMaxHeap(int arr[], int n) {
    //Type your code here
    for(int i=n/2-1;i>=0;i--){
        maxHeapify(arr,n,i);
    }
}

void insertIntoMaxHeap(int arr[], int &n, int value) {
    //Type your code here
    arr[n] = value;
    n++;
    int i = n-1;
    while(i!=0 && arr[(i-1)/2]<arr[i]){
        swap(arr[i],arr[(i-1)/2]);
        i = (i-1)/2;
    }
}

void printMaxHeap(int arr[], int n) {
    //Type your code here
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main() {
    int arr[100];
    int n = 0;
    int num_elements;
    cin >> num_elements;
    for (int i = 0; i < num_elements; i++) {
        int value;
        cin >> value;
        insertIntoMaxHeap(arr, n, value);
    }
    buildMaxHeap(arr, n);
    printMaxHeap(arr, n);
    if (n > 0) {
        int sum = arr[0] + arr[n - 1]; 
        cout << sum;
    } else {
        cout << "Heap is empty";
    }
    return 0;
}
