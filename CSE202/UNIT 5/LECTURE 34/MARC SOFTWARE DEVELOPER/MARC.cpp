#include <iostream>
using namespace std;

class NeonNumberChecker {
public:
    virtual ~NeonNumberChecker() {}

    bool isNeon(int n) const {
        int square = n * n;
        int sumOfDigits = 0;

        while (square > 0) {
            sumOfDigits += square % 10;
            square /= 10;
        }
        return sumOfDigits == n;
    }
};

int main() {
    int n;
    cin >> n;

    if (n <= 0 || n > 20) {
        cout << "Invalid" << endl;
    } else {
        NeonNumberChecker checker;
        if (checker.isNeon(n)) {
            cout << n << " is a Neon Number" << endl;
        } else {
            cout << n << " is Not a Neon Number" << endl;
        }
    }

    return 0;
}
