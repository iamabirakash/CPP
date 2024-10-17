// You are using GCC
#include<iostream>
#include<iomanip>
using namespace std;
class CarPrice{
    protected:
        double price;
    public:
        CarPrice(double p):price(p){}
        double getp(){
            return price;
        }
};
class LoanInterestRate{
    protected:
        double rate;
    public:
        LoanInterestRate(double r){
            rate = r;
        }
        double getr(){
            return rate;
        }
    
};
class CarLoan: public CarPrice, public LoanInterestRate{
    protected:
        int t;
    public:
        CarLoan(double p,double r,int tt):CarPrice(p),LoanInterestRate(r),t(tt){}
        void interest(){
            cout<<"Total interest paid: Rs."<<fixed<<setprecision(2)<<getp()*getr()*t;
        }
};
int main(){
    double price,rate;
    int t;
    cin>>price>>rate>>t;
    CarLoan c(price,rate,t);
    c.interest();
}
