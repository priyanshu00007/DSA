#include <iostream>
using namespace std;

int main() {
    int a[5] = {2, 4, 6, 8, 10}; // Assuming a sorted array for binary search
    int x, lb = 0, ub = 4; // Initializing lower bound and upper bound
    int mid;

    cout << "Enter the value of x: ";
    cin >> x;

    while (lb <= ub) {
        mid = (lb + ub) / 2;

        if (a[mid] == x) {
            cout << "The value is found at index " << mid << endl;
            return 0;
        } else if (x < a[mid]) {
            ub = mid - 1; // Update upper bound
        } else {
            lb = mid + 1; // Update lower bound
        }
    }

    cout << "The value is not found" << endl;
    return 0;
}
