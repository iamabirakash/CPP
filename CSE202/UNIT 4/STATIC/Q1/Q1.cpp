// You are using GCC
#include <iostream>
using namespace std;

class Numbers {
public:
    int value;

    Numbers(int val) : value(val) {}
    
    Numbers operator-() {
        return Numbers(-value);
    }
};

int main() {
    int x, y;

    cin >> x >> y;
    
    Numbers num1(x), num2(y);

    Numbers negX = -num1;
    Numbers negY = -num2;

    int addition = negX.value + negY.value;
    int subtraction = negX.value - negY.value;

    cout << addition << " " << subtraction << endl;

    return 0;
}
