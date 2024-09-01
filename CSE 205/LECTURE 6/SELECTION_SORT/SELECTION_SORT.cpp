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
    int target;
    cin>>target;
    for(int i=0;i<n-1;i++){
        int mini = i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[mini]){
                mini = j;
            }
        }
        int temp = a[mini];
        a[mini] = a[i];
        a[i] = temp;
    }
    cout<<"Sorted order: ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"The kth smallest element is: "<<a[target-1]<<endl;
    
    return 0;
}
