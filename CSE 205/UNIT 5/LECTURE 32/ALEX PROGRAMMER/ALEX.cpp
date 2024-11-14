// You are using GCC
#include<iostream>
using namespace std;
void swap(int &a, int &b) {
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
    int num_new_elements;
    cin >> num_new_elements;
    for (int i = 0; i < num_new_elements; i++) {
        int new_element;
        cin >> new_element;
        insertIntoMaxHeap(arr, n, new_element);
    }
    buildMaxHeap(arr, n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
