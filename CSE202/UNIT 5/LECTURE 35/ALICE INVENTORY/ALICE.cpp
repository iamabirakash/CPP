// You are using GCC
#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
class Product {
    protected:
        string name;
        double price;
        int quantity;
    public:
        Product(string n,double p,int q){
            name = n;
            price = p;
            quantity = q;
        }
        virtual double calculateTotalBill()=0;
        void addToCart(int quantityToAdd){
            quantity += quantityToAdd;
        }
        string getName() const { return name; }
        double getPrice() const { return price; }
        int getQuantity() const { return quantity; }
};
class Electronics: public Product {
    string warrantyPeriod;
    public:
        Electronics(string n,double p,int q,string w):Product(n,p,q),warrantyPeriod(w){}
        double calculateTotalBill() override {
            return price*quantity;
        }
        string getWarrantyPeriod() const {
            return warrantyPeriod;
        }
};
int main(){
    string name,warranty;
    double price;
    int quantity, quantityToAdd;
    getline(cin,name);
    cin>>price;
    cin>>quantity;
    cin.ignore();
    getline(cin,warranty);
    cin>>quantityToAdd;
    Electronics product(name,price,quantity,warranty);
    product.addToCart(quantityToAdd);
    cout<<fixed<<setprecision(2);
    cout<<"Product Name: "<<product.getName()<<endl;
    cout<<"Price per item: "<<product.getPrice()<<endl;
    cout<<"Quantity: "<<product.getQuantity()<<endl;
    cout<<"Warranty Period: "<<product.getWarrantyPeriod()<<endl;
    cout<<"Total Bill: "<<product.calculateTotalBill()<<endl;
}
