// You are using GCC
#include<iostream>
#include<iomanip>
using namespace std;
class Student{
    string name;
    double marks[100];
    double avg;
    public:
        void initializeStudents(){
            getline(cin,name);
        }
        void display(int numSubjects){
            double sum = 0.0;
            for(int i=0;i<numSubjects;i++){
                cin>>marks[i];
                sum += marks[i];
            }
            avg = sum/numSubjects;
            cout<<"Name: "<<name<<endl;
            cout<<"Average marks: "<<fixed<<setprecision(2)<<avg<<endl;
        }
};
int main(){
    int n;
    cin>>n;
    Student s[n],*p;
    p=s;
    int numSubjects;
    cout<<"Student Details:"<<endl;
    for(int i=0;i<n;i++){
        cin.ignore();
        (p+i)->initializeStudents();
        cin>>numSubjects;
        (p+i)->display(numSubjects);
    }
    return 0;
}
