// You are using GCC
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    ofstream outFile("sample.dat");
    for(int i=0;i<n;i++){
        outFile<<a[i]<<" ";
    }
    outFile.close();
    int maxval = a[0];
    int minval = a[0];
    for(int i=0;i<n;i++){
        if(a[i]>maxval){
            maxval = a[i];
        }
        if(a[i]<minval){
            minval = a[i];
        }
    }
    cout<<maxval<<" "<<minval<<endl;
    return 0;
}
