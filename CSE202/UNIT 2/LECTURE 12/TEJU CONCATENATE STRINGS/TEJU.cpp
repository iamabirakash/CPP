// You are using GCC
#include<iostream>
#include<string>
using namespace std;
void concatenateStrings(string result, string a, string b){
    result = a + b;
    cout<<result;
}
int main(){
    string a,b;
    cin>>a;
    cin>>b;
    string result;
    concatenateStrings(result,a,b);
}
