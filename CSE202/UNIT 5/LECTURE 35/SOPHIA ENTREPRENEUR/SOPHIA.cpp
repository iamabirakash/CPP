// You are using GCC
#include<iostream>
#include<iomanip>
using namespace std;
class Product {
    public:
        virtual double calculateTotalPrice() = 0;
        virtual ~Product(){}
};
class Electronics: public Product {
    double price;
    double discount;
    public:
        Electronics(double p,double d):price(p),discount(d){}
        double calculateTotalPrice() override {
            return price-(price*discount/100);
        }
};
class Apparel: public Product {
    double price;
    double tax;
    public:
        Apparel(double p,double t):price(p),tax(t){}
        double calculateTotalPrice() override {
            return price+(price*tax/100);
        }
};
int main(){
    double priceE,discount,priceA,tax;
    cin>>priceE>>discount;
    cin>>priceA>>tax;
    Electronics electronics(priceE,discount);
    Apparel apparel(priceA,tax);
    cout<<fixed<<setprecision(2);
    cout<<electronics.calculateTotalPrice()<<endl;
    cout<<apparel.calculateTotalPrice()<<endl;
    return 0;
}
