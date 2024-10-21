
// You are using GCC
#include <iostream>
#include <iomanip>
using namespace std;
class Acceleration {
public:
    double acc;
    Acceleration(double val) : acc(val) {}
    Acceleration operator*(double t) {
        Acceleration result(acc*t);
        return result;
    }
};
int main() {
    double initial, acc, t;
    cin >> initial >> acc >> t;
    Acceleration obj(acc);
    Acceleration m = obj*t;
    double a = m.acc;
    double fv = initial + a;
    cout<<fixed<<setprecision(1)<<fv<<" m/s";
    return 0;
}
