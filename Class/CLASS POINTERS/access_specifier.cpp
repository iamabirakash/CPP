// You are using GCC
#include<iostream>
using namespace std;
class base{ 
    public: 
        void show(){ 
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
    derived *dptr;
    derived d; 
    bptr = &d;
    dptr = &d;
    bptr->show();
    ((derived*)bptr)->show();
}
