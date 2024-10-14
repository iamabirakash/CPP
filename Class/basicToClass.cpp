#include<iostream>
using namespace std;
class area{
    double radius;
    public:
        area(){
            radius = 0.0;
        }
        void get_data(){
            cin>>radius;
        }
        operator double(){
            cout<<"Class to Basic"<<endl;
            double ans = 3.14*radius*radius;
            return ans;
        }
};
int main(){
    double radius;
    area a;
    a.get_data();
    radius = a;
    cout<<"\nArea = "<<radius;
    return 0;
}
