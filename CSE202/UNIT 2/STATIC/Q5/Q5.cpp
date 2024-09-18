// You are using GCC
#include<iostream>
#include<string>
using namespace std;
bool isValidPhoneNumber(string s){
    if(s.length()!=12){
        return false;
    }
    for(int i=0;i<s.length();i++){
        if(i==3 || i==7){
            if(s[i]!='-'){
                return false;
            }
        }
    }
    return true;
}
int main(){
    string s;
    getline(cin,s);
    if(isValidPhoneNumber(s)){
        cout<<"Yes, the phone number is valid"<<endl;
        for(int i=0;i<s.length();i++){
            if(s[i]!='-'){
                cout<<s[i];
            }
        }
    } else {
        cout<<"No, the phone number is not valid";
    }
}
