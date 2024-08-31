// You are using GCC
#include<iostream>
using namespace std;
void mergeArrays(string arr1[], int n, string arr2[], int m, string merged[]) {
    for (int i = 0; i < n; ++i) {
        merged[i] = arr1[i];
    }
    for (int i = 0; i < m; ++i) {
        merged[n + i] = arr2[i];
    }
}

int main() {
    int n, m;
    cin >> n;
    cin.ignore(); // To ignore the newline character after the integer input
    string fiction[n];
    for (int i = 0; i < n; ++i) {
        getline(cin, fiction[i]);
    }
    cin >> m;
    cin.ignore(); // To ignore the newline character after the integer input
    string nonFiction[m];
    for (int i = 0; i < m; ++i) {
        getline(cin, nonFiction[i]);
    }

    string merged[n + m];
    mergeArrays(fiction, n, nonFiction, m, merged);

    for (int i = 0; i < n + m; ++i) {
        cout << merged[i] << endl;
    }

    return 0;
}
