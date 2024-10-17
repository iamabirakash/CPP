// You are using GCC
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    double vel,acc,t;
    cin>>vel>>acc>>t;
    double fvel = vel+(acc*t);
    cout<<fixed<<setprecision(1)<<fvel<<" m/s";
}
