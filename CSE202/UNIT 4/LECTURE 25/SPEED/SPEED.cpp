// You are using GCC
#include<iostream>
#include<iomanip>
using namespace std;
class Speed{
    float ms;
    public:
        Speed(float k){
            ms = k;
        }
        operator float(){
            return ms*(1000.0/3600.0);
        }
};
int main(){
    float kilo;
    cin>>kilo;
    Speed s(kilo);
    float ms = s;
    cout<<fixed<<setprecision(3)<<ms<<" m/s";
}
