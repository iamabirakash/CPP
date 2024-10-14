// You are using GCC
#include<iostream>
using namespace std;
class rectangle{
    int length;
    int breadth;
    public:
        int getl(){
            cin>>length;
            return length;
        }
        int getb(){
            cin>>breadth;
            return breadth;
        }
        int arear(){
            int a = length*breadth;
            return a;
        }
        // int get(){
        //     cin>>length>>breadth;
        //     return length*breadth;
        // }
        
};
class circle{
    int radius;
    public:
        void getr(){
            cin>>radius;
        }
        float areac(){
            float b = 3.14*radius*radius;
            return b;
        }
};
class area:public rectangle,public circle{
    public:
        void print(){
            cout<<"Area of Rectangle: "<<arear()<<endl;
            cout<<"Area of Circle: "<<areac();
        }
};
int main(){
    area a;
    a.getl();
    a.getb();
    a.getr();
    a.print();
}
