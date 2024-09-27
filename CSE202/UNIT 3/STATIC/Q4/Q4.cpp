// You are using GCC
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n<2 || n>100){
        return 1;
    }
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    ofstream file("sample.dat");
    if(file.is_open()){
        for(int i=0;i<n;i++){
            file<<a[i]<<" ";
        }
        file.close();
    }
    int maxVal = a[0], minVal = a[0];
    for(int i=1;i<n;i++){
        if(a[i]>maxVal) maxVal = a[i];
        if(a[i]<minVal) minVal = a[i];
    }
    cout<<maxVal<<" "<<minVal<<endl;
    return 0;
}
