#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Car {
public:
    virtual int findSpeed() const = 0;
    virtual ~Car() {} 
};

class SportsCar : public Car {
private:
    string model;
    int year;
    int maxSpeed;

public:
    SportsCar(const string& m, int y, int speed) : model(m), year(y), maxSpeed(speed) {}

    int findSpeed() const override {
        return maxSpeed;
    }

    int calculateAge() const {
        const int currentYear = 2024;
        return currentYear - year;
    }
    
    double convertToMph() const {
        const double conversionFactor = 0.621371;
        return maxSpeed * conversionFactor;
    }

    void displaySpecifications() const {
        cout << "Max speed in km/h: " << findSpeed() << endl;
        cout << "Max speed in mph: " << fixed << setprecision(2) << convertToMph() << endl;
        cout << "Age of the car: " << calculateAge() << " years" << endl;
    }
};

int main() {
    string model;
    int year, maxSpeed;

    getline(cin, model);
    cin >> year >> maxSpeed;

    if (year < 1900 || year > 2024 || maxSpeed < 1 || maxSpeed > 1000) {
        cout << "Invalid input" << endl;
        return 0;
    }

    SportsCar car(model, year, maxSpeed);
    car.displaySpecifications();

    return 0;
}
