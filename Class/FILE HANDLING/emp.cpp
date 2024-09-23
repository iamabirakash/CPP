//WAP TO TAKE A VARIABLE NAME AND SALARY. FOR 3 EMPLOYEES, SIMPLY INPUT AND READ THE DATA FOR 3 EMPLOYEES
#include<iostream>
#include<fstream>
using namespace std;
int main(){
	char name[10];
	float sal;
    ofstream outFile("Emp.txt");
    if(!outFile){
    	cout<<"File couldn't be opened";
    	exit(1);
    }
    for(int i=0;i<3;i++){
        cout<<"\nInput The Data of Employee"<<i+1<<" : ";
        cin>>name>>sal;
        outFile<<"\n"<<name<<" "<<sal;
    }
    outFile.close();
    ifstream inpfile("Emp.txt");
    if(!inpfile){
    	cout<<"File couldn't be opened";
    	exit(1);
    }
    for(int i=0;i<3;i++){
    	cout<<"\nEmployee"<<i+1<<" : ";
    	inpfile>>name;
        inpfile>>sal;
        cout<<name<<" "<<sal;
	}
    inpfile.close();
}
