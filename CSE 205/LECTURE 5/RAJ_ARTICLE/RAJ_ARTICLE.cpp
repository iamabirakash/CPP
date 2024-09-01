// You are using GCC
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int word = 0;
    bool check = false;
    for(char c : s){
        if(c!=' ' && c!='\t' && c!='\n'){
            if(!check){
                word++;
                check=true;
            }
        } else {
            check=false;
        }
    }
    cout<<word;
}
