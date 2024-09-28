// You are using GCC
#include <iostream>
using namespace std;

void reverseDeque(int* dq, int n) {
    //Type your code here
    int left = 0;
    int right = n - 1;

    // Swap elements from the start and end until the middle is reached
    while (left < right) {
        // Swap dq[left] and dq[right]
        int temp = dq[left];
        dq[left] = dq[right];
        dq[right] = temp;

        // Move the pointers towards the middle
        left++;
        right--;
    }
}

int main() {
    int n;
    cin >> n;

    int* myDeque = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> myDeque[i];
    }

    reverseDeque(myDeque, n);

    for (int i = 0; i < n; i++) {
        cout << myDeque[i] << " ";
    }

    delete[] myDeque;

    return 0;
}
