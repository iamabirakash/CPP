// You are using GCC
#include<iostream>
using namespace std;
class base{ 
    public: 
        virtual void show(){ 
            cout<<"Show of base class\n"; 
        } void printB(){ cout<<"Printing Message in Base Class\n"; } 
};
class derived:public base{ 
    public: 
        void show(){ 
            cout<<"Show of derived class\n"; 
        } 
        void printD(){ 
            cout<<"Printing Message in Derived Class\n"; 
        } 
}; 
int main(){ 
    base *bptr;
    base b;
    derived d; 
    bptr = &d;
    bptr->show();
    bptr = &b;
    bptr->show();
}
