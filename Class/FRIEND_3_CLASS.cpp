#include<iostream>
using namespace std;
class B;
class C;
class A{
    int a;
    public:
        void get(){
            cin>>a;
        }
        friend void multiply(A,B,C);
};
class B{
    int b;
    public:
        void get(){
            cin>>b;
        }
        friend void multiply(A,B,C);
};
class C{
    int c;
    public:
        void get(){
            cin>>c;
        }
        friend void multiply(A,B,C);
};
void multiply(A x,B y,C z){
    cout<<(x.a *y.b * z.c);
};
int main(){
    A ob1;
    B ob2;
    C ob3;
    ob1.get();
    ob2.get();
    ob3.get();
    multiply(ob1,ob2,ob3);
}
