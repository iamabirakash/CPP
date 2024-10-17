// You are using GCC
#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
class Vehicle{
    protected:
        double fc,hp;
    public:
        Vehicle(double fuel,double horsep){
            fc = fuel;
            hp = horsep;
        }
        double er() const{
            return hp/fc;
        }
};
class Electric: virtual public Vehicle{
    public:
        Electric(double fuel,double horsep): Vehicle(fuel,horsep){}
    
};
class Gasoline: virtual public Vehicle{
    public:
        Gasoline(double fuel,double horsep): Vehicle(fuel,horsep){}
    
};
class Hybrid: public Electric, public Gasoline{
    public:
        Hybrid(double fuel,double horsep) : Vehicle(fuel,horsep), Electric(fuel,horsep), Gasoline(fuel,horsep){}
        string lEfficiency() const{
            double ratio = er();
            cout<<fixed<<setprecision(2)<<ratio<<endl;
            if (ratio < 5.0) {
                return "Low Efficiency";
            } else if (ratio <= 10.0) {
                return "Moderate Efficiency";
            } else {
                return "High Efficiency";
            }
        }
};
int main(){
    double fuel,horsep;
    cin>>fuel;
    cin>>horsep;
    Hybrid h(fuel,horsep);
    // double ratio = h.er();
    string elabel = h.lEfficiency();
    // cout << fixed << setprecision(2) << ratio << endl;
    cout << elabel << endl;
    return 0;
}
