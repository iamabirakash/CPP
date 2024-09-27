// You are using GCC
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    string input;
    getline(cin,input);
    
    ofstream file("sample.txt");
    file<<input;
    file.close();
    
    ifstream infile("sample.txt");
    string fileContent;
    getline(infile,fileContent);
    cout<<fileContent<<endl;
    infile.close();
    return 0;
}
