// You are using GCC
#include <iostream>
using namespace std;

class Demo {
private:
    int num1, num2;

public:
    Demo(int n1, int n2) {
        // Type your code here
        num1 = n1;
        num2 = n2;
        cout<<"Inside Constructor"<<endl;
    }

    void display() {
        // Type your code here
        cout<<num1<<endl;
        cout<<num2<<endl;
    }

    ~Demo() {
        // Type your code here
        cout<<"Inside Destructor";
    }
};

int main() {
    int n1, n2;
    cin >> n1 >> n2;

    Demo obj(n1, n2);
    obj.display();

    return 0;
}
