// You are using GCC
//WAP TO CREATE A CLASS STUDENTS, MEMBER AS NAME,ROLLNO,MARKS.
//INITIALISE A LIST -> COPY MARKS OF STUDENT1 TO STUDENT2...1 MARK...USE DESTRUCTOR AND DESTROY INITIALISE
#include<iostream>
#include<string>
using namespace std;
// #include<conio>
class student{
    string name;
    int marks,rollno;
    public:
        // student(char n,int m, int r){
        //     name = n;
        //     marks = m;
        //     rollno = r;
        // }
        student(string n,int r,int m):name(n),rollno(r),marks(m)
        {
            
        }
        student(student &ob){
            name = ob.name;
            marks = ob.marks;
            rollno = ob.rollno;
        }
        ~student(){
            cout<<"Object Destroyed"<<endl;
        }
        void put(){
            cout<<name<<" "<<rollno<<" "<<marks<<endl;
        }
};
int main(){
    student c1("Abir",1,20);
    student c2(c1);
    c1.put();
    c2.put();
}
