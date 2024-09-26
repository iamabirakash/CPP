// You are using GCC
#include<iostream>
#include<fstream>
using namespace std;
class Employee{
    int emp_code;
    char name[20];
    int hra,da,ta;
    public:
        void read_data(){
            cout<<"\n\n Enter the employee code: ";
            cin>>emp_code;
            cout<<"\n Enter the name of the employee";
            cin>>name;
            cout<<"\n Enter the HRA,DA and TA of the employee";
            cin>>hra>>da>>ta;
        }
        void show_data(){
            cout<<"\n EMP CODE: "<<emp_code;
            cout<<"\n NAME: "<<name;
            cout<<"\n HRA,DA and TA: "<<hra<<da<<ta;
        }
};
int main(){
    fstream FILE;
    Employee e[3],d[3];
    int i;
    FILE.open("employee1",ios::out | ios::binary);
    cout<<"\n Enter the details of three employees";
    cout<<"\n -----------------------------------------";
    //e.read_data();
    //FILE.write((char*)e,sizeof(e));
    for(int i=0;i<3;i++){
        e[i].read_data();
        FILE.write((char*)&e[i],sizeof(e[i]));
    }
    FILE.close();
    FILE.open("employee1",ios::in|ios::binary);
    //FILE.read((char*)d,sizeof(d));
    //d.show_data();
    for(int i=0;i<3;i++){
        FILE.read((char*)&d[i],sizeof(d[i]));
    }
    FILE.close();
    return 0;
}
