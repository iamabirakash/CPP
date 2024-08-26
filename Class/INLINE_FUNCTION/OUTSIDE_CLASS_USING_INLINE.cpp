#include<iostream>
using namespace std;
class divisible{
    int n;
    public:
        void get();
        void division();
}d;
inline void divisible::get(){
    cin>>n;
}
inline void divisible::division(){
    if(n%3==0 && n%5==0){
        cout<<"Divisible by 3 and 5";
    } else {
        cout<<"Not divisible by 3 and 5";
    }
}
int main(){
    d.get();
    d.division();
}
