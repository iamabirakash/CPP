#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;  // Input number of products sold
    int products[n];
    for (int i = 0; i < n; i++) {
        cin >> products[i];  // Input product IDs
    }
    // Find the maximum product ID
    int maxProduct = products[0];
    for (int i = 1; i < n; i++) {
        if (products[i] > maxProduct) {
            maxProduct = products[i];
        }
    }
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //     if(products[i]!=maxProduct)
    //     }
    // }
    // Create and initialize a frequency array
    int frequency[maxProduct + 1] = {0};

    // Count frequencies of each product ID
    for (int i = 0; i < n; i++) {
        frequency[products[i]]++;
    }

    // Output the frequency of each product in ascending order of IDs
    for (int i = 1; i <= maxProduct; i++) {
        if (frequency[i] > 1) {
            cout << i << " - " << frequency[i] << " times" << endl;
        } else if (frequency[i] > 0){
            cout << i << " - " << frequency[i] << " time" << endl;
        }
    }

    return 0;
}
