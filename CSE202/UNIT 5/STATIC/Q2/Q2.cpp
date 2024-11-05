// You are using GCC
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int *arr = new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]%3==0 && arr[i]%5==0){
            cout<<arr[i]<<" ";
        }
    }
    delete []arr;
}
