// You are using GCC
#include<iostream>
using namespace std;
inline int sumOfSquaresEven(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=(2*i)*(2*i);
    }
    return sum;
}
inline int sumOfSquaresOdd(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=(2*i-1)*(2*i-1);
    }
    return sum;
    
}

int main(){
    int n;
    cin>>n;
    cout<<sumOfSquaresEven(n)<<endl;
    cout<<sumOfSquaresOdd(n)<<endl;
    return 0;
}
