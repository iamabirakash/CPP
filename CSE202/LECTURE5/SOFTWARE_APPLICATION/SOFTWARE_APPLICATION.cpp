// You are using GCC
#include<iostream>
using namespace std;
class Demo{
    static int x,y;
    public:
        static void get(){
            cin>>x;
            cin>>y;
        }
        static void put(){
            cout<<"Value of X: "<<x<<endl;
            cout<<"Value of Y: "<<y<<endl;
        }
};
int Demo::x=10;
int Demo::y=20;
int main(){
    Demo d;
    d.put();
    d.get();
    d.put();
}
