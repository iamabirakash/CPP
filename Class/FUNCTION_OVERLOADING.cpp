// You are using GCC
//WAP TO CREATE A CLASS SHAPE WITH MEMBERS OF YOUR CHOICE. OVERLOAD A MEMBER FUNCTION AREA-CIRCLE,RECTANGLE AND SQUARE
#include<iostream>
#include<iomanip>
using namespace std;
class shape{
    int l,b,s;
    double radius;
    public:
        void area(double r){
            cout<<"The Area of the circle is: "<<fixed<<setprecision(2)<<3.14*r*r<<endl;
        }
        void area(int l,int b){
            cout<<"The Area of the rectangle is: "<<l*b<<endl;
        }
        void area(int s){
            cout<<"The Area of the square is: "<<s<<endl;
        }
};
int main(){
    shape s;
    double radius;
    cin>>radius;
    int l,b,side;
    cin>>l>>b;
    cin>>side;
    s.area(radius);
    s.area(l,b);
    s.area(side);
}
