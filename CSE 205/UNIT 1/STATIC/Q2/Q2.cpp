// You are using GCC
#include <iostream>
#include<cmath>
using namespace std;

int linearSearch(int arr[], int n, int key) {
    //Type your code here
    int i = 0;
    while(i<n){
        if(arr[i]==key){
            return i;
        }
        i++;
    }
    return -1;
    
}

int binarySearch(int arr[], int n, int key) {
    //Type your code here
    int LB = 0;
    int UB = n-1;
    while(LB<=UB){
        int mid = floor((UB+LB)/2);
        if(arr[mid]==key){
            return mid;
        } if(key<arr[mid]){
            UB = mid - 1;
        } else {
            LB = mid + 1;
        }
    }
    return -1;
}

bool isSorted(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return false;
        }
    }
    return true;
}

int searchArray(int arr[], int n, int key) {
    if (isSorted(arr, n)) {
        cout << "Using Binary Search" << endl;
        return binarySearch(arr, n, key);
    } else {
        cout << "Using Linear Search" << endl;
        return linearSearch(arr, n, key);
    }
}

int main() {
    int n, key;
    cin >> n;
    
    int arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    
    cin >> key;

    int result = searchArray(arr, n, key);

    if (result != -1) {
        cout << key << " found at index " << result;
    } else {
        cout << key << " not found in the list";
    }

    return 0;
}
