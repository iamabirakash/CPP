// You are using GCC
#include<iostream>
#include<cctype>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    int cnt = 0;
    for(char ch : str){
        ch = toupper(ch);
        if(!(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')&&(ch>='A' && ch<='Z')){
            cnt++;
        }
    }
    cout<<cnt;
}
