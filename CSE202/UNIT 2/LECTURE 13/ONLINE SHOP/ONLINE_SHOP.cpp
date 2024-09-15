// You are using GCC
#include<iostream>
#include<string>
using namespace std;
class Pro{
    string name;
    int a,b,c;
    public:
        void get(){
            cin>>name;
            cin>>a>>b>>c;
        }
        void put(){
            cout<<"Product Name: "<<name<<endl;
            cout<<"Total items: "<<a+b+c;
        }
};
int main(){
    Pro p;
    p.get();
    p.put();
}
