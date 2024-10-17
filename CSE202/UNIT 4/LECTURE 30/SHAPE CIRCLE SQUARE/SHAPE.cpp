// You are using GCC
#include <iostream>
#include <iomanip>
#include <string>  
using namespace std;

class Shape {
protected:
    string name;
public:
    Shape(string n) : name(n) {
        cout << "Shape Constructor: Creating a shape - " << name << endl;
    }

    virtual ~Shape() {
        cout << "Shape Destructor: Destroying a shape - " << name << endl;
    }

    virtual double area() = 0;
};

// Derived class Circle
class Circle : public Shape {
private:
    double radius; 
public:
    Circle(string n, double r) : Shape(n), radius(r) {
        cout << "Circle Constructor: Creating a circle - " << name << endl;
    }
    ~Circle() {
        cout << "Circle Destructor: Destroying a circle - " << name << endl;
    }
    double area() override {
        return 3.14 * radius * radius;
    }
};
class Square : public Shape {
private:
    double side;
public:
    Square(string n, double s) : Shape(n), side(s) {
        cout << "Square Constructor: Creating a square - " << name << endl;
    }
    ~Square() {
        cout << "Square Destructor: Destroying a square - " << name << endl;
    }
    double area() override {
        return side * side;
    }
};

int main() {
    string circleName;
    double radius;
    cin >> circleName >> radius;

    string squareName;
    double side;
    cin >> squareName >> side;

    Circle circle(circleName, radius);
    Square square(squareName, side);

    cout << fixed << setprecision(2);  // Setting precision for area output
    cout << "Area of " << circleName << ": " << circle.area() << endl;

    cout << "Area of " << squareName << ": " << square.area() << endl;

    return 0;
}
