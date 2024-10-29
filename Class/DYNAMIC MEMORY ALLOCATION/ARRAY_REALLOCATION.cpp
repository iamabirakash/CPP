// You are using GCC
// WAP TO ALLOCATE MEMORY DYNAMICALLY FOR 5 INTEGERS. IF SUM OF 5 INTEGERS IS > 100 THEN, CHANGE SIZE TO 4 ELEMEMTS, ELSE INCREASE THE
// SIZE TO 6 ELEMENTS, AND THEN CHECK SUM IS PRIME OR NOT
#include<iostream>
using namespace std;
int main(){
    int *arr = new int[5];
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    for(int i=0;i<5;i++){
        cout<<" "<<arr[i];
    }
    int sum = 0;
    for(int i=0;i<5;i++){
        sum += arr[i];
    }
    cout<<"\nSum of elements: "<<sum<<endl;
    // cout<<endl;
    int n = 4;
    int *temp = new int[n];
    if(sum>100){
        for(int i=0;i<n;i++){
            temp[i]=arr[i];
        }
        for(int i=0;i<n;i++){
            cout<<" "<<arr[i];
        }
    } else {
        n = 6;
        for(int i=0;i<n;i++){
            temp[i]=arr[i];
        }
        cin>>arr[5];
        for(int i=0;i<n;i++){
            cout<<" "<<arr[i];
        }
    }
    delete []arr;
    arr = temp;
}
