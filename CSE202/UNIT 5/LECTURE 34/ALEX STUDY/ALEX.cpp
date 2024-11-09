// You are using GCC
#include <iostream>
#include <iomanip>
using namespace std;

class Vehicle {
protected:
    double maxSpeed; 
public:
    void setMaxSpeed(double speed){
        maxSpeed = speed;
    }
};

class Car : public Vehicle {
public:
    virtual double timeToTravel(double dist){
        return dist/maxSpeed;
    }
};

class Boat : public Vehicle {
public:
    virtual double timeToTravel(double dist){
        return dist/(maxSpeed*1.151);
    }
};

int main() {
    Car car;
    Boat boat;

    double carSpeed, carDistance;
    double boatSpeed, boatDistance;

    cin >> carSpeed;
    car.setMaxSpeed(carSpeed);
    cin >> carDistance;

    cin >> boatSpeed;
    boat.setMaxSpeed(boatSpeed);
    cin >> boatDistance;

    cout << fixed << setprecision(2);
    cout << "Car " << car.timeToTravel(carDistance) << endl;
    cout << "Boat " << boat.timeToTravel(boatDistance);

    return 0;
}
