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
class result:protected student{
    int marks;
    //protected //get_section //get_rollno //section
    public:
        void get(){
            cin>>marks;
        }
        void print(){
            cout<<"Marks: "<<marks<<endl;
            cout<<"Section: "<<get_section()<<endl;
            cout<<"Roll no: "<<get_rollno();
        }
};
int main(){
    result r;
    // r.get_section();
    // r.get_rollno();
    r.get();
    r.print();
}
