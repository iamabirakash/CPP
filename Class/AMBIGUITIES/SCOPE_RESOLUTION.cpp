// You are using GCC
//AMBIGUITY -> WHEN THE BASE CLASS AND THE DERIVED CLASS HAVE S MEMBER FUNCTION WITH THE SAME NAME.
#include<iostream>
using namespace std;
class A{
    int x;
    public:
        void get(){
            cout<<"Enter x";
            cin>>x;
        }
};
class B: public A{
    int y;
    public:
        void get(){
            //TO RESOLVE
            A::get();
            cout<<"Enter y";
            cin>>y;
        }
};
int main(){
    B b;
    b.get();
    //OR
    //A::get();
}
