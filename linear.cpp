#include <iostream>
using namespace std;

int main() {
    int a[5]; // Array of size 5
    int x;
    int count = 0 ;

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < 5; ++i) {
        cin >> a[i];
    }

    cout << "Enter the value to search: ";
    cin >> x;

    for (int i = 0; i < 5; ++i) {
        if (a[i] == x) {
            count = 1;
            cout << "Element found at index " << i << endl;
            break; // Break the loop once element is found
        }
    }

    if (count == 0) {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}

