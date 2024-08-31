// You are using GCC
#include<iostream>
#include<cstring>
#include<iomanip>
using namespace std;
union Employee{
    int empid;
    char empname[21];
    char dob[11];
    char doj[11];
    float salary;
};
int main(){
  Employee e;
  cin>>e.empid;
  int empID = e.empid;
  cin.ignore();
  cin.getline(e.empname,20);
  char Name[20];
  strcpy(Name, e.empname);
  cin.getline(e.dob,11);
  char DOB[11];
  strcpy(DOB, e.dob);
  cin.getline(e.doj,11);
  char DOJ[11];
  strcpy(DOJ, e.doj);
  cin>>e.salary;
  float SAL = e.salary;
  cout<<"ID : "<<empID<<endl;
  cout<<"Name : "<<Name<<endl;
  cout<<"DOB : "<<DOB<<endl;
  cout<<"DOJ : "<<DOJ<<endl;
  cout<<"Salary : "<< fixed << setprecision(1) << SAL<<endl;
}
