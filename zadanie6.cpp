#include <iostream>

// A function for counting the number of even and odd numbers in an array
void countEvenOdd(int arr[], int n, int& evenCount, int& oddCount) {
    evenCount = 0;
    oddCount = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] % 2 == 0) {
            evenCount++;
        }
        else {
            oddCount++;
        }
    }
}

int main() {
    int arr[] = { 5, 3, 9, 1, 7, 6, 8 }; // The given array
    int n = sizeof(arr) / sizeof(arr[0]); // Determining the size of the array

    int evenCount, oddCount;
    countEvenOdd(arr, n, evenCount, oddCount); // Counting the number of even and odd numbers

    std::cout << "Number of even numbers: " << evenCount << std::endl;
    std::cout << "Number of odd numbers: " << oddCount << std::endl;

    return 0;
}