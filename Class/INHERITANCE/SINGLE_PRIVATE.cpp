// You are using GCC
#include<iostream>
using namespace std;
class student{
    int roll_no;
    protected:
        int section;
    public:
        int get_section(){
            cin>>section;
            return section;
        }
        int get_rollno(){
            cin>>roll_no;
            return roll_no;
        }
};
class result: student{ //by default private
    int marks; //section //get_roll_no //get_section()
    public:
        void get(){
            cin>>marks;
        }
        void print(){
            cout<<marks<<" "<<get_section()<<" "<<get_rollno();
        }
};
int main(){
    result r;
    // r.get_section();
    // r.get_rollno();
    r.get();
    r.print();
}
