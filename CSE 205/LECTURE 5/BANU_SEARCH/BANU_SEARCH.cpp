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
    int cnt=0;
    for(int i=0;i<n;i++){
        if(a[i]<=target){
            cnt++;
        }
    }
    cout<<cnt;
}
