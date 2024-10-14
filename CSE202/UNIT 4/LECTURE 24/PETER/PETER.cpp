// You are using GCC
#include<iostream>
using namespace std;
class Time{
    int t,hr,min,sec;
    public:
        Time(int tt){
            t=tt;
        }
        void display(){
            hr = t/3600;
            min = (t%3600)/60;
            sec = t%60;
            cout<<hr<<":"<<min<<":"<<sec;
        }
        
};
int main(){
    int seconds;
    cin>>seconds;
    Time t(seconds);
    t.display();
}
