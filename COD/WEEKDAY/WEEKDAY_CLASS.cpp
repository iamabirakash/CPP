// You are using GCC
#include<iostream>
using namespace std;
class dayOfWeek{
    public:
    int day;
    string dayName;
    void setDay(int n){
        int dayNumber = n;
        if(dayNumber==1){
            dayName = "Sunday";
        } else if(dayNumber==2){
            dayName = "Monday";
        } else if(dayNumber==3){
            dayName = "Tuesday";
        } else if(dayNumber==4){
            dayName = "Wednesday";
        } else if(dayNumber==5){
            dayName = "Thrusday";
        } else if(dayNumber==6){
            dayName = "Friday";
        } else if(dayNumber==7){
            dayName = "Saturday";
        } else if(dayNumber==0){
            dayName = "Weekend";
        } else {
            dayName = "Invalid";
        }
    }
    
    void printOut(){
        cout<<dayName<<endl;
    }
};
int main(){
    int n;
    cin>>n;
    dayOfWeek d;
    d.setDay(n);
    d.printOut();
}
