// You are using GCC
#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    string arr[a];
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    for(int i=a;i>=0;i--){
        cout<<arr[i]<<" ";
    }
}
