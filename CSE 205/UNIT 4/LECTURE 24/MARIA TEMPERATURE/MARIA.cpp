// You are using GCC
#include <iostream>
#include <iomanip> 

using namespace std;

void quickSort(float arr[], int low, int high);
int partition(float arr[], int low, int high);

void quickSort(float arr[], int low, int high){
    //Type your code here
    if(low<high){
        int pos = partition(arr,low,high);
        quickSort(arr,low,pos-1);
        quickSort(arr,pos+1,high);
    }
}
int partition(float arr[], int low, int high) {
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

int main() {
    int n;
    cin >> n;

    float* temperatures = new float[n]; 
    
    for (int i = 0; i < n; i++) {
        cin >> temperatures[i];
    }

    quickSort(temperatures, 0, n - 1);

    cout << fixed << setprecision(2);
    for (int i = 0; i < n; i++) {
        cout << temperatures[i] << " ";
    }

    delete[] temperatures;

    return 0;
}
