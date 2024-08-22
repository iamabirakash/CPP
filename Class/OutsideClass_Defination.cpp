//WAP TO CREATEA CLASS EMPLOYEE -- EID, NAME AND SALARY
//getdata()-- define inside class
//putdata()-- define outside class

#include<iostream>
using namespace std;
class employee
{
    int eid,salary;
    char name[20];
    public:
        void getdata()
        {
            cin>>eid>>name>>salary;
            
        }
    void putdata();
} e;
void employee::putdata()
{
    cout<<eid<<" "<<name<<" "<<salary;
}
int main()
{
    e.getdata();
    e.putdata();
}
