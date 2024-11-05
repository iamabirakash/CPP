// You are using GCC
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int *arr = new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sump, sumn, sumo = 0;
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            sump++;
        } else if(arr[i]<0){
            sumn++;
        } else {
            sumo++;
        }
    }
    cout<<"Positive count: "<<sump<<endl;
    cout<<"Negative count: "<<sumn<<endl;
    cout<<"Zero count: "<<sumo<<endl;
    delete []arr;
}
