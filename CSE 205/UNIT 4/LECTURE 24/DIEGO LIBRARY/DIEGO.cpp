// You are using GCC
#include <iostream>
using namespace std;

int partition(int arr[], int low, int high) 
{
    //Type your code here
    float pivot = arr[high];
    int i = (low-1);
    for(int j=low;j<high;j++){
        if(arr[j]<=pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[high]);
    return (i+1);
}

void quickSort(int arr[], int low, int high) 
{
    //Type your code here
    if(low<high){
        int pos = partition(arr,low,high);
        quickSort(arr,low,pos-1);
        quickSort(arr,pos+1,high);
    }
}

void recursiveQuickSort(int arr[], int n) {
    quickSort(arr, 0, n - 1);
}

int main() {
    int n;
    cin >> n;

    int* years = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> years[i];
    }

    recursiveQuickSort(years, n);

    for (int i = 0; i < n; i++) {
        cout << years[i] << " ";
    }
    
    delete[] years;

    return 0;
}
