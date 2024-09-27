// You are using GCC
#include<iostream>
using namespace std;
class Distance{
    int feet;
    int inches;
    public:
        Distance():feet(0),inches(0){}
        void set(int ft,int in){
            feet = ft;
            inches = in;
        }
        void add(Distance &d){
            Distance result;
            result.feet = feet+d.feet;
            result.inches = inches+d.inches;
            if(result.inches>=12){
                result.feet += result.inches/12;
                result.inches = result.inches%12;
            }
            cout<<result.feet<<"'"<<result.inches<<"\""<<endl;
        }
};
int main(){
    int feet1,inches1,feet2,inches2;
    cin>>feet1>>inches1;
    Distance d1,d2;
    d1.set(feet1,inches1);
    cin>>feet2>>inches2;
    d2.set(feet2,inches2);
    d1.add(d2);
    return 0;
}
