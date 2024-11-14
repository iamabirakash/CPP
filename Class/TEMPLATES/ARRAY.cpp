#include<iostream>
using namespace std;
template<class T>
void read(T arr[]){
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
}
template<class T>
void show(T arr[]){
    T temp = 0;
    for(int i=0;i<5;i++){
        if(arr[i]>temp){
            temp = arr[i];
        }
    }
    cout<<temp;
}
int main(){
    int a[5];
    read<int>(a);
    show<int>(a);
}
