// You are using GCC
#include<iostream>
#include<iomanip>
using namespace std;
class Wall{
    float length, height;
    public:
        Wall(float l,float h){
            length = l;
            height = h;
        }
        void calculateArea(){
            cout<<fixed<<setprecision(1)<<length*height;
        }
};
int main(){
    float l,h;
    cin>>l>>h;
    Wall w(l,h);
    w.calculateArea();
    return 0;
}
