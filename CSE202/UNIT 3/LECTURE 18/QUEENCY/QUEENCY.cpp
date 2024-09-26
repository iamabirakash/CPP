// You are using GCC
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    string name;
    getline(cin,name);
    ofstream file("gfg.data");
    file<<name<<endl;
    file.close();
    ifstream ifile("gfg.data");
    getline(ifile,name);
    ifile.close();
    cout<<name<<endl;
    return 0;
}
