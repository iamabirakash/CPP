#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    try{
        if(b!=0){
            cout<<a/b;
        } else {
            throw(b);
        }
    }
    catch(int b){
        cout<<"Division by zero occured";
    }
}
