#include <iostream>
using namespace std;

int main() {
    int a[5]; // Array of size 5
    int min_index, temp; // Variables for index and swapping

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < 5; ++i) {
        cin >> a[i];
    }

    // Selection Sort Algorithm
    for (int i = 0; i < 4; ++i) { // Traverse through the array
        min_index = i; // Assume the current index has the minimum value

        for (int j = i + 1; j < 5; ++j) { // Find the index of the minimum element
            if (a[j] < a[min_index]) {
                min_index = j; // Update the index of the minimum element
            }
        }

        if (min_index != i) { // Swap if the minimum element's index has changed
            temp = a[i];
            a[i] = a[min_index];
            a[min_index] = temp;
        }
    }

    cout << "Sorted array: ";
    for (int i = 0; i < 5; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
