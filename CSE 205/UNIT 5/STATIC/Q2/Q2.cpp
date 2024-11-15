// You are using GCC
#include<iostream>
using namespace std;

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void minHeapify(int heap[], int size, int i)
{
    //Type your code here
    int smallest=i;
    int left=2*i+1;
    int right=2*i+2;
    
    if(left<size && heap[left] <heap[smallest])
    smallest=left;
    if(right<size && heap[right]< heap[smallest])
    smallest=right;
    
    if(smallest!=i){
        swap(heap[i],heap[smallest]);
        minHeapify(heap,size,smallest);
    }
}

void insertElement(int heap[],int& size,int value,int capacity){
    if(size>=capacity){
        cout<<"HEap overflow"<<endl;
        return ;
    }
    size++;
    heap[size-1]=value;
    
    for(int i=size/2-1;i>=0;i--){
        minHeapify(heap,size,i);
    }
}
int findMaxValue(int heap[],int size){
    int maxValue=heap[0];
    for(int i=1;i<size;i++){
        if(heap[i]>maxValue){
            maxValue=heap[i];
        }
    }
    return maxValue;
}

void displayMinHeap(int heap[],int size){
    for(int i=0;i<size;i++){
        cout<<heap[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n;
    cin>>n;
    int capacity=n;
    int heap[capacity];
    int size=0;
    for(int i=0;i<n;i++){
        int value;
        cin>>value;
        insertElement(heap,size,value,capacity);
    }
    displayMinHeap(heap,size);
    int maxValue=findMaxValue(heap,size);
    cout<<"Maximum: "<<maxValue;
    return 0;
}
