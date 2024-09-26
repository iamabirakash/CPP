// You are usin
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    int n;
    cin>>n;
    ofstream outFile("numbers.txt");
    for(int i=1;i<=n;i++){
        outFile<<i<<" ";
    }
    outFile.close();
    ifstream inFile("numbers.txt");
    int number;
    while(inFile>>number){
        cout<<number<<" ";
    }
    inFile.close();
    return 0;
}
