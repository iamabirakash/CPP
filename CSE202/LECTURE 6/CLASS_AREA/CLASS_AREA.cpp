// You are using GCC
#include<iostream>
#include<iomanip>
using namespace std;
class Area{
    int side,l,b;
    float radius,base,height;
    public:
        inline void get(){
            cin>>side;
            cin>>l>>b;
            cin>>radius;
            cin>>base>>height;
        }
        inline void squareArea(){
            cout<<"Area of the square: "<<side*side<<endl;
        }
        inline void rectangleArea(){
            cout<<"Area of the rectangle: "<<l*b<<endl;
        }
        inline void circleArea(){
            cout<<"Area of the circle: "<<fixed<<setprecision(2)<<3.14*(radius*radius)<<endl;
        }
        inline void parallelogramArea(){
            cout<<"Area of the parallelogram: "<<fixed<<setprecision(2)<<base*height<<endl;
        }
};
int main(){
    Area a;
    a.get();
    a.squareArea();
    a.rectangleArea();
    a.circleArea();
    a.parallelogramArea();
}
