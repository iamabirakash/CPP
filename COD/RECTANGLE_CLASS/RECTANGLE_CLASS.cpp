// You are using GCC
#include<iostream>
using namespace std;
class Rectangle {
    public:
        int length,breadth;
        void get(){
            cin>>length>>breadth;
        }
        void printOut(){
            cout<<"Area: "<<length*breadth<<endl;
            cout<<"Perimeter: "<<2*(length+breadth)<<endl;
        }
} r;
int main(){
    r.get();
    r.printOut();
}
