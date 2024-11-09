#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

class Icecream {
public:
    virtual double Quantity() const = 0;
    virtual ~Icecream() {}
};

class SphereIcecream : public Icecream {
private:
    int radius;
public:
    SphereIcecream(int r) : radius(r) {}
    double Quantity() const override {
        return (4.0 / 3.0) * M_PI * pow(radius, 3);
    }
};

class ConeIcecream : public Icecream {
private:
    int radius;
    int height;
public:
    ConeIcecream(int r, int h) : radius(r), height(h) {}
    double Quantity() const  {
        return (1.0 / 3.0) * M_PI * pow(radius, 2) * height;
    }
};

int main() {
    int choice;
    cin >> choice;

    if (choice == 1) {
        int r;
        cin >> r;
        SphereIcecream sphere(r);
        cout << fixed << setprecision(2) << sphere.Quantity() << endl;
    } else if (choice == 2) {
        int r, h;
        cin >> r >> h;
        ConeIcecream cone(r, h);
        cout << fixed << setprecision(2) << cone.Quantity() << endl;
    } else {
        cout << "Invalid choice" << endl;
    }

    return 0;
}
