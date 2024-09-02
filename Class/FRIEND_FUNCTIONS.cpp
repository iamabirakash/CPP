// You are using GCC
#include<iostream>
using namespace std;
class B; //FORWARD DECLARATION
class A{
    int a;
    public:
        void get(){
            a = 5;
        }
        void print(){
            cout<<a<<endl;
        }
        friend void add(A &,B &);
        // friend void add(A,B);
};
class B{
    int b;
    public:
        void get(){
            b = 5;
        }
        void print(){
            cout<<b<<endl;
        }
        friend void add(A &,B &);
        // friend void add(A,B);
};
void add(A &x, B &y){
    // cout<<x.a + y.b<<endl;
    x.a = x.a + 12;
    y.b = y.b + 10;
    cout<<x.a<<" "<<y.b<<endl;
}
int main(){
    A ob1;
    B ob2;
    ob1.get();
    ob2.get();
    add(ob1,ob2);
    ob1.print();
    ob2.print();
}
