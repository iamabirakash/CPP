// You are using GCC
#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int arr[a];
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    int res = a/2;
    int cnt = 0;
    bool majority = false;
    for(int i=0;i<a;i++){
        for(int j=i+1;j<=a;j++){
            if(arr[i]==arr[j]){
                cnt++;
            }
        }
        if(cnt>res){
            cout<<"The majority candidate is ID "<<arr[i];
            majority=true;
            break;
        }
    }
    if(!majority){
        cout<<"No majority candidate found";
    }
}
