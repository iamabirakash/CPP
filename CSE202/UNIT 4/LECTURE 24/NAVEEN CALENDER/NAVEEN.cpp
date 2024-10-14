// You are using GCC
#include<iostream>
using namespace std;
class DateFromConverter{
    int x,y,z;
    public:
        DateFromConverter(int date,int month,int year){
            x = date;
            y = month;
            z = year;
        }
        void display(){
            cout<<"Date in DD-MM-YYYY format: "<<x<<"-"<<y<<"-"<<z;
        }
};
int main(){
    int month,date,year;
    cin>>month>>date>>year;
    DateFromConverter t(date,month,year);
    t.display();
}
