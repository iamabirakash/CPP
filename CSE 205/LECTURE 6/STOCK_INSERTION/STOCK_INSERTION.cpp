// You are using GCC
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cin >> n;

    double stockPrices[n];
    for (int i = 0; i < n; i++) {
        cin >> stockPrices[i];
    }

    // Print the initial order
    cout << "Initial order: ";
    for (int i = 0; i < n; i++) {
        cout << fixed << setprecision(2) << stockPrices[i] << " ";
    }
    cout << endl;

    // Perform insertion sort
    for (int i = 1; i < n; i++) {
        double key = stockPrices[i];
        int j = i - 1;

        // Print the updated stock prices after each iteration
        while (j >= 0 && stockPrices[j] > key) {
            stockPrices[j + 1] = stockPrices[j];
            j--;
        }
        stockPrices[j + 1] = key;
        cout << "After Iteration " << i << ": ";
        for (int k = 0; k < n; k++) {
            cout << fixed << setprecision(2) << stockPrices[k] << " ";
        }
        cout << endl;

    }

    // Print the sorted order
    cout << "Sorted order: ";
    for (int i = 0; i < n; i++) {
        cout << fixed << setprecision(2) << stockPrices[i] << " ";
    }
    cout << endl;

    return 0;
}
