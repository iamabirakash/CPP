//WAP TO CREATE A CLASS A WITH MEMEBRS a, CLASS B WITH MEMEBRS b, SUCH THAT B IS FRIEND TO A;
#include<iostream>
using namespace std;
class A{
    int a;
    public:
        void get(){
            cin>>a;
        }
        friend class B;
};
class B{
    int b;
    public:
        void get(){
            cin>>b;
        }
        void print(A& x){
            cout<<x.a*b;
        }
};
int main(){
    A obj1;
    B obj2;
    obj1.get();
    obj2.get();
    obj2.print(obj1);
}
