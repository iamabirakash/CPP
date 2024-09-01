// You are using GCC
#include<iostream>
#include<sstream>
#include<string>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    string target;
    getline(cin,target);
    stringstream ss(s);
    string temp;
    
    string current_word;
    bool word_found = false;

    for (char c : s) {
        if (c == ' ' || c ==',' || c == '\t' || c == '\n') {
            // If a word boundary is found, check the current word
            if (current_word == target) {
                word_found = true;
                break;
            }
            // Reset current_word for the next word
            current_word = "";
        } else {
            // Append the current character to the current word
            current_word += c;
        }
    }

    // Check the last word in the sentence
    if (current_word == target) {
        word_found = true;
    }

    if(word_found){
        cout<<"The word '"<<target<<"' is present in the given sentence."<<endl;
    } else {
        cout<<"The word '"<<target<<"' is not present in the given sentence."<<endl;
    }
    return 0;
}
