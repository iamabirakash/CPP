// You are using GCC
#include<iostream>
using namespace std;
bool isPalindrome(int n){
    bool flag = false;
    int temp = n;
    int rem,rev = 0;
    while(temp!=0){
        rem = temp % 10;
        rev = rev*10 + rem;
        temp /= 10;
    }
    if(rev==n){
        flag = true;
    }
    return flag;
}
int main(){
    int n;
    cin>>n;
    int *arr = new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int *a = new int[n];
    int j = -1;
    bool check = true;
    for(int i=0;i<n;i++){
        if(isPalindrome(arr[i])){
            cout<<arr[i]<<" ";
        }
    }
    delete []arr;
}
