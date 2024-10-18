#include <iostream>
#include <cstring> // For string manipulation
using namespace std;

// Function to perform quicksort on the array of strings
void quicksort(string quotes[], int left, int right) {
    if (left < right) {
        // Partitioning the array
        string pivot = quotes[right];
        int i = left - 1;

        for (int j = left; j < right; j++) {
            if (quotes[j] > pivot) { // Change to '>' for descending order
                i++;
                swap(quotes[i], quotes[j]);
            }
        }
        swap(quotes[i + 1], quotes[right]);
        int pivotIndex = i + 1;

        // Recursively sort the partitions
        quicksort(quotes, left, pivotIndex - 1);
        quicksort(quotes, pivotIndex + 1, right);
    }
}

int main() {
    int n;
    cin >> n; // Read the number of quotes
    cin.ignore(); // Ignore the newline character after the integer input

    string quotes[10]; // Declare an array to hold up to 10 quotes
    string input;

    // Read the entire line of quotes
    getline(cin, input);

    // Split the input string into words (quotes)
    char* token = strtok(&input[0], " "); // Use strtok to split by spaces
    int index = 0;

    while (token != nullptr && index < n) {
        quotes[index++] = string(token); // Store each word in the array
        token = strtok(nullptr, " "); // Get the next token
    }

    // Sort the quotes in descending order
    quicksort(quotes, 0, index - 1);

    // Output the sorted quotes
    for (int i = 0; i < index; i++) {
        cout << quotes[i]<<" ";
    }

    return 0;
}
