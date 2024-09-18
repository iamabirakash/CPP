// You are using GCC
#include<iostream>
using namespace std;
int findSmallestDifference(int a[],int n){
    int res = 101;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i!=j){
                if(a[i]>a[j]){
                    int check = a[i] - a[j];
                    if(res>check){
                        res = check;
                    }
                } else {
                    int check = a[j] - a[i];
                    if(res>check){
                        res = check;
                    }
                }
                
            }
        }
    }
    return res;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int result = findSmallestDifference(a,n);
    cout<<result;
}
