#include<iostream>
using namespace std;
template<class T>
class Student{
    public:
        T roll;
        void get(){
            cin>>roll;
            cout<<"The Roll No is: "<<roll<<endl;
        }
};
template <class T, class T1>
class result: public Student<T>{
    public:
    T1 marks[5];
    void get(){
        Student<T>::get();
        for(int i=0;i<5;i++){
            cin>>marks[i];
        }
    }
    void sum(){
        int sum = 0;
        for(int i=0;i<5;i++){
            sum += marks[i];
        }
        cout<<"The Sum is: "<<sum<<endl;
    }
    void out();
};
template<class T,class T1>
void result<T,T1>::out(){
    cout<<"Hello, I'm a Non-Member Function";
};
int main(){
    result <int,int>r;
    r.get();
    r.sum();
    r.out();
}
