// You are using GCC
#include<iostream>
#include<iomanip>
using namespace std;
class Circle{
    double radius;
    public:
        Circle(double r){
            radius = r;
        }
        double getr(){
            return radius;
        }
};
class Cylinder: private Circle{
    double height;
    public:
        Cylinder(double r, double h) : Circle(r), height(h) {}
        // Cylinder(double r,double h){
        //     Circle::Circle(r);
        //     height = h;
        // }
        double vol(){
            double r = 3.14*getr()*getr()*height;
            return r;
        }
};
int main(){
    double radius,height;
    cin>>radius>>height;
    Cylinder c(radius,height);
    cout<<fixed<<setprecision(2)<<c.vol()<<endl;
}
