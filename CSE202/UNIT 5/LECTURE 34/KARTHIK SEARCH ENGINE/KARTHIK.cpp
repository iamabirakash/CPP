// You are using GCC
#include <iostream>
#include <cstring>
using namespace std;

class FindSubstring {
private:
    char str[30];

public:
    void input();
    void show();
    int operator/(FindSubstring formal_parameter);
};

void FindSubstring::input() {
    cin >> str;
}

void FindSubstring::show() {
    cout << "\n" << str;
}

int FindSubstring::operator/(FindSubstring formal_parameter) {
   //Type your code here
   if(strstr(this->str,formal_parameter.str)){
       return 1;
   }
   return 0;
}

int main() {
    FindSubstring a, b;
    int c;
    a.input();
    b.input();
    c = a / b;
    if (c == 1)
        cout << "Substring is present";
    else
        cout << "Substring is not present";

    return 0;
}
