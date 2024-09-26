// You are using GCC
#include <iostream>
using namespace std;

class Distance {
private:
    int feet;
    float inches;

public:
    Distance() : feet(0), inches(0.0) {}

    Distance(const Distance& d) {
        // Type your code here
        feet = d.feet;
        inches = d.inches;
    }

    void setdist(int ft, float in) {
        feet = ft;
        inches = in;
    }

    Distance add(Distance d) {
        // Type your code here
        int totalFeet = feet + d.feet;
        float totalInches = inches + d.inches;
        
        if(totalInches>=12.0){
            totalFeet += (int)(totalInches/12.0);
            totalInches = totalInches - (int)(totalInches/12.0)*12.0;
        }
        Distance result;
        result.feet = totalFeet;
        result.inches = totalInches;
        return result;
    }

    void disp() {
        cout << feet << "\'" << inches << "\"";
    }
};

int main() {
    int feet1, feet2;
    float inches1, inches2;

    cin >> feet1 >> inches1;
    cin >> feet2 >> inches2;

    Distance d1;
    d1.setdist(feet1, inches1);

    Distance d2;
    d2.setdist(feet2, inches2);

    Distance d3 = d1.add(d2);
    d3.disp();

    return 0;
}
