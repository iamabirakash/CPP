// You are using GCC
#include <iostream>
using namespace std;

void heapify(int arr[], int n, int i) {
    int largest = i;  
    int left = 2 * i + 1;  
    int right = 2 * i + 2;  

    if (left < n && arr[left] > arr[largest])
        largest = left;

    if (right < n && arr[right] > arr[largest])
        largest = right;

    if (largest != i) {
        int temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;

        heapify(arr, n, largest);
    }
}

void heapSort(int arr[], int n) {
    // Type your code here
    for(int i=n/2-1;i>=0;i--){
        heapify(arr,n,i);
    }
    for(int i=n-1;i>=0;i--){
        swap(arr[0],arr[i]);
        heapify(arr,i,0);
    }
}

void mergeArrays(int arr1[], int n1, int arr2[], int n2, int result[]) {
    // Type your code here
    for(int i=0;i<n1;i++){
        result[i]=arr1[i];
        
    }
    for(int i=0;i<n2;i++){
        result[n1+i]=arr2[i];
    }
}

int main() {
    int n1, n2;

    cin >> n1;
    int arr1[n1];

    for (int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }

    cin >> n2;
    int arr2[n2];

    for (int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }

    int result[n1 + n2];
    mergeArrays(arr1, n1, arr2, n2, result);

    heapSort(result, n1 + n2);

    for (int i = 0; i < n1 + n2; i++) {
        cout << result[i] << " ";
    }

    return 0;
}
