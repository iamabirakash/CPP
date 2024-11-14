// You are using GCC
#include<iostream>
#include<cmath>
using namespace std;
void heapify(int arr[],int n,int i){
    int smallest = i;
    int left = 2*i+1;
    int right = 2*i+2;
    if(left<n && arr[left]<arr[smallest]){
        smallest = left;
    }
    if(right<n && arr[right]<arr[smallest]){
        smallest = right;
    }
    if(smallest!=i){
        swap(arr[i],arr[smallest]);
        heapify(arr,n,smallest);
    }
}
void buildMinHeap(int arr[],int n){
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
void printCount(int arr[],int n,int x){
    int cnt = 0;
    for(int i=0;i<n;i++){
        if(arr[i]<x){
            cnt++;
        }
    }
    cout<<cnt;
}
int main(){
    int n;
    cin>>n;
    int heights[n];
    for(int i=0;i<n;i++){
        cin>>heights[i];
    }
    int x;
    cin>>x;
    buildMinHeap(heights,n);
    printHeap(heights,n);
    printCount(heights,n,x);
    return 0;
}
