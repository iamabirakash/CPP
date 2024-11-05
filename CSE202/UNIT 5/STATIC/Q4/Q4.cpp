// You are using GCC
#include<iostream>
using namespace std;
int main(){
    char a;
    cin>>a;
    if(a=='R' || a=='r'){
        cout<<"I'm Painting with Red color.";
    } else if (a=='b' || a=='B'){
        cout<<"I'm Painting with Blue color.";
    } else {
        cout<<"Invalid Choice!";
    }
}
