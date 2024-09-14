// You are using GCC
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int smallest = a[0];
    int largest = a[0];
    for(int i=1;i<n;i++){
        if(smallest>a[i]){
            smallest = a[i];
        }
        if(largest<a[i]){
            largest = a[i];
        }
    }
    cout<<"The largest element is: "<<largest<<endl;
    cout<<"The smallest element is: "<<smallest<<endl;
}
