// You are using GCC
//WAP TO WRITE A TABLE
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream outFile;
    outFile.open("Tables.txt");
    outFile<<"\nThe Table of Number 2 is: ";
    for(int i=1;i<11;i++){
        outFile<<"\n2 x "<<i<<" = "<<2*i;
    }
    outFile.close();
    char ans[80];
    ifstream inpfile;
    inpfile.open("Tables.txt");
    while(inpfile.eof()==0){
        inpfile.getline(ans,80);
        cout<<"\n"<<ans;
    }
    inpfile.close();
}
