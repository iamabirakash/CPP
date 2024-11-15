// You are using GCC
#include<iostream>
#include<iomanip>
using namespace std;
class MinHeap{
    private:
    int* heap;
    int capacity;
    int size;
    
    public:
    MinHeap(int cap) : capacity(cap),size(0){
        heap=new int[capacity];
    }
    ~MinHeap(){
        delete[] heap;
    }
    void swap(int& x,int& y){
        int temp=x;
        x=y;
        y=temp;
    }
    void minHeapify(int i){
        int smallest=i, left=2*i+1,right=2*i+2;
        if(left<size && heap[left] < heap[smallest]) smallest=right;
        if(right<size && heap[right] < heap[smallest]) smallest=right;
        if(smallest!=i){
            swap(heap[i],heap[smallest]);
            minHeapify(smallest);
        }
    }
    void insert(int value){
        if(size==capacity){
            cout<<"Heap overflow"<<endl;
            return;
        }
        heap[size++]=value;
        for(int current=size-1; current!=0 && heap[current]< heap[(current-1)/2]; current=(current-1)/2)
        swap(heap[current],heap[(current-1)/2]);
        
    }
    int removeRoot(){
        if(size==0)return -1;
        if(size==1) return heap[--size];
        int root=heap[0];
        heap[0]=heap[--size];
        minHeapify(0);
        return root;
        
}
int findMax(){
    int maxValue=heap[0];
    for(int i=1;i<size;i++)
    if(heap[i]>maxValue) maxValue=heap[i];
    return maxValue;
    
}
int sum(){
    int total=0;
    for(int i=0;i<size;i++) total+=heap[i];
    return total;
}
double average(){
    return size==0? 0.0 : static_cast<double>(sum())/size;
    
}
void display(){
    cout<<"Min Heap: ";
    for(int i=0;i<size;i++) cout<<heap[i]<<" ";
    cout<<endl;
}};
int main(){
    int n;
    cin>>n;
    MinHeap minHeap(n);
    for (int i=0;i<n;i++){
        int value;
        cin>>value;
        minHeap.insert(value);
    }
    minHeap.display();
    cout<<"Root node: "<<minHeap.removeRoot()<<endl;
    cout<<"Maximum value: "<<minHeap.findMax()<<endl;
    cout<<"Sum of nodes: "<<minHeap.sum()<<endl;
    cout<<"Average of nodes: "<<fixed<<setprecision(2)<<minHeap.average()<<endl;
    return 0;
}
