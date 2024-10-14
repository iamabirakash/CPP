// You are using GCC
#include <iostream>
#include <string>
#include <cctype>
using namespace std;
class Demo {
private:
    static string move(string str) {  
        // Type your code here
        string alpha;
        string nonalpha;
        for(char c : str){
            if(isalnum(c)){
                alpha += c;
            } else {
                nonalpha += c;
            }
        }
        return alpha+nonalpha;
    }
    
    friend class Main;
};
class Main : private Demo {
public:
    static void run() {
        // Type your code here
        string str;
        cin>>str;
        string result = move(str);
        cout<<result<<endl;
    }
};
int main() {
    Main::run();
    return 0;
}
