// You are using GCC
#include<iostream>
using namespace std;

class Vehicle{
    string a;
    public:
        Vehicle(string x){
            a = x;
        }
        virtual void move(){
            cout<<a<<endl;
        } 
};
class Motorbike{
    string b;
    public:
        Motorbike(string y){
            b = y;
        }
        virtual void move(){
            cout<<b<<endl;
        }
};
int main(){
    string a,b;
    cin>>a;
    cin>>b;
    Vehicle obj1(a);
    obj1.move();
    Motorbike obj2(b);
    obj2.move();
}
