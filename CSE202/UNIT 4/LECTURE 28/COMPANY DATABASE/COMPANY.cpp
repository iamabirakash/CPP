// You are using GCC
#include <iostream>
#include <iomanip>
using namespace std;
class Employee{
public:
    int empId;
    float slry;

    Employee(int empId, float slry){
       // Type your code here
       this->empId = empId;
       this->slry = slry;
    }
};

class empLevel : public Employee
{
public:
    int level;
    empLevel(int empId, float slry) : Employee(empId, slry){
        // Type your code here
        if(slry>100){
            level = 1;
        } else {
            level = 2;
        }
    }
    void display(){
        cout<<"Employee ID: "<<empId<<endl;
        cout<<"Salary: $"<<fixed<<setprecision(2)<<slry<<endl;
        cout<<"Level: "<<level;
    }
};

int main()
{
    int empId;
    float slry;
    cin >> empId >> slry;
    empLevel el(empId, slry);
    el.display();
    return 0;
}
