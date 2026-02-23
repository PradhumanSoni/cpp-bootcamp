#include <iostream>

int main() {
    int AA[10] = {11, 22, 33, 44, 55, 66, 77, 88, 99, 11};
    int n = 10;
    int mid = 5; // Midpoint for an array of 10
    int temp;

    // Reverse the first half (indices 0 to 4)
    for (int i = 0; i < mid / 2; i++) {
        temp = AA[i];
        AA[i] = AA[mid - 1 - i];
        AA[mid - 1 - i] = temp;
    }

    // Reverse the second half (indices 5 to 9)
    for (int i = 0; i < mid / 2; i++) {
        // We start at 'mid' and move inward
        temp = AA[mid + i];
        AA[mid + i] = AA[n - 1 - i];
        AA[n - 1 - i] = temp;
    }

    // Display the output
    for (int i = 0; i < n; i++) {
        std::cout << AA[i] << " ";
    }

    return 0;
}