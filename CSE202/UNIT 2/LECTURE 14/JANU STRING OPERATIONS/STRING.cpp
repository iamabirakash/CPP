// You are using GCC
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    char ch;
    cin>>ch;
    str.push_back(ch);
    cout<<str<<endl;
    str.pop_back();
    cout<<str;
}
