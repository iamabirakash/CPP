// You are using GCC
#include <iostream>
#include <string>

using namespace std;

int partition(char arr[], int low, int high) {
    //Type your code here
    int pivot = arr[high];
    int i = low-1;
    for(int j=low;j<high;j++){
        if(arr[j]<pivot){
            i++;
            char temp = arr[j];
            arr[j]= arr[i];
            arr[i]= temp;
        }
    }
    char temp = arr[++i];
    arr[i] = arr[high];
    arr[high] = temp;
    return i;
}

void quickSort(char arr[], int low, int high) {
    //Type your code here
    if(low<high){
        int a = partition(arr,low,high);
        quickSort(arr,low,a-1);
        quickSort(arr,a+1,high);
    }
}

int main() {
    int n;
    cin >> n;

    char characters[n];

    for (int i = 0; i < n; ++i) {
        cin >> characters[i];
    }

    quickSort(characters, 0, n - 1);

    for (int i = 0; i < n; ++i) {
        cout << characters[i] << " ";
    }

    return 0;
}
