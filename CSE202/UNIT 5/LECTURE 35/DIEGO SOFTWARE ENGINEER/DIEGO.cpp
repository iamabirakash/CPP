// You are using GCC
#include<iostream>
using namespace std;
class A {
    public:
        virtual void print() = 0;
        virtual ~A(){}
};
class B: public A {
    int num;
    public:
        B(int n):num(n){}
        void print(){
            int square = num*num;
            int cube = num*num*num;
            if(num%2==0){
                cout<<(square+cube)<<endl;
            } else {
                cout<<(cube-square)<<endl;
            }
        }
};
int main(){
    int n;
    cin>>n;
    B obj(n);
    obj.print();
    return 0;
}
