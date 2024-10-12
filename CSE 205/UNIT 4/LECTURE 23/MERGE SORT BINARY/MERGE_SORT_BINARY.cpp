// You are using GCC
#include<iostream>
#include<iomanip>
using namespace std;
void merge(int arr[],int left,int mid,int right){
    int n1 = mid-left+1;
    int n2 = right-mid;
    float L[n1],R[n2];
    for(int i=0;i<n1;i++){
        L[i]=arr[left+i];
    }
    for(int j=0;j<n2;j++){
        R[j]=arr[mid+1+j];
    }
    int i=0,j=0,k=left;
    while(i<n1 && j<n2){
        if(L[i]>=R[j]){
            arr[k]=L[i];
            i++;
        } else {
            arr[k]=R[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        arr[k]=L[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k]=R[j];
        j++;
        k++;
    }
}
void divide(int a[],int low,int high){
    if(low>=high){
        return;
    }
    int mid = low + (high-low)/2;
    divide(a,low,mid);
    divide(a,mid+1,high);
    merge(a,low,mid,high);
}
int main(){
    int n;
    cin>>n;
    int a[n];
    bool check = true;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]!=1 && a[i]!=0){
            check = false;
        }
        if(!check){
            cout<<"Invalid input";
            return 0;
        }
    }
    divide(a,0,n-1);

    for (int i = n-1; i >= 0; i--) {
        cout << fixed << setprecision(2) << a[i] << " ";
    }
    cout << endl;

    return 0;
    
}
