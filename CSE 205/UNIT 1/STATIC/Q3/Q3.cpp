// You are using GCC
#include<iostream>
using namespace std;
int main(){
    int n1, n2;
    cin>>n1;
    int a1[n1];
    for(int i=0;i<n1;i++){
        cin>>a1[i];
    }
    cin>>n2;
    int a2[n2];
    for(int i=0;i<n2;i++){
        cin>>a2[i];
    }
    int n = n1+n2;
    int a[n];
    int i=0,j=0,k=0;
    // while(cnt<n){
    //     if(a1[ki]<a2[kj]){
    //         a[k] = a1[ki];
    //         if(ki==n1-1){
    //             a[k]=a2[kj++];
    //         }
    //         ki++;
    //     } else {
    //         a[k] = a2[kj];
    //         if(kj==n2-1){
    //             a[k]=a1[ki++];
    //         }
    //             kj++;
    //     }
    //     k++;
    //     cnt++;
    // }
    while((i<n1) && (j<n2)){
        if(a1[i] < a2[j]){
            a[k++] = a1[i++];
        } else {
            a[k++] = a2[j++];
        }
    }
    if(i>=n1){
        while(j<n2){
            a[k++] = a2[j++]; 
        }
    } else {
        while(i<n1){
            a[k++] = a1[i++];
        }
    }
    
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
