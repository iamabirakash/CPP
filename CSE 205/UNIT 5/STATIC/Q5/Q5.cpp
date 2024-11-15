// You are using GCC
#include <iostream>
#include <iomanip>
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

double calculateMedian(int arr[], int n) {
    // Type your code here
    if(n%2==0){
        return (arr[n/2-1]+arr[n/2])/2.0;
    }else{
        return arr[n/2];
    }
}

int main() {
    int n;

    cin >> n;
    
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    heapSort(arr, n);

    double median = calculateMedian(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << fixed << setprecision(2);
    cout << "Median: " << median;

    return 0;
}
