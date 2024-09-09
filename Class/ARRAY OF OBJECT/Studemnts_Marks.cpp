#include<iostream>
using namespace std;
class student{
    int rno,marks[5];
    char name[20];
    public:
        void get(){
            cin>>rno;
            for(int i=0;i<5;i++){
                cin>>marks[i];
            }
            cin>>name;
        }
        void print(){
            int cnt = 0;
            for(int i=0;i<5;i++){
                cnt += marks[i];
            }
            double avg = cnt/5;
            cout<<"Average marks "<<name<<" is: "<<avg<<endl;
        }
}s[2];
int main(){
    for(int i=0;i<2;i++){
        s[i].get();
        s[i].print();
    }
}
