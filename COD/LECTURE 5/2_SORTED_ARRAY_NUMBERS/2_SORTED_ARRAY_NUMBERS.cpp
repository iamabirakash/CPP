// You are using GCC
#include<iostream>
using namespace std;
void mergeArrays(int arr1[], int n, int arr2[], int m, int merged[], int &mergedSize){
    int i=0,j=0,k=0;
    while(i<n && j<m){
        if(arr1[i] < arr2[j]){
            if(k==0 || merged[k-1] != arr1[i]){
                merged[k++] = arr1[i];
            }
            i++;
        } else if(arr2[j] < arr1[i]){
            if(k==0 || merged[k-1] != arr2[j]){
                merged[k++] = arr2[j];
            }
            j++;
        } else {
            if(k==0 || merged[k-1] != arr1[i]){
                merged[k++] = arr1[i];
            }
            i++;
            j++;
        }
    }
    while(i<n){
        if(k==0 || merged[k-1] != arr1[i]){
            merged[k++] = arr1[i];
        }
        i++;
    }
    while(j<m){
        if(k==0 || merged[k-1] != arr2[j]){
            merged[k++] = arr2[j];
        }
        j++;
    }
    mergedSize = k;
}
int main(){
    int n,m;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>m;
    int b[m];
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    int merged[n+m];
    int mergedSize = 0;
    mergeArrays(a,n,b,m,merged,mergedSize);
    for(int i=0;i<n;i++){
        cout<<merged[i]<<" ";
    }
    cout<<endl;
    for(int i=n;i<mergedSize;i++){
        cout<<merged[i]<<" ";
    }
    cout<<endl;
    return 0;
}