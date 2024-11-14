//WAP TO SWAP TWO VARIABLES OF SAME TYPE USING FUNCTION TEMPLATE
#include<iostream>
using namespace std;
template<class T>
T sswap(T a,T b){
    T temp = a;
    a = b;
    b = temp;
    cout<<a<<" "<<b;
}
void sswap(T &a,T &b){
    T temp = a;
    a = b;
    b = temp;
}
int main(){
    int x,y;
    cin>>x>>y;
    sswap<int>(x,y);
}
