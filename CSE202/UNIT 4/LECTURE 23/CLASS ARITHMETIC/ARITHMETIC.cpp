// You are using GCC
#include<iostream>
#include<iomanip>
using namespace std;
class Arithmetic{
    float x,y;
    public:
        Arithmetic(float num1,float num2){
            x = num1;
            y = num2;
        }
        Arithmetic operator+(Arithmetic &ob){
            return Arithmetic(x+ob.x,y+ob.y);
        }
        Arithmetic operator-(Arithmetic &ob){
            return Arithmetic(x-ob.x,y-ob.y);
        }
        void display(){
            if(y>=0){
                cout<<fixed<<setprecision(2)<<x<<" + "<<y<<"i"<<endl;
            } else {
                if(y<0){
                    y = y*(-1);
                    cout<<fixed<<setprecision(2)<<x<<" - "<<y<<"i"<<endl;
                }
            }
        }
};
int main(){
    float a,b;
    cin>>a>>b;
    float c,d;
    cin>>c>>d;
    Arithmetic a1(a,b);
    Arithmetic a2(c,d);
    Arithmetic res1 = a1 + a2;
    Arithmetic res2 = a1 - a2;
    res1.display();
    res2.display();
    return 0;
} 
