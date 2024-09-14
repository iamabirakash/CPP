// You are using GCC
#include<iostream>
#include <cctype>
using namespace std;
int main(){
    int n;
    cin>>n;
    char c;
    cin>>c;
    int* no = &n;
    if(*no == 0){
        cout<<"The number is zero"<<endl;
    } else if(*no < 0){
        cout<<"The number is negative"<<endl;
    } else {
        cout<<"The number is positive"<<endl;
    }
    
    if(isalpha(c)){
        cout<<"The character is an alphabet"<<endl;
    } else if(isdigit(c)){
        cout<<"The character is a number"<<endl;
    } else {
        cout<<"The character is not a number or an alphabet"<<endl;
    }
}
