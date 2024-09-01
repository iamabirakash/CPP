// You are using GCC
#include<iostream>
using namespace std;
int main(){
    int n,target;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>target;
    int low=0,high=n-1;
    int first=-1,last=-1;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(a[mid]==target){
            first=mid;
            high=mid-1;
        } else if(a[mid]<target){
            low = mid+1;
        } else {
            high = mid -1;
        }
    }
    low = 0;
    high = n-1;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(a[mid]==target){
            last = mid;
            low = mid + 1;
        } else if(a[mid]<target){
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    if(first != -1){
        cout<<"The first occurrence of "<<target<<" is at index"<<first<<endl;
        cout<<"The last occurrence of "<<target<<" is at index"<<last<<endl;
    } else {
        cout<<"Target value "<<target<<" is not found in the array"<<endl;
    }
    return 0;
}
