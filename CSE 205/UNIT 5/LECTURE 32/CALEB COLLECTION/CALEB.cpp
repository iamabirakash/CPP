// You are using GCC
#include<iostream>
using namespace std;
const int MAX_SIZE=15;
void minHeapify(int heap[],int size,int index){
    
    int smallest=index;
    int left=2*index+1;
    int right=2*index+2;
    
    if(left<size && heap[left]< heap[smallest]){
        smallest=left;
    }
    
    if(right<size && heap[right]<heap[smallest]){
        smallest=right;
        
    }
    
    if(smallest!=index){
        swap(heap[index],heap[smallest]);
        minHeapify(heap,size,smallest);
    }
}
void insert(int heap[],int& size,int value ){
    if(size==MAX_SIZE){
        cout<<"Heap is full. Cannot insert "<<value<<endl;
        return ;
        
    }
    heap[size]=value;
    size++;
    
    int index=size-1;
    while(index!=0 && heap[(index-1)/2] >  heap[index]){
        swap(heap[index], heap[(index-1)/2]);
        index=(index-1)/2;
    }
}
bool contains(int heap[],int size,int value){
    for(int i=0;i<size;i++){
        if(heap[i]==value){
            return true;
        }
    }
    return false;
}

void printHEap(int heap[],int size){
  
   for(int i=0;i<size;i++){
       cout<<heap[i]<<" ";
   }
   cout<<endl;
}
int main(){
    int n;
    cin>>n;
    int heap[MAX_SIZE];
    int size=0;
    for(int i=0;i<n;i++){
        int value;
        cin>>value;
        insert(heap,size,value);
    }
    int C;
    cin>>C;
    
    printHEap(heap,size);
    if(contains(heap,size,C)){
        cout<<C << " is present"<<endl;
    } else{
        cout<<C << " is not present"<<endl;
    }
    return 0;
}
