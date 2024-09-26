// You are using GCC
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    string filename;
    getline(cin,filename);
    ofstream file(filename);
    if(file.is_open()){
        cout<<"File '"<<filename<<"' opened successfully."<<endl;
    }
    file.close();
    cout<<"File '"<<filename<<"' closed successfully."<<endl;
}
