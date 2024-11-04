// You are using GCC
#include<iostream>
using namespace std;
class base{ 
    public: 
        void show(){ 
            cout<<"Show of base class"; 
        } void printB(){ cout<<"Printing Message in Base Class"; } 
};
class derived:public base{ 
    public: 
        void show(){ 
            cout<<"Show of derived class"; 
        } 
        void printD(){ 
            cout<<"Printing Message in Derived Class"; 
        } 
}; 
int main(){ 
    base *ptr; 
    derived d; 
    ptr = &d; 
    ptr->show(); 
}
