// You are using GCC
//WAP TO CREATE A CLASS AREA. TAKE A MEMEBER RADIUS. CONVERT THE CLASS AREA TO DOUBLE DATA
#include<iostream>
using namespace std;
class student{
    int roll_no;
    protected:
        int section;
    public:
        void get_section(){
            cin>>section;
        }
        int get_rollno(){
            cin>>roll_no;
            return roll_no;
        }
};
class result:public student{
    int marks;
    public:
        void get(){
            cin>>marks;
        }
        void print(){
            cout<<section<<" "<<get_rollno()<<" "<<marks;
        }
};
int main(){
    result r;
    r.get_section();
    r.get_rollno();
    r.get();
    r.print();
}
