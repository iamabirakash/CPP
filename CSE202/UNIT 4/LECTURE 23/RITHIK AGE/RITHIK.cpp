// You are using GCC
#include<iostream>
using namespace std;
class age{
    int aa;
    public:
        age(int a){
            aa=a;
        }
        bool operator==(age &ob){
            return aa==ob.aa;
        }
};
int main(){
    int x,y,z;
    cin>>x>>y>>z;
    age person1(x);
    age person2(y);
    age person3(z);
    if(person1==person2){
        cout<<"Person 1 is the same age as Person 2."<<endl;
    } else {
        cout<<"Person 1 is not the same age as Person 2."<<endl;
    }
    
    if(person1==person3){
        cout<<"Person 1 is the same age as Person 3."<<endl;
    } else {
        cout<<"Person 1 is not the same age as Person 3."<<endl;
    }
}
