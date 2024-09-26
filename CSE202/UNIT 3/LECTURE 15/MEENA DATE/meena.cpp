// You are using GCC
#include<iostream>
using namespace std;
class Date{
    int day,month,year;
    public:
        Date():day(31),month(12),year(2022){}
        Date(int d,int m,int y){
            if(d>=1 && d<=31){
                day = d;
            } else {
                day = 30;
            }
            if(m>=1 && m<=12){
                month = m;
            } else {
                month = 12;
            }
            if(y>=2023 && y<=2998){
                year = y;
            } else {
                year = 2023;
            }
        }
        void display(){
            cout<<day<<"-"<<month<<"-"<<year<<endl;
        }
        
};
int main(){
    Date defaultDate;
    defaultDate.display();
    
    int d,m,y;
    cin>>d>>m>>y;
    
    Date custom(d,m,y);
    custom.display();
    
    return 0;
}
