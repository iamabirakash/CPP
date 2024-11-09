// You are using GCC
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n<=0){
        cout<<"Number of integers should be positive!"<<endl;
        return 0;
    }
    int* arr = new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int oo = -1;
    int cnto = 0;
    int ee = -1;
    int cnte = 0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            cnte++;
        } else {
            cnto++;
        }
    }
    int* o = new int[cnto];
    int* e = new int[cnte];
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            e[++ee] = arr[i];
        } else {
            o[++oo] = arr[i];
        }
    }
    cout<<"List of Odd Integers: ";
    if(cnto>0){
        for(int i=0;i<cnto;i++){
            cout<<o[i]<<" ";
        }
    } else {
        cout<<"-1";
    }
    cout<<endl;
    cout<<"List of Even Integers: ";
    if(cnte>0){
        for(int i=0;i<cnte;i++){
            cout<<e[i]<<" ";
        }
    } else {
        cout<<"-1";
    }
    delete []arr;
}
