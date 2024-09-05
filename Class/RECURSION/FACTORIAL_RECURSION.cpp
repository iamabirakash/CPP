//WAP TO FIND A FACTORIAL USING RECURSION
#include<iostream>
using namespace std;
int fact(int n){
    // int product = 1;
    while(n>1){
        return n*fact(n-1);
    }
}
int main(){
    int a;
    cin>>a;
    if(a==0 || a==1){
        cout<<"1"<<endl;
    } else {
        cout<<fact(a);
    }
}
