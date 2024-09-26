// You are using GCC
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int sum = a+b;
    ofstream file("sum.txt");
    file<<sum;
    cout<<"Sum successfully written to the file 'sum.txt'."<<endl;
    cout<<"Sum: "<<sum<<endl;
}
