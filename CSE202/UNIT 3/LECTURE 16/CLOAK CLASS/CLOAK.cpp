// You are using GCC
#include <iostream>
#include <iomanip>
using namespace std;

class Clock {
public:
    Clock(int h,int m,int s){
        setTime(h,m,s);
    }

    void setTime(int h, int m, int s) {
        // Type your code here 
        hour = (h>=0 && h<24)? h:0;
        minute = (m>=0 && m<60)? m:0;
        second = (s>=0 && s<60)? s:0;
    }

    void printTime() {
        cout << setfill('0') << setw(2) << hour << ":" << setw(2) << minute << ":" << setw(2) << second << endl;
    }

private:
    int hour;
    int minute;
    int second;
};

int main() {
    int h, m, s;

    cin >> h >> m >> s;
    Clock myClock(h, m, s);

    myClock.printTime();

    return 0;
}
