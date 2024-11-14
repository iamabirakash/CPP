// You are using GCC
#include<iostream>
#include<cmath>
using namespace std;
void heapify(int arr[],int n,int i){
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
        heapify(arr,n,largest);
    }
}
void buildMaxHeap(int arr[],int n){
    for(int i=n/2-1;i>=0;i--){
        heapify(arr,n,i);
    }
}
void printHeap(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void printSquaredValues(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]*arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n;
    cin>>n;
    int heights[n];
    for(int i=0;i<n;i++){
        cin>>heights[i];
    }
    buildMaxHeap(heights,n);
    printHeap(heights,n);
    printSquaredValues(heights,n);
    return 0;
}
