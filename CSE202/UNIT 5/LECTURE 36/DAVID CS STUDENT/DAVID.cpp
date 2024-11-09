#include <iostream>
#include <string>
using namespace std;

class DecimalToBinaryConverter {
public:
    void convert(int n) {
        if (n == 0) {
            cout << "0";
        } else {
            string binary = "";
            while (n > 0) {
                binary = char((n % 2) + '0') + binary;
                n /= 2;
            }
            cout << binary;
        }
    }
};

int main() {
    int n;
    cin >> n;
    
    DecimalToBinaryConverter converter;
    converter.convert(n);
    
    return 0;
}
