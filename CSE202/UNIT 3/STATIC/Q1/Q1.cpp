// You are using GCC
#include<iostream>
#include<iomanip>
using namespace std;
class Complex{
    public:
        float real;
        float imag;
        Complex(){
            real = 0;
            imag = 0;
        }
        ~Complex(){
            
        }
        void setvalue(){
            cin>>real;
            cin>>imag;
        }
        void display(){
            cout<<fixed<<setprecision(1);
            cout<<real<<" + "<<imag<<"i"<<endl;
        }
        void sum(Complex c1, Complex c2){
            real = c1.real + c2.real;
            imag = c1.imag + c2.imag;
        }
};
int main(){
    Complex c1,c2,c3;
    c1.setvalue();
    c2.setvalue();
    cout<<"Sum of two complex numbers is ";
    c3.sum(c1,c2);
    c3.display();
    return 0;
}
