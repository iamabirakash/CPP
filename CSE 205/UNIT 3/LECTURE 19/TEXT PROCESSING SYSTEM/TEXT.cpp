#include <iostream>
#include <string>

using namespace std;

int main() {
    string str, pattern;
    getline(cin, str);
    getline(cin, pattern);

    if (pattern.length() > str.length()) {
        cout << "Pattern is longer than the string" << endl;
        return 0;
    }

    bool found = false;
    for (int i = 0; i <= str.length() - pattern.length(); i++) {
        string temp = str.substr(i, pattern.length());
        if (temp == pattern) {
            cout << "Pattern found at index " << i << endl;
            found = true;
        }
    }

    if (!found) {
        cout << "Pattern not found" << endl;
    }

    return 0;
}
