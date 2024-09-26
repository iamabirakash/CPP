// You are using GCC
#include<iostream>
#include<iomanip>
using namespace std;
class SalesData{
    double totalRevenue;
    int units;
    public:
        SalesData(double tr,int u){
            totalRevenue = tr;
            units = u;
        }
        void display(){
            cout<<"Units Sold: "<<units<<endl;
            cout<<"Revenue Generated: "<<fixed<<setprecision(2)<<totalRevenue<<endl;
            double avg = totalRevenue/units;
            cout<<"Average Price: "<<fixed<<setprecision(2)<<avg;
        }
};
int main(){
    double tr;
    int u;
    cin>>tr;
    cin>>u;
    SalesData s(tr,u);
    s.display();
}
