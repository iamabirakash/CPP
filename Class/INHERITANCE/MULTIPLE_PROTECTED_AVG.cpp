// You are using GCC
//WAP TO CREATE A CLASS VEHICLE. CREATE A TWO CHILD CLASS TWO_T AND FOUR_T. VEHICLE HAS CHASSIS_NO, VEHICLE_NO, MODEL_NO
#include<iostream>
using namespace std;
class student{
    protected:
        int rno;
        string name;
    public:
        void getS(){
            cin>>rno;
            cin>>name;
        }
};
class course:public student{
    protected:
        int marks[5];
    public:
        void getm(){
            for(int i=0;i<5;i++){
                cin>>marks[i];
            }
        }
};
class result:public course{
    protected:
        double average;
    public:
        double sum = 0;
        void print(){
            for(int i=0;i<5;i++){
                sum += marks[i];
            }
            average = sum/5;
            cout<<"The Average is: "<<average<<" for Roll no: "<<rno<<" for the Student: "<<name;
        }
    
};
int main(){
    result r;
    r.getS();
    r.getm();
    r.print();
}
