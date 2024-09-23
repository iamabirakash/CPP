// You are using GCC
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream outFile;
    outFile.open("Questions.txt");
    outFile<<"\nWhat is C language?";
    outFile<<"\nWhat is C++ language?";
    outFile.close();
    outFile.open("Answers.txt");
    outFile<<"\nStructured Language";
    outFile<<"\nObject Oriented Language";
    outFile.close();
    char ques[80],ans[80];
    ifstream inpfile;
    inpfile.open("Questions.txt");
    cout<<"\n***************SAMPLE QUESTIONS FOR QUIZ CONTEST";
    while(inpfile.eof()==0){
        inpfile.getline(ques,80);
        cout<<"\n"<<ques;
    }
    inpfile.close();
    inpfile.open("Answers.txt");
    cout<<"\n***************ANSWERS FOR SAMPLE QUESTIONS";
    while(inpfile){
        inpfile.getline(ans,80);
        cout<<"\n"<<ans;
    }
    inpfile.close();
}
