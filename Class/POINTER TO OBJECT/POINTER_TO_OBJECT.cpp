// You are using GCC
//WAP TO CREATE A CLASS STUDENT RNO, NAME AND MARKS IN n SUBJECT(POINTER WITHIN CLASS) PRINT RNO, NAME, AVG MARKS FOR 1 STUDENT
//ACCESS THROUGH POINTER TO OBJECT
#include<iostream>
using namespace std;
class student{
    int rno;
    char name[20];
    int *marks; //pointer within class
    public:
        void get(){
            cin>>rno;
            cin>>name;
            marks = new int[3];
            for(int i=0;i<3;i++){
                cin>>*(marks+i); //p[i]
            }
        }
        void put(){
            cout<<rno<<" ";
            cout<<name<<" ";
            int cnt = 0;
            for(int i=0;i<3;i++){
                cnt += *(marks+i); //p[i]
            }
            double avg = cnt/3;
            cout<<avg;
        }
}s;
int main(){
    student *p = &s;
    student s,*pt;
    pt=&s;
    pt->get();
    pt->put();
}
