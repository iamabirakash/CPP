// You are using GCC
//WAP TO CREATE A CLASS OVERLOADING WITH MEMBERS SIDE,LENGTH,BREADTH AND RADIUS || MEMBER FUNCTION AREA TO COMPUTE THE AREA OF 
//SQUARE CIRCLE AND RECTANGLE
#include<iostream>
using namespace std;
class test{
    int side,length,breadth,radius;
    public:
        void area(int l,int b){
            cout<<"Area of Rectangle: "<<l*b<<endl;
        }
        void area(int s){
            cout<<"Area of Square: "<<s*s<<endl;
        }
        void area(float r){
            cout<<"Area of Circle: "<<3.14*r*r<<endl;
        }
};
int main(){
    test a;
    int s = 2;
    int l = 3;
    int b = 4;
    float r = 2.2;
    a.area(s);
    a.area(l,b);
    a.area(r);
}
