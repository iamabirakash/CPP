// You are using GCC
#include <iostream>
#include <string>
using namespace std;

class Welcome {
// Type your code here
    public:
        void putw(){
            cout<<"Welcome!! ";
        }
};

class Hello : public Welcome {
// Type your code here
    public:
        void puth(){
            cout<<"Hi, ";
        }
};

int main() {
    string name;
    cin >> name;

    Hello H;
    H.putw();
    H.puth();
    cout << name;

    return 0;
}
