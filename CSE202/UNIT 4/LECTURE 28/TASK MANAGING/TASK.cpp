#include <iostream>
using namespace std;

class Parent {
public:
    int num;
};

class Child : public Parent {
public:
    void fun() {
        int digits[10];
        int size = 0;
        int temp = num;
        while (temp > 0) {
            digits[size++] = temp % 10;
            temp /= 10;
        }
        if (size == 1) {
            cout << digits[0] << endl;
            return;
        }

        int sum = 0;
        for (int i = 0; i < size; ++i) {
            for (int j = i + 1; j < size; ++j) {
                sum += digits[i] + digits[j];
            }
        }
        cout << sum << endl;
    }
};

int main() {
    Child c;
    cin >> c.num;
    c.fun();
    return 0;
}
