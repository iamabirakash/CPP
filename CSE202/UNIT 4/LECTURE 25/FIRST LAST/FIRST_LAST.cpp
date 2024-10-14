// You are using GCC
#include<iostream>
using namespace std;
class FullName{
    string namef,namel;
    public:
        FullName(string a,string b){
            namef = a;
            namel = b;
        }
        void display(){
            cout<<namef<<" "<<namel;
        }
};
int main(){
    string first,last;
    getline(cin,first);
    getline(cin,last);
    FullName a(first,last);
    a.display();
}
