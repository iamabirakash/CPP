// You are using GCC
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n<=0 || n>100){
        cout<<"Invalid entry"<<endl;
        return 0;
    }
    int a[100];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    ofstream file("numbers.dat");
    if(file.is_open()){
        for(int i=0;i<n;i++){
            file<<a[i]<<" ";
        }
        file.close();
    }
    ifstream infile("numbers.dat");
    if(infile.is_open()){
        int num;
        while(infile>>num){
            cout<<num<<" ";
        }
        cout<<endl;
        infile.close();
    }
    return 0;
}
