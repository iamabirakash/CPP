// You are using GCC
#include<iostream>
#include<string>
using namespace std;
class Vehicle{
    string registrationNumber;
    string make;
    string model;
    int yearOfManufacture;
    public:
        Vehicle(string regNum,string vehicleMake,string vehicleModel,int year){
            registrationNumber = regNum;
            make = vehicleMake;
            model = vehicleModel;
            yearOfManufacture = year;
        }
        void displayDetails(){
            cout<<"Registration Number: "<<registrationNumber<<endl;
            cout<<"Make: "<<make<<endl;
            cout<<"Model: "<<model<<endl;
            cout<<"Year of Manufacture: "<<yearOfManufacture<<endl;
        }
};
int main(){
    string regNum, make, model;
    int year;
    getline(cin,regNum);
    getline(cin,make);
    getline(cin,model);
    cin>>year;
    Vehicle vehicle(regNum, make, model, year);
    vehicle.displayDetails();
}
