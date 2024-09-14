// You are using GCC
#include<iostream>
using namespace std;
class Date{
    int date,month,year;
    public:
        void get(){
            cin>>date;
            cin>>month;
            cin>>year;
        }
        void put(){
            cout<<"The date is "<<date<<"/"<<month<<"/"<<year;
        }
};
int main(){
  Date d, *p;
  p = &d;
  p->get();
  p->put();
}
