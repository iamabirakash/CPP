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
    // for(int i=1;i<n-1;i++){
    //     int j=i-1;
    //     int temp = a[i];
    //     while((j>=0) && (temp<a[j])){
    //         a[j+1]=a[j];
    //         j--;
    //     a[j+1] = temp;
    //     }
    // }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                int temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
