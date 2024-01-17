#include <iostream>
using namespace std;

int main() {
    int a[5]; // Array of size 5
    int temp; // Temporary variable for swapping
    bool swapped; // Flag to indicate if a swap occurred

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < 5; ++i) {
        cin >> a[i];
    }

    // Bubble Sort Algorithm
    for (int i = 0; i < 4; ++i) { // Number of passes
        swapped = false; // Reset the swap flag for each pass

        for (int j = 0; j < 4 - i; ++j) { // Comparisons within each pass
            if (a[j] > a[j + 1]) { // Check if adjacent elements are in the wrong order
                // Swap the elements
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;

                swapped = true; // Set swap flag if a swap occurred
            }
        }

        if (!swapped) { // If no swap occurred in the pass, the array is already sorted
            break;
        }
    }

    cout << "Sorted array: ";
    for (int i = 0; i < 5; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}

