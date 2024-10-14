// You are using GCC
//WAP TO CREATE A CLASS SPORTS->grade & STUDENT->rno. CHILD TEST OF STUDENT->marks. CHILD RESULT OF SPORTS,STUDENT->rno,marks,grade.  
#include<iostream>
using namespace std;
class sports{
    protected:
    char grade;
    public:
        void getg(){
            cin>>grade;
        }
};
class student{
    protected:
    int rno;
    public:
        void getS(){
            cin>>rno;
        }
};
class test:public student{
    protected:
    int marks[5];
    public:
        void getm(){
            for(int i=0;i<5;i++){
                cin>>marks[i];
            }
        }
};
class result:public test,public sports{
    protected:
        double average;
    public:
        double sum = 0;
        void print(){
            for(int i=0;i<5;i++){
                sum += marks[i];
            }
            average = sum/5;
            cout<<"The Average marks for Roll no "<<rno<<" is "<<average<<endl;
            cout<<"The Grade is: "<<grade;
        }
    
};
int main(){
    result r;
    r.getg();
    r.getS();
    r.getm();
    r.print();
}
