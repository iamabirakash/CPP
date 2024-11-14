#include<iostream>
using namespace std;

template<class T1,class T2,class T3>
void avg(T1 a,T2 b,T3 c){
    T3 sum = a + b + c;
    cout<<sum/3;
}
int main(){
    int a,b;
    float c;
    cin>>a>>b>>c;
    avg<float>(a,b,c);
}
