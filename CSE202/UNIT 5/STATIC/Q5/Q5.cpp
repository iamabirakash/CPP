// You are using GCC
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
class Expression{
    public:
        double a,b;
        virtual void evaluate() = 0;
};
class PowerAB: public Expression{
    public:
        PowerAB(double x=0,double y=0){
            a = x;
            b = y;
        }
        void evaluate(){
            cout<<fixed<<setprecision(2)<<pow(a,b);
        }
};
class PowerBA: public Expression{
    public:
        PowerBA(double x=0,double y=0){
            a = x;
            b = y;
        }
        void evaluate(){
            cout<<"\n"<<fixed<<setprecision(2)<<pow(b,a);
        }
    
};
int main(){
    double a,b;
    cin>>a>>b;
    Expression *ptr;
    PowerAB ab(a,b);
    ptr = &ab;
    ptr->evaluate();
    PowerBA ba(a,b);
    ptr = &ba;
    ptr->evaluate();
}
